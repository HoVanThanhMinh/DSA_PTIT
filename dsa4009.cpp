#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

// Hàm nhân hai ma trận
vector<vector<int>> multiplyMatrix(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    int N = A.size();
    vector<vector<int>> C(N, vector<int>(N, 0));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            for (int k = 0; k < N; ++k) {
                C[i][j] = (C[i][j] + (1LL * A[i][k] * B[k][j]) % MOD) % MOD;
            }
        }
    }

    return C;
}

// Hàm tính lũy thừa ma trận A^K
vector<vector<int>> matrixPower(const vector<vector<int>>& A, int K) {
    int N = A.size();

    if (K == 1) {
        return A;
    }

    if (K % 2 == 0) {
        vector<vector<int>> halfPower = matrixPower(A, K / 2);
        return multiplyMatrix(halfPower, halfPower);
    } else {
        vector<vector<int>> halfPower = matrixPower(A, (K - 1) / 2);
        vector<vector<int>> temp = multiplyMatrix(halfPower, halfPower);
        return multiplyMatrix(temp, A);
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<vector<int>> A(N, vector<int>(N));

        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cin >> A[i][j];
            }
        }

        vector<vector<int>> result = matrixPower(A, K);

        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
