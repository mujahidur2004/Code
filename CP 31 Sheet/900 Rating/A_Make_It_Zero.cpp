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
        if(n%2==0){
            cout<<2<<nl;
        cout << 1<<" "<< n<< nl;
         cout << 1<<" "<< n << nl;

        }
        else{
            cout<< 4<<nl;
            cout<< 1<<" "<<n<<nl;
            cout<<1<<" "<<n-1<<nl;
            cout<< n-1<<" "<< n<<nl;
            cout<< n-1<<" "<<n<<nl;

        }
        


    }

    return 0;
}