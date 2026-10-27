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
        ll s,n , pos;
        cin >>s>>n;
        if(n%4==0){
            pos =0;
             
        }

        else if(n%4==1){
            pos = - n;

        }
        else if(n%4 ==2){
            pos=1;
        }
        else pos = n +1;

        if(s%2==0)cout<< s+ pos<<nl;
        else cout<< s- pos<<nl;
    }

    return 0;
}