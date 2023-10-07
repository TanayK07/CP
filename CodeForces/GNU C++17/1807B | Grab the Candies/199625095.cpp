#include "bits/stdc++.h" // Include every standard library
// #pragma GCC optimize("Ofast")    // can cause trouble so beware :)
// #pragma GCC target("avx,avx2")  //  Same here :p
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
    int x, odd = 0, even = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        if(x%2 == 0)
        {
            even+=x;
        }
        else
        {
            odd+=x;
        }
    }
    if(even > odd)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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
    ios_base::sync_with_stdio(false); // Disable backwards compatability scanf(), printf() sync with cin.
    cin.tie(NULL);                    // Disable sync with cout. WARNING: May lead to problems with frequent switch btwn cin&cout
}