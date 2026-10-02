#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    bool flag=false;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=true;
            break;
        }
    }
    if(flag)
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
    }
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

   
        solve();
    
    return 0;
}