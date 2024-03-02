#include<bits/stdc++.h>
using namespace std;
#define int long long
signed  main()
{
    int t;
    cin >> t;
    while( t-- ){
        int a ,b, c;
        cin >> a >> b >> c;

        // int s = a+b+c;

        // if( s%2==0) cout<<"Second"<<endl;
        // else cout<<"First"<<endl;
        if( c%2 == 0){
            if( a <= b) cout<<"Second"<<endl;
            else cout<<"First"<<endl;
        }
        else{
            if( b <= a) cout<<"First"<<endl;
            else cout<<"Second"<<endl;
        }




    }
}
