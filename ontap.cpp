#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, K;
vector<string> names;
vector<string> combination;

void generate_combinations(int start_idx) {
    if (combination.size() == K) {
        for (int i = 0; i < K; ++i) {
            cout << combination[i];
            if (i < K - 1) cout << " ";
        }
        cout << endl;
        return;
    }

    for (int i = start_idx; i < N; ++i) {
        combination.push_back(names[i]);
        generate_combinations(i + 1);
        combination.pop_back();
    }
}

int main() {
    cin >> N >> K;

    names.resize(N);
    for (int i = 0; i < N; ++i) {
        cin >> names[i];
    }

    sort(names.begin(), names.end());

    generate_combinations(0);

    return 0;
}

