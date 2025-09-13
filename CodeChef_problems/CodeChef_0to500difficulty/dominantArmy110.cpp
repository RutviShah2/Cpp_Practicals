#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    if (!(cin >> T)) return 0;
    while (T--) {
        int NA, NB, NC;
        cin >> NA >> NB >> NC;
        bool dominant = (NA > NB + NC) || (NB > NA + NC) || (NC > NA + NB);
        cout << (dominant ? "YES" : "NO") << '\n';
    }
    return 0;
}
