#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
	long long t, a, b;
	long long stat[1000001];
	int k = 0, x = 1;
	for(int i = 2; i <= 1000; i++)
	{
		for(int j = x; j < i * i -1; j++)
			stat[j] = k;
		stat[i * i - 1] = ++k;
		x = i * i;
	}
	cin >> t;
	while(t--)
	{
		cin >> a >> b;
		if(stat[a] == b)
			cout << "I am married now" << endl;
		else
			cout << "Baba amar ki biye hobe na" << endl;
	}
	return 0;
}
		
			
