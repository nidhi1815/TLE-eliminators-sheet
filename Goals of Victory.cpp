#include<bits/stdc++.h>
using namespace std;
#define int long long

signed  main()
{
    int t;
    cin >> t;
    while( t-- ){
        int n ;
        cin >> n;
        int ans = 0;
        for( int i=0 ;i<n-1 ;i++){
            int x;
            cin >> x;
            ans += x;
        }

        cout << -1*ans << endl;
    }
}
