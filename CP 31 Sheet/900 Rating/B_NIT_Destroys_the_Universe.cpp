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

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int ans=0,cnt=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                if(cnt>0)ans++;
                cnt=0;
            }
            else cnt++;
        }
        if(cnt>0)ans++;
        cout<<min(2,ans)<<nl;
    }

    return 0;
}