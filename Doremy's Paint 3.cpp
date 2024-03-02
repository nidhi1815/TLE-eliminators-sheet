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
        for( int i=0 ;i<n ;i++){ cin >> v[i]; }

        if(  n == 2) cout <<"Yes"<<endl;
        else{

            map<int,int> m;
            for( int i=0 ;i<n ;i++){
                m[ v[i] ]++;
            }

            if ( m.size() == 1) cout <<"Yes"<<endl;
            else if( m.size() == 2 ){

                vector<int> no;
                for( auto it : m){
                    no.push_back( it.second);
                }

                sort ( no.begin() , no.end());

                if( n%2 == 0 and no[0] == n/2 and no[1] == n/2 ){
                    cout << "Yes" << endl;
                }
                else if( n%2 != 0 and no[0] == n/2 and no[1] == n/2 + 1){
                    cout << "Yes" << endl;
                }
                else{
                    cout << "No" << endl;
                }
                
            }
            else {
                cout << "No"<<endl;
            }
         
        }
    }
}
