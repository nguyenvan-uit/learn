#include <iostream>
using namespace std;
int main()
{
	int a[100],b[100],c[200];
	int n,m,t=0;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	cin >> m;
	for (int i = 0; i < m; i ++)
	{
		cin>> b[i];
	}
	for (int i = 0; i < n; i++)
	{
		c[t] = a[i]; t++;
	}
	t = n;
	for (int i = 0; i < m; i++)
	{
		c[t] = b[i]; t++;
	}
	t = m + n;
	for (int i = 0; i < t; i++)
	{
		cout<< c[i] <<" ";
	}
	
	return 0;
}

