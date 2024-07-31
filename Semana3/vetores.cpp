#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v;
    for (int i = 0; i < 10; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << "primeiro: " << v[0] << "\n";

    v.pop_back();
    cout << "tam: " << v.size() << "\n";

    for (auto x: v)
        cout << x << " ";
    cout << "\n";
}
