#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;

    while( t-- )
    {
        int n , x;
        cin >> n >> x;

        vector<int> a;
        a.push_back( 0 );

        for( int i=0 ;i < n ;i++){ 
            int y;
            cin >> y;
            a.push_back( y );
        }
            a.push_back( x );


        int ans  = 0;
        for( int i =0 ; i< a.size() - 1 ;i++){
            ans = max( ans , a[i+1] - a[i] );
            
        }
        ans = max( ans , 2*(a[a.size()-1] - a[a.size()-2]));

         cout << ans << endl;          

        
    }
}
