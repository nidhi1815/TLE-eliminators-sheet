#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        vector<int> v(n);
        for( int i= 0; i<n ;i++){ cin >> v[i]; }

        bool flag = true;
        for( int i=0 ;i<n-1 ;i++){
            if( v[i] > v[i+1]){
                flag = false;
            }
        }

        if( flag ) cout <<"YES"<<endl;
        else{
            int x = *min_element( v.begin() , v.end());
            if( v[0] == x) cout <<"YES"<<endl;
            else cout <<"NO"<<endl;
        }



    }
}
