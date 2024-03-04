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
        vector<int>v(n);
        for( int i=0;i<n;i++){
            cin >> v[i];
        }

        int cnt = 0;
        int ans =0;
        for(int i=0;i<n ;i++){
            if( v[i] == 0){
                cnt++;
                ans = max( ans , cnt );
            }
            else{
                cnt=0;
            }
        }
        cout << ans << endl;
    }
}
