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
    cout << "size : " << s.size() << endl; // Actual length of the string
    cout << "maximum size : " << s.max_size() << endl;
    cout << "capacity : " << s.capacity() << endl; // Allocated memory for the string
    /*
    at first memory alocated capacity : 15
    It can be greater than the actual length (size()) because strings allocate extra memory to optimize performance.
    If the string grows beyond its capacity, it will be reallocated with more memory.
    */

    s.append(" Huda");
    cout << "size : " << s.size() << endl;

    cout << "capacity : " << s.capacity() << endl; // Allocated memory for the string

    cout << "string is empty  : " << (s.empty() ? "YES" : "NO") << endl;

    s.resize(10);
    cout << "resize : " << s.size() << endl;
    cout << "after resize string : " << s << endl;

    s.clear();
    cout << "after clear string : " << s << endl;

    return 0;
}