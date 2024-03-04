#include<bits/stdc++.h>
using namespace std;
#define int long long
signed  main()
{
    int t;
    cin >> t;

    while (t--)
    {
       int a, b, c, d;
        cin >> a >> b >> c >>d;
        if( b > d ) cout << -1 <<endl;
        else{
            a += abs(d-b);
            int cnt = abs(d-b);
            if(a < c) cout << -1 <<endl;
            else{
                cnt += abs(a-c);
                cout << cnt <<endl;
            }
        }
    }
    
}
