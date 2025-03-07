// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const int N = 1e6 + 9;
const ll mod = 1e5 + 7, inf = 1e9;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;

    // i th index s[i]
    cout << "[i] : " << s[2] << endl;
    // i th index s.at(i)
    cout << "s.at(i) : " << s.at(0) << endl;
    // s.back() the last element access
    cout << "last element : " << s.back() << endl;
    // s.front() the first element access
    cout << "first element : " << s.front() << endl;
    return 0;
}