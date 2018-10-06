#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	string s;
	cin >> t;
	while(t--)
	{
		cin >> s;
		if(s[0]=='E')
			cout << 20 << endl;
		else if(s[0]=='M')
			cout << 40 << endl;
		else if(s[0]=='H')
			cout << 68 << endl;
	}
	return 0;
}
