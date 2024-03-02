#include<bits/stdc++.h>
using namespace std;
#define int long long
// this function checks if s1 is substring of s2--> s2.find(s1);

signed  main()
{
    int t;
    cin >> t;
    while( t-- ){
        int n , m;
        cin >> n >> m;

        string x;
        cin >> x;

        string s;
        cin >> s;

        int ans =-1, cnt=0; 
	    while(x.size() < 100)
	    {
		if(x.find(s)!=string::npos)
		{
			ans = cnt;
			break;
		}
		cnt++;
		x+= x;
	    }
	cout << ans << endl;

    }
}
