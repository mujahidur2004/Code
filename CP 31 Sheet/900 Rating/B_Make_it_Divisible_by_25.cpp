
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string n;
        cin >> n;

        int ans = n.size();

        vector<string> endings = {"00", "25", "50", "75"};

        for (string ending : endings) {
            int j = (int)n.size() - 1;

         
            while (j >= 0 && n[j] != ending[1])
                j--;

            if (j < 0) continue;

            j--;

           
            while (j >= 0 && n[j] != ending[0])
                j--;

            if (j >= 0) {
                int removed = (int)n.size() - j - 2;
                ans = min(ans, removed);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
