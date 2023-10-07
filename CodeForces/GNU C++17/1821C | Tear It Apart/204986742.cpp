#include <bits/stdc++.h>
 
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
    cin>>s;
    int cnt=0;
  int n=s.size();
        int ans=n;
        for(int i=0;i<26;i++){
            char ch=('a'+i);
            int len=0;
            int res=0;
            for(int j=0;j<n;j++){
                if(s[j]==ch){
                 res=max(res,len);
                 len=0;
                }
                else
                {
                     len++;
                }   
            }
            res=max(res,len);
            ans=min(ans,res);
        }
 
           while ( ans>0)
    {
         ans=ans/2;
         cnt++;
    }
    cout <<cnt<<endl;
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