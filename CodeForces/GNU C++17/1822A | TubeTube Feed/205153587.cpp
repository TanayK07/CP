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
    int n, t;
    cin >> n >> t;
    int arr[n], arr1[n];
    FOR(i, 0, n) {
        cin >> arr[i];
    }
    FOR(i, 0, n) {
        cin >> arr1[i];
    }
    int best_idx = -2;
    FOR(i, 0, n) {
        if (i + arr[i] <= t && (best_idx == -2 || arr1[best_idx] < arr1[i])) {
            best_idx = i;
        }
    }
    cout << best_idx + 1 << endl;
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