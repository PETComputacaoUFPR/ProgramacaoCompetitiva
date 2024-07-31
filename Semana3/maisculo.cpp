#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    char c;
    cin >> c;

    // tornar maisculo
    char c_upper;
    if (c >= 'a' && c <= 'z')
        c_upper = 'A' + (c - 'a');
    else
        c_upper = c;

    cout << c_upper << "\n"; 
}
