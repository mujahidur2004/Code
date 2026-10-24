/*
BISMILLAH HIR RAHMAN NIR RAHIM
Md Mujahidur Rahman
Department of CSE
Netrokona University, Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl '\n'
#define gcd __gcd

int main()
{
    fast_io;

    int n;
    cin >> n;

    vector<int> a(n);
    int ans =INT_MAX;
    for (int i = 0; i < n; i++){
         cin >> a[i];
         if(a[i]<0)ans= min(ans, 0-a[i]);
         else ans = min(ans,a[i]);


    }
    cout<<ans<<nl;
       
    

    return 0;
}