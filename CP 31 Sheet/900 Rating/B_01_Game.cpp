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
        string s;
        cin >> s;
        int n= s.size();
        stack<char> st;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(st.size()){
                if(st.top()== s[i]) st.push(s[i]);
                else {
                    cnt++;
                    st.pop();
                }
            }
            else{
                st.push(s[i]);
            }

        }
        if(cnt%2)cout<<"DA"<<nl;
        else cout<< "NET"<<nl;

        
    }

    return 0;
}