#include<bits/stdc++.h>
using namespace std;
#define int long long
signed  main()
{ 
    int t;
    cin >> t;
    while( t-- ){
    int n,k,x;
    cin>>n>>k>>x;
    if(x==1 and k==1){
 
        cout<<"NO"<<endl;
    }
    else if(x==1 and k==2 and n%2==1){
 
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        if(x!=1){
        cout<<n<<endl;
        for(int i=0; i<n; i++){
            cout<<"1 ";
        }
        }
        else{
            if(n%2==0){
                cout<<n/2<<endl;
                for(int i=0; i<(n/2); i++){
                cout<<"2 ";
            }
            }
            else{
                if(n!=3){
                cout<<(n/2)<<endl;
                for(int i=0; i<(n/2)-1; i++){
                    cout<<"2 ";
                }
                cout<<"3 ";
                }
                else{
                    
                    cout<<"1"<<endl;
                    cout<<"3"<<endl;
                }
 
            }
        }
        cout<<endl;
    }
    }
}
