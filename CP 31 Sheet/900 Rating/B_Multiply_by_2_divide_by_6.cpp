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
        ll n;
        cin >> n;
        map<int,int> mp;
        while(n%2==0){
            mp[2]++;
            n /=2;
        }
        while(n%3==0){
            mp[3]++;
            n/=3;
        }
        //cout<< mp[2]<<" "<<mp[3]<<nl;
        if(n> 1) cout<<-1<<nl;
        else{
            if(mp[3] < mp[2])cout<<-1<<nl;
            else cout<<mp[3]  + (mp[3]-mp[2])<<nl;

        }




        
    }

    return 0;
}