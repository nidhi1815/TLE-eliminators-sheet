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

       // sort( v.begin() , v.end() );

        int cnt = 0;
        int sum = 0;
        int mltply = 1;

        for( int i =0 ;i<n ;i++){
            sum += v[i];
            mltply *=v[i];
        }

        while( sum < 0){
            sum+= 2;
            cnt++;
        }

        int fm = mltply;
        for( int i=0 ;i< cnt ;i++){ fm=fm*(-1);}

        if( fm < 0) cnt++;

        cout << cnt << endl;
    }
}
   //jai mata di
