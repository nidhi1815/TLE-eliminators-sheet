#include<bits/stdc++.h>
using namespace std;
#define int long long

signed  main()
{
    int N;
    cin >> N;

    vector<int> n;
    vector<int> p;

    for( int i=0 ;i<N;i++){
        int x;
        cin>>x;
        if( x<0) n.push_back(x);
        else p.push_back( x);
    }

    sort( p.begin() ,p.end());
    sort( n.begin() , n.end());
    if( p.size() == 0) cout<< -1*n[ n.size() - 1] <<  endl; 
    else if(n.size() == 0) cout<<p[0]<<endl;
    else cout<< min( -1*n[ n.size() - 1] , p[ 0])<<endl;


}
