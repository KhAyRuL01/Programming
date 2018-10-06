#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
	int t, cas = 0, a, b;
	cin >> t;
	while(++cas <= t)
	{
		cin >> a >> b;
		int ans = ceil((log(1.00 * (a + b)) - log(1.00 * a))/ log(2.00)) - 1;
		cout << "Case " << cas << ": " << ans << endl;
	}
	return 0;
}
