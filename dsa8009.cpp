#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int S, T;
        cin >> S >> T;

        unordered_map<int, int> visited;
        queue<pair<int, int>> q;
        q.push({S, 0});

        while (!q.empty()) {
            int currS = q.front().first;
            int steps = q.front().second;
            q.pop();

            if (currS == T) {
                cout << steps << endl;
                break;
            }

            if (visited[currS]) continue;
            visited[currS] = 1;

            if (currS > T) {
                q.push({currS - 1, steps + 1});
            } else {
                q.push({currS - 1, steps + 1});
                q.push({currS * 2, steps + 1});
            }
        }
    }

    return 0;
}
