//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//void generatePermutations(string s, int l, int r) {
//    if (l == r) {
//        cout << s <<" ";
//        return;
//    }
//
//    for (int i = l; i <= r; ++i) {
//        swap(s[l], s[i]);
//        generatePermutations(s, l + 1, r);
//        swap(s[l], s[i]);
//    }
//}
//
//int main() {
//    int T;
//    cin >> T;
//    for (int t = 0; t < T; ++t) {
//        string s;
//        cin >> s;
//        sort(s.begin(), s.end());
//        generatePermutations(s, 0, s.length() - 1);
//        cout << endl;
//    }
//
//    return 0;
//}
//
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void backtrack(string& s, vector<bool>& used, string& current, vector<string>& permutations) {
    if (current.length() == s.length()) {
        permutations.push_back(current);
        return;
    }

    for (int i = 0; i < s.length(); ++i) {
        if (!used[i]) {
            used[i] = true;
            current.push_back(s[i]);
            backtrack(s, used, current, permutations);
            current.pop_back();
            used[i] = false;
        }
    }
}

vector<string> generatePermutations(string s) {
    vector<string> permutations;
    vector<bool> used(s.length(), false);
    string current;
    backtrack(s, used, current, permutations);
    return permutations;
}

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t) {
        string s;
        cin >> s;
        vector<string> permutations = generatePermutations(s);
        // In ra k?t qu? cho test tuong ?ng
        for (const string& permutation : permutations) {
            cout << permutation << " ";
        }
        cout << endl;
    }

    return 0;
}
