#include<bits/stdc++.h>
using namespace std;
#define int long long

signed  main()
{
    int t;
    cin >> t;
    while( t-- )
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for( int i=0 ;i<n ;i++){
            cin >> v[i];
        }

        //sort( v.begin() , v.end());
        if( v[0] == v[n-1]){
            cout <<"NO"<<endl;
        }
        else{
            cout <<"YES"<<endl;
            cout<<v[n-1]<<" ";
            for( int i=0 ;i<n-1 ;i++){
                cout << v[i]<<" ";
            }
            cout << endl;
        }

        
    }
}
