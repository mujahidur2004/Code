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
        map<int,int>mp;

        for (int i = 0; i < n; i++){
             cin >> a[i];
            mp[a[i]]++;
        }
        int f=0;
        for(auto ele : mp){
            if(ele.second==1){
                f=1;
                break;
            }
        }
        if(f){
            cout<<-1<<nl;
            continue;
        }
        vector<int>ans;
        for(int i=0;i< n;){
            int fre= mp[a[i]];
            int tem= fre;
            
            int j=1;
            while(j<fre){
                ans.push_back(i+j+1);
                j++;
            }
            ans.push_back(i+1);
            i+= tem;

        }
        for(auto ele : ans){
            cout<< ele<<" ";
        }
        cout<<nl;
           
        
    }

    return 0;
}