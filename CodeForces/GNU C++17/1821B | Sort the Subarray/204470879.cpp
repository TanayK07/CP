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
    int n;
    cin>>n;
   vector<int> nums1(n), nums2(n);
for (auto &num : nums1) {
cin >> num;
}
for (auto &num : nums2) {
cin >> num;
}
 
int left_index = 0, right_index = n - 1;
 
for (int i = left_index; i <= right_index; i++) {
if (nums1[left_index] == nums2[left_index]) {
left_index++;
} else {
break;
}
}
 
for (int i = right_index; i >= left_index; i--) {
if (nums1[right_index] == nums2[right_index]) {
right_index--;
} else {
break;
}
}
 
for (int i = left_index; i > 0; i--) {
if (nums2[i] >= nums2[i - 1]) {
left_index--;
} else {
break;
}
}
 
for (int i = right_index; i < n - 1; i++) {
if (nums2[i] <= nums2[i + 1]) {
right_index++;
} else {
break;
}
}
 
cout << left_index + 1 << " " << right_index + 1 << endl;}
 
 
int main()
{
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}