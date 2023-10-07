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
 
void solve()
{
    int n;
    cin>>n;
    LL arr[n];
 
  FOR(i,0,n){
    cin>>arr[i];
  }
  sort(arr,arr+n);
  LL l1=arr[0]*arr[1];
  LL l2=arr[n-1]*arr[n-2];
  cout << max(l1,l2)<<endl;
 
 
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}