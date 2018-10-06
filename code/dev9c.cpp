#include<bits/stdc++.h>

using namespace std;

int main()
{
	vector<long long> v;
	long long t, tmp, min, n;
	cin >> t;
	while(t--)
	{
		cin >> n;
		cin >> min;
		v.push_back(min);
		while(--n)
		{
			cin >> tmp;
			v.push_back(tmp);
			if(tmp < min)
				min = tmp;
		}
		tmp=0;
		for(auto i: v)
			tmp+=i-min;
		cout << tmp << endl;
		v.clear();
	}
	return 0;
}
		
