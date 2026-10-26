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
        int cnt=0;

        for (int i = 0; i < n; i++){
             cin >> a[i];
             if(a[i]==2)cnt++;
        }
        int ans =0;
        if(cnt%2){
            cout<<-1<<nl;
        }
        else{
            int i=0,cnt1=0;
            
            for(;i<n;i++){
                if(a[i]==2)cnt1++;
                if(cnt1 * 2 == cnt)break;
            }
            cout<< i+1<<nl;
        }
           

        
    }

    return 0;
}