#include <iostream>
#include <vector>

using namespace std;

// Hàm trộn hai mảng đã sắp xếp thành một mảng mới
vector<int> mergeArrays(const vector<int>& A, const vector<int>& B) {
    int M = A.size();
    int N = B.size();
    vector<int> result;
    int i = 0, j = 0;

    while (i < M && j < N) {
        if (A[i] <= B[j]) {
            result.push_back(A[i]);
            i++;
        } else {
            result.push_back(B[j]);
            j++;
        }
    }

    // Đưa các phần tử còn lại của mảng A vào mảng kết quả (nếu có)
    while (i < M) {
        result.push_back(A[i]);
        i++;
    }

    // Đưa các phần tử còn lại của mảng B vào mảng kết quả (nếu có)
    while (j < N) {
        result.push_back(B[j]);
        j++;
    }

    return result;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int M, N, K;
        cin >> M >> N >> K;

        vector<int> A(M), B(N);

        for (int i = 0; i < M; ++i) {
            cin >> A[i];
        }

        for (int i = 0; i < N; ++i) {
            cin >> B[i];
        }

        // Trộn hai mảng A và B thành mảng mới
        vector<int> mergedArray = mergeArrays(A, B);

        // In ra giá trị phần tử thứ K trong mảng mới
        cout << mergedArray[K - 1] << endl;
    }

    return 0;
}
