#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>b;
        vector<int>c;
        
        bool all_same=true;
        for(int i=0;i<n-1;i++){
            if(a[i]!=a[i+1]){
                all_same=false;
            }
        }
        
        if(all_same==true){ cout<<-1<<endl; }
        
        else{
            
            sort(a,a+n);
            
            bool last_diff= false;
            for(int i=n-1;i>0;i--){
                if(a[i]==a[i-1]){
                    last_diff= true;
                }
            }
            
            if(last_diff= false){
                
                cout<<n-1<<" "<<1<<endl;
                for(int j=0;j<n-1;j++){
                    cout<<a[j]<<" ";
                }
                cout<<endl;
                
                
                cout<<a[n-1]<<endl;
            }
            else{
                int count = 1;
                for(int j=n-1;j>0;j--){
                    if(a[j]==a[j-1]){
                        count++;
                    }
                    else{
                        break;
                    }
                }
                 cout<<n-count<<" "<<count<<endl;
                 for(int i=0;i<(n-count);i++){
                     cout<<a[i]<<" ";
                 }
                 cout<<endl;
                 for(int i=n-1;i>=(n-count);i--){
                     cout<<a[i]<<" ";
                 }
                 cout<<endl;
                
                
                
            }
        }
        
    }
}
