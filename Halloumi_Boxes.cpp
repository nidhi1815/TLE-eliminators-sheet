#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while( t-- ){
        int n , k;
        cin >> n >> k;
        int arr[n];
        for( int i=0 ;i<n ;i++){
            cin >> arr[i];
        }
        bool sorted = true;
        for( int i=0 ;i<n-1 ;i++){
            if( arr[i]>arr[i+1]){
                sorted = false;
            }
        }

        if( sorted == false and k <2) cout <<"NO"<<endl;
        else cout <<"YES"<<endl;
    }
}
