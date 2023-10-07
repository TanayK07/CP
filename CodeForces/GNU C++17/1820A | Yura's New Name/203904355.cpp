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
      string s;
    cin >> s;
    string s1;
    int ans = 0;
    if (s[0] == '_')
    {
        s1 = "^";
        ans++;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '_' && s1.back() == '_')
        {
            s1 += '^';
        }
        s1 += s[i];
    }
    if (s1.size() == 1){
        s1 += '^';
    }
    if (s1.back() == '_'){
        s1 += '^';
    }
    cout << s1.size() - s.size() << endl;
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