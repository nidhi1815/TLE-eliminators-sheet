#include<bits/stdc++.h>
using namespace std;
#define int long long
signed  main()
{
    int t;
    cin >> t;
    while ( t-- )
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for( int i=0 ;i<n;i++){
            cin >> v[i];
        }
         
        bool same = true;
        for( int i=0 ;i<n-1;i++){
            if( v[i]!=v[i+1]){
                same = false;
            }
        }

        if( same ) cout<<1<<endl;
        else{
            int d=1e9;
            for( int i=0;i<n-1 ;i++){
                d = min( d , v[i+1]-v[i]);
            }
            
            if( d<0) cout<<0<<endl;
            else if( d==1) cout<<1<<endl;

            else if( d==2) cout<<2<<endl;
            else cout<< ( d/2) +1 <<endl;
        }
    }
    
}
