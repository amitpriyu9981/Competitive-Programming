#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> sardar(n), ramadhir(m);
    for (int i = 0; i < n; i++) {
        cin >> sardar[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> ramadhir[i];
    }

    vector<pair<int, int>> targets(k);
    for (int i = 0; i < k; i++) {
        cin >> targets[i].first >> targets[i].second;
    }

    int sardar_count = 0, ramadhir_count = 0;
    for (int i = 0; i < k; i++) {
        int a = targets[i].first - 1, b = targets[i].second - 1;
        if ((sardar[a] ^ ramadhir[b]) & 1) {  // gun fires properly
            ramadhir[b] = -1;  // mark Ramadhir's soldier as dead
        } else {
            sardar[a] = -1;  // mark Sardar's soldier as dead
        }
    }

    for (int i = 0; i < n; i++) {
        if (sardar[i] != -1) sardar_count++;
    }
    for (int i = 0; i < m; i++) {
        if (ramadhir[i] != -1) ramadhir_count++;
    }

    if (sardar_count >= ramadhir_count) {
        cout << "Sardar wins" << endl;
    } else {
        cout << "Ramadhir wins" << endl;
    }

    return 0;
}