#include<bits/stdc++.h>
using namespace std;
#define int long long

signed  main()
{
    int t;
    cin >> t;
    while( t-- ){
        int n , k;
        cin >> n >> k;
        vector<int>v(n);
        sort( v.begin() , v.end());
        for( int i=0 ;i<n ;i++){
            cin >> v[i];
        }
        bool flag = false;
        for( int i=0 ;i<n ;i++){
            if( v[i] == k){
            flag = true;
            break;
            }
        }
        if( flag ) cout <<"YES"<<endl;
        else cout << "NO"<< endl;
    }
}
