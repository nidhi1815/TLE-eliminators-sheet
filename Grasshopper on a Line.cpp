#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
   int t;
   cin>>t;
   while(t--){
       int x,k;
       cin>>x>>k;
       
       if(x%k!=0 or x<k){
           cout<<"1"<<endl;
           cout<<x<<endl;
       }
       else{
           int a=x/k;
           int b=(a-1)*k-1;
           int c=x-b;
           cout<<2<<endl;
           cout<<b<<" "<<c<<endl;
       }
       
   }
}
