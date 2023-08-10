#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};

// Hàm chèn một phần tử vào đầu danh sách liên kết
void insert(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

// Hàm lọc các phần tử có giá trị trùng nhau trong danh sách liên kết đơn
void filterDuplicates(Node* head) {
    Node* current = head;
    while (current != nullptr && current->next != nullptr) {
        Node* nextDistinct = current->next;
        while (nextDistinct != nullptr && nextDistinct->data == current->data) {
            Node* temp = nextDistinct;
            nextDistinct = nextDistinct->next;
            delete temp;
        }
        current->next = nextDistinct;
        current = nextDistinct;
    }
}

// Hàm liệt kê các phần tử trong danh sách liên kết đơn
void printList(Node* head) {
    while (head != nullptr) {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

// Hàm giải phóng bộ nhớ của danh sách liên kết
void deleteList(Node*& head) {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    int n;
    cout << "Nhap so luong phan tu trong danh sach: ";
    cin >> n;

    Node* head = nullptr;

    cout << "Nhap " << n << " phan tu: ";
    for (int i = 0; i < n; i++) {
        int value;
        std::cin >> value;
        insert(head, value);
    }

    // Sort the linked list before filtering (optional, but can improve performance)
    // Không nhất thiết nhưng có thể sắp xếp danh sách liên kết trước khi lọc (giúp tăng hiệu suất).
    // Nếu đã sort danh sách liên kết trước khi lọc thì ta không cần quan tâm đến hàm filterDuplicates.

    // gọi hàm filterDuplicates để lọc các phần tử có giá trị trùng nhau
    filterDuplicates(head);

    cout << "Danh sach sau khi loc: ";
    printList(head);

    // Giải phóng bộ nhớ của danh sách liên kết
    deleteList(head);

    return 0;
}
