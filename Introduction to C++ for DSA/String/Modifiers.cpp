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
    string k;
    cin >> k;

    append

    s.append(k);
    cout << s << endl;

    add string
     string ans = s + " " + k;
     cout << ans << endl;

    push_back()
    s.push_back('@');
    cout << s << endl;

    s.pop_back();
    cout << s << endl;

    assign
    
      assign() first clears the string and then copies the new content.
       So, calling s.assign("raju");
       may temporarily erase s before reassigning s= raju .
    
    s.assign("raju");
    cout << s << endl;

    all remove erase
    s.erase();
    cout << s << endl;

    replace
    s.replace(s.begin(), s.begin() + k.size(), k);
    cout << s << endl;

    insert a character
    s.insert(s.begin() + 2, 'g');
    cout << s << endl;
    return 0;
}
