#include <REGX51.H>// QUAN SOAI CA - MAY KO BIET LA MAY NGU
#define D1		P3_0	  //Led 7 hang chuc
#define D2		P3_1	  //Led 7 hang don vi
#define DATA	P1		  //Port xuat data led 7
#define DQ		P3_2	 //Khai bao chan giao tiep DS18B20
unsigned char temp; //Bien luu gia tri nhiet do
unsigned char code Mang[10]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};//Mang LED 7
/*****************Ham delay*********************/
void delay_ms(unsigned int t){
        unsigned int i,j;
        for(i=0;i<t;i++)
        for(j=0;j<125;j++);
}
/****************Ctr giao tiep IC DS18B20***************************/
void delay_18B20(unsigned int ti){
    while(ti--);
}
void Init_18B20(void){
    DQ = 1;   
    delay_18B20(8);
    DQ = 0;   
    delay_18B20(65);
    DQ = 1;   
    delay_18B20(20);    
}
unsigned char ReadOneChar(void){
    unsigned char i=0;
    unsigned char dat = 0;
    for (i=8;i>0;i--){
          DQ = 0; CHUA XONG
          dat>>=1;
          DQ = 1;
          if(DQ)
          dat |= 0x80;
          delay_18B20(4);
    }
    return(dat);
}
void WriteOneChar(unsigned char dat){
    unsigned char i=0;
    for (i=8; i>0; i--){
        DQ = 0;
        DQ = dat&0x01;
        delay_18B20(5);
        DQ = 1;
        dat>>=1;
    }
}
void ReadTemperature(void){	
    unsigned char a=0;
    unsigned char b=0;
	//EA=0;//Cam ngat tranh viec anh huong qua trinh doc nhiet do
    Init_18B20();
    WriteOneChar(0xCC);        // Bo qua ROM
    WriteOneChar(0x44);
    delay_18B20(10); 
    Init_18B20();
    WriteOneChar(0xCC);
    WriteOneChar(0xBE);    //Doc nhiet do
    delay_18B20(10);
    a=ReadOneChar();        //Read temp low value
    b=ReadOneChar();          //Read temp high value
    temp=((b*256+a)>>4);    //gia tri nhiet do luu vao bien temp
	//EA=1; //Doc xong thi cho phep ngat
}//End code DS18B20
void main(){
	unsigned int time;
	delay_ms(500);
	while(1){
		D1=0; //Led so 1 sang
      	DATA=Mang[temp/10];//Xuat data gtri hang chuc cua nhiet do
      	delay_ms(1);//Tao tre 
      	DATA=0xff;//Xoa du lieu tren Port
      	D1=1;D2=0; //Led so 1 tat, led 2 sang
      	DATA=Mang[temp%10];//Xuat data gtri hang don vi cua nhiet do
      	delay_ms(1);
      	DATA=0xff;
      	D2=1;
		//End quet LED 7 Anot
		if(++time>500){ //Tao delay de cap nhat nhiet do
			  ReadTemperature(); //Cap nhat nhiet do
			  time=0;
		}
	 }
}
