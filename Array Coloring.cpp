#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){ cin>>arr[i]; }
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]%2!=0){
                count++;
            }
        }
        if(count%2==0){ cout<<"YES"<<endl;}
        else{ cout<<"NO"<<endl; }
    }

}
