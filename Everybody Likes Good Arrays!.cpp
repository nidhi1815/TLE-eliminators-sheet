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

        for( int i =0 ;i<n ;i++){
            cin >> v[i];
        }

        int ans = 0;
        for( int i=0 ;i<n-1 ;i++){
            if( v[i]%2 == v[i+1]%2){
                ans++;
            }
        }
        cout << ans << endl;
    }
}
