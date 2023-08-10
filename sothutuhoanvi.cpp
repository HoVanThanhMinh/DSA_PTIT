#include <iostream>
#include <vector>
using namespace std;

int n, dem;
vector<int> A, B, X;

int kiemtra() {
    for (int i = 1; i <= n; i++) {
        if (A[i] != X[i]) return 0;
    }
    return 1;
}

void quaylui(int i) {
    for (int j = 1; j <= n; j++) {
        if (B[j] == 0) {
            A[i] = j;
            B[j] = 1;
            if (i == n) {
                if (kiemtra()) {
                    cout << dem << endl;
                    break;
                }
            } else {
                quaylui(i + 1);


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findPermutationOrder(vector<int>& permutation) {
    int n = permutation.size();
    int order = 0;
    vector<int> temp(permutation);
    sort(temp.begin(), temp.end());
    do {
        if (temp == permutation) break;
        order++;
    } while (next_permutation(temp.begin(), temp.end()));
    return order + 1;
}

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t) {
        int N;
        cin >> N;

        vector<int> permutation(N);
        for (int i = 0; i < N; ++i) {
            cin >> permutation[i];
        }

        int order = findPermutationOrder(permutation);
        cout << order << endl;
    }

    return 0;
}
