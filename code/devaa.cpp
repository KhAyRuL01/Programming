#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long t, n, ini, end, x;
	string s;
	cin >> t;
	bool f ;
	while( t-- )
	{
		cin >> ini >> end >> n;
		f = true;
		for(int i = 0; i < n; i++)
		{
			cin >> s >> x;
			if(s=="in")
				ini += x;
			else
				ini -= x;
			if(ini < 0)
				f = false;
		}
		if(f && ini == end)
		cout << "yes" << endl;
		else
		cout << "no" << endl;
	}
	return 0;
}
