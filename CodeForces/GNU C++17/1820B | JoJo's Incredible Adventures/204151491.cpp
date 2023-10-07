#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
 
using namespace std;
 
typedef long long LL;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
 
#define FOR(a, b, c) for (int a = (b); (a) < (c); ++(a))
#define MSET(a, b) memset(a, b, sizeof(a))
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define ALL(v) v.begin(), v.end()
#define SIZE(v) (int)v.size()
#define sort(a) sort(a.begin(), a.end())
#define endl "\n"
#define printl(a) cout << a << "\n";
#define YE cout <<"YES"<<endl;
#define NO cout <<"NO"<<endl;
#define deb(...) logger(#__VA_ARGS__, __VA_ARGS__)
template <typename... Args>
 
 
 
void solve()
{
    string binaryString;
    cin >> binaryString;
 
    LL n = binaryString.size();
    LL maxLength = 0;
    LL currentLength = 0;
    LL startLength = 0;
    bool flag = true;
 
    for (int i = 0; i < n; i++)
    {
        if (binaryString[i] == '1')
        {
            currentLength++;
        }
        else
        {
            if (flag)
            {
                flag = false;
                startLength = currentLength;
            }
            maxLength = max(maxLength, currentLength);
            currentLength = 0;
        }
    }
    maxLength = max(maxLength, currentLength);
 
    LL endLength = currentLength;
    maxLength = max(maxLength, startLength + endLength);
 
    if (flag)
    {
        cout << n*n << endl;
    }
    else 
    {
        LL radius = (maxLength - 1) / 2;
        LL area = (maxLength - radius) * (radius + 1);
        cout << area << endl;
    }
}
 
 
int main()
{
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}