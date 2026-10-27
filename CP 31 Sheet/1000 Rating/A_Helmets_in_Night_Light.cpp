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
        ll  n , k;
        cin >> n >>k;
        vector<ll> a(n),b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        ll ans =k;
        ll rem= n-1;
        vector<pair<ll ,ll>> co(n);
        for(int i=0;i<n;i++){
            co[i]= {b[i],a[i]};
        }
        sort(co.begin(),co.end());
        for(int i=0;i<n;i++){
            if(co[i].first >=k){
                ans +=(rem *k);
                break;
            }
            else{
                ll poss= min(co[i].second,rem);
                ans+=(poss * co[i].first);
                rem-= poss;
            }
        }
        cout<<ans<<nl;
    }

    return 0;
}