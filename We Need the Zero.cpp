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
        for( int i=0;i<n ;i++){
            cin >> v[i];
        }

        

        if( n%2 == 0 ){
            int ans = v[0];
            for( int i=1 ;i<n; i++ ){
                ans = ans ^ v[i];
            }

            if( ans == 0 ) cout << v[n-1] <<endl;
            else cout << -1 << endl;

        }
        else{
            int aaa = v[0];
            for( int i=1 ;i<n; i++ ){
                aaa = aaa ^ v[i];
            }
            cout << aaa << endl;
        }
    }
}
