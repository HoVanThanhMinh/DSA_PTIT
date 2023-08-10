#include <iostream>
#include <vector>

using namespace std;


int qhd(int N, int V, vector<int>& A, vector<int>& C) {
    vector<vector<int>> dp(N + 1, vector<int>(V + 1, 0));

    // Xây dựng bảng dp bằng cách lần lượt xét từng đồ vật và thể tích túi từ 0 đến V
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= V; j++) {
            if (A[i - 1] <= j) {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - A[i - 1]] + C[i - 1]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    // Kết quả cuối cùng được lưu tại dp[N][V]
    return dp[N][V];
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, V;
        cin >> N >> V;

        vector<int> A(N);
        vector<int> C(N);

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        for (int i = 0; i < N; i++) {
            cin >> C[i];
        }

        int result = qhd(N, V, A, C);
        cout << result << endl;
    }

    return 0;
}
