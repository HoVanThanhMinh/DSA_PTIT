#include <iostream>
#include <climits>

using namespace std;

// Hàm tìm tổng con liên tục lớn nhất của mảng sử dụng thuật toán chia để trị
int maxSubArraySum(int arr[], int left, int right) {
    if (left == right) {
        return arr[left];
    }

    int mid = (left + right) / 2;

    // Tìm tổng lớn nhất bên trái của mảng
    int leftMaxSum = INT_MIN;
    int sum = 0;
    for (int i = mid; i >= left; i--) {
        sum += arr[i];
        if (sum > leftMaxSum) {
            leftMaxSum = sum;
        }
    }

    // Tìm tổng lớn nhất bên phải của mảng
    int rightMaxSum = INT_MIN;
    sum = 0;
    for (int i = mid + 1; i <= right; i++) {
        sum += arr[i];
        if (sum > rightMaxSum) {
            rightMaxSum = sum;
        }
    }

    // Tìm tổng lớn nhất của mảng chứa điểm giữa (có thể là mảng con liên tục nằm bên trái, bên phải hoặc chứa cả hai)
    int crossMaxSum = leftMaxSum + rightMaxSum;

    // Lấy tổng lớn nhất của mảng con liên tục trong 3 trường hợp: nằm bên trái, nằm bên phải và chứa cả hai
    return max(crossMaxSum, max(maxSubArraySum(arr, left, mid), maxSubArraySum(arr, mid + 1, right)));
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int arr[N];
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        int result = maxSubArraySum(arr, 0, N - 1);
        cout << result << endl;
    }

    return 0;
}
