#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long n, m, a, b, odd, even;
	int t, cas=0;
	cin >> t;
	while(++cas <= t)
	{
		cin >> n >> m;
		n--;
		m--;
		a=n;
		b=m;
		while(!(a%3==0))a++;
		while(!(b%3==0))b--;
		even = 1 + (b-a)/3;
		odd = m-n-even+1;
		printf("Case %d:\nOdd = %lld\nEven = %lld\n", cas, odd, even);
	}
	return 0;
}
		
