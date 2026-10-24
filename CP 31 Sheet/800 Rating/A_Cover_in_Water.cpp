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
       string s;
       cin >>s;
       int cnt=0,mxcnt=0 ,gp=0;
       if(s[0]=='.')gp++;
       for(int i=1;i<n;i++){
        if(s[i]=='.' && s[i-1]=='.'){
            cnt++;

        }
        else cnt=0;
        if(s[i]=='.')gp++;
        mxcnt=max(cnt,mxcnt);
       }
       if(mxcnt>=2)cout<<2<<nl;
       else cout<<gp<<nl;

        
    }

    return 0;
}