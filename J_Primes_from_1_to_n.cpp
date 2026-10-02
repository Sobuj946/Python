#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
  
    for(int i=2;i<=n;i++)
    {
        bool flag=true;
        for(int j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                flag=false;
                break;
            }
           
        }
        if(flag)
        {
            cout<<i<<" ";
        }
       
    }
    cout<<endl;ds
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


        solve();
   
    return 0;
}