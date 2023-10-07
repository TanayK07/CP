#include "bits/stdc++.h"
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
#define SORT(a) sort(ALL(v))
#define endl "\n"
#define printl(a) cout << a << "\n";
#define INPUT(n) \
    int n = nxt();
#define deb(...) logger(#__VA_ARGS__, __VA_ARGS__)
template <typename... Args>
void logger(string vars, Args &&...values)
{
    cout << vars << " = ";
    string delim = "";
    (..., (cout << delim << values, delim = ", "));
    cout << endl;
}
 
 
int nxt();
void enableFastIO();
void solve()
{
    int n;
 cin >> n;
 string s;
 cin >> s;
 int mp[26];
 for (int i = 0; i < 26; i++) {
  mp[i] = -1;
 }
 for (int i = 0; i < n; i++) {
  int curr = (s[i] - 'a');
  if (mp[curr] == -1) {
   mp[curr] = (i % 2);
  }
  else {
   if (mp[curr] != (i % 2)) {cout << "NO\n"; return;}
  }
 }
 cout << "YES\n";
}
  
int main()
{
    enableFastIO();
 
    INPUT(T);
    while (T--)
        solve();
 
    return 0;
}
 
 
 
 
 
int nxt()
{
    int x;
    cin >> x;
    return x;
}
 
void enableFastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
 
 
 