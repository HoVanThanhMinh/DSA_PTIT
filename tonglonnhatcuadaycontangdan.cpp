#include <iostream>
#include <vector>
using namespace std;

int maxSumIncreasingSubsequence(vector<int>& A) {
    int n = A.size();
    vector<int> dp(n, 0);

    for (int i = 0; i < n; ++i) {
        dp[i] = A[i];  // Khởi tạo giá trị dp tại mỗi vị trí bằng giá trị tại vị trí đó của dãy A
        for (int j = 0; j < i; ++j) {
            if (A[i] > A[j]) {
                dp[i] = max(dp[i], dp[j] + A[i]);
            }
        }
    }

    int maxSum = 0;
    for (int i = 0; i < n; ++i) {
        maxSum = max(maxSum, dp[i]);
    }

    return maxSum;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        int result = maxSumIncreasingSubsequence(A);
        cout << result << endl;
    }

    return 0;
}
