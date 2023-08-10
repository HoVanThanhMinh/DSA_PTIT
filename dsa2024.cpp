#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void backtrack(vector<int>& a, vector<int>& current, int index) {
    if (current.size() >= 2) {
        for (int num : current) {
            cout << num << " ";
        }
        cout << endl;
    }

    for (int i = index; i < a.size(); ++i) {
        current.push_back(a[i]);
        backtrack(a, current, i + 1);
        current.pop_back();
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    vector<int> current;
    backtrack(a, current, 0);

    return 0;
}
