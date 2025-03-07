// Najmul Huda
#include <bits/stdc++.h>
#include <fstream>
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
    /*

          1. Create a stream object.
          2. Connect it to a file on disk.
          3.Read the file’s contents into our stream object.
          4. Close the file.

      */

    string word;                   // 1
    ifstream file("fileRead.txt"); // 2

    while (file >> word) // 3
        cout << word << endl;

    // the stream extraction operator (>>)
    /*
    How It Works:

                1. file >> word reads a single word at a time from the file.
                2. Words are separated by whitespace (spaces, tabs, newlines).
                3. The loop continues until the end of the file (EOF) is reached.
                4. Each word is printed on a new line.

*/
    file.close(); // 4
    return 0;
}