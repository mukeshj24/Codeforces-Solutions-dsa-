#include <bits/stdc++.h>
using namespace std;
#ifdef ONLINE_JUDGE
#define dbg(...)
#else
#include "debug.h"
#endif
#define ll long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define FAST (ios_base::sync_with_stdio(false), cin.tie(nullptr));
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    int n,m;
    string a,b;
    cin>>n>>m>>a>>b;
    int ans=0;
    for(int i=0,j=0; i<n && j<m; ++j)
    {
        if(a[i]==b[j])
        {
            ans++;
            i++;
        }
    }
    cout<<ans<<endl;
}

signed main()
{
    FAST;
    int TCS = 1;
    cin >> TCS;
    for (int TC = 1; TC <= TCS; ++TC)
    {
      // cout<<"Case "<<TC<<": ";
      solve();
    }
}