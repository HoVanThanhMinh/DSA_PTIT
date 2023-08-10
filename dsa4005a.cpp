#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

// Hàm tính xâu Fibonacci thứ N
string fibonacci(int N, unordered_map<int, string>& memo) {
    if (N == 1) {
        return "A";
    }
    if (N == 2) {
        return "B";
    }

    // Kiểm tra xem xâu Fibonacci thứ N đã được tính trước đó chưa
    if (memo.find(N) != memo.end()) {
        return memo[N];
    }

    // Tính xâu Fibonacci bằng cách gọi đệ quy và nối hai xâu con
    string result = fibonacci(N - 2, memo) + fibonacci(N - 1, memo);

    // Lưu kết quả vào bộ nhớ tạm để sử dụng lại
    memo[N] = result;

    return result;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, i;
        cin >> N >> i;

        // Sử dụng unordered_map để lưu kết quả đã tính để tái sử dụng
        unordered_map<int, string> memo;

        // Tính xâu Fibonacci thứ N
        string result = fibonacci(N, memo);

        // In ký tự ở vị trí thứ i
        cout << result[i - 1] << endl;
    }

    return 0;
}
