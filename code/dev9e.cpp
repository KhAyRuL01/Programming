#include<bits/stdc++.h>

using namespace std;

struct tree
{
	int mx, id, left, right;
	tree()
	{
		mx=id=0;
	}
}seg[100001*3];

int dig[100001];

int build(int at,int l, int r)
{
	if(l==r)
	{
		seg[at].left=seg[at].right=r;
		seg[at].mx=dig[l];
		seg[at].id=l;
		return at;
	}
	int mid = (l+r)/2;
	int a = build(2*at, l, mid);
	int b = build(2*at+1, mid+1, r);
	a = (seg[a].mx>=seg[b].mx)?a:b;
	seg[at].mx = seg[a].mx;
	seg[at].id = seg[a].id;
	seg[at].left=l;
	seg[at].right=r;
	return a;
}
int c=0;
int find(int at, int l, int r)
{
	if(c>10)
		return 0;
	if(seg[at].left>=l && seg[at].right<=r)
		return at;
	if(seg[at].left>r || seg[at].right<l)
		return 0;
	int a = find(2*at, l,r);
	int b = find(2*at+1,l,r);
	return (seg[a].mx>=seg[b].mx)?a:b;
	
	
}		

int digitsum(long long n)
{
	int d=0;
	while(n)
	{
		d+=n%10;
		n/=10;
	}
	return d;
}

int main()
{
	int  t, cas=0, n, q, ar[100001];
	cin >> t;
	while(++cas <=t)
	{
		cin >> n >> q;
		for(int i=1; i<=n;i++)
		{
			cin >> ar[i];
			dig[i] = digitsum(ar[i]);
		}
		
		build(1,1,n);
		printf("Case #%d:\n", cas);
		int l , r;
		for(int i=1;i<=q;i++)
		{
			cin >> l >> r;
			int at = find(1, l, r);
			printf("%d %d\n", seg[at].mx, seg[at].id);
		}
			
	}
	return 0;
}
			
