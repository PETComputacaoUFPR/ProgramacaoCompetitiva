#include <bits/stdc++.h>
using namespace std;
/* encontrar o segundo maior valor */

int main () {
    int n;
    cin >> n;
    vector<pair<int, int>>v(n);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v[i] = make_pair(x, i);
    }

    sort(v.begin(), v.end());

    cout << v[n-2].second << "\n";
}


// declaração
tuple<string, int, float>pessoa;

// inicialização
get<0>(pessoa) = "rebeca";
get<1>(pessoa) = 25;
get<2>(pessoa) = 1.55;

// inicialização
pessoa = make_tuple("rebeca", 25, 1.55);




