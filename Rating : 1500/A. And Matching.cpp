//Author : Nahin the Coder
//Date : 05-02-2022


#include<iostream>
using namespace std;



int main()
{
	

	int test;
	cin >> test;
	while (test--)
	{
		int n; cin >> n;
		int k; cin >> k;
		if (k == 0)
		{
			cout << 0 << " " << n - 1 << endl;
			int f = 1;
			int s = n - 2;
			for (int i = 1; i <= (n / 2) - 1; i++)
			{
				cout << f++ << " " << s-- << endl;
			}
		}
		else
		{
			if (k == 3 and n == 4)
			{
				cout << -1 << endl;
			}
			else if(k != n-1)
			{
				int f = 1;
				int s = n - 2;
				cout << k << " " << n - 1 << endl;
				for (int i = 1; i <= (n / 2) - 1; i++)
				{
					cout <<((f!=k)?f:0) << " " << ((s!=k)?s:0) << endl;
					f++;
					s--;
				}
			}
			else
			{
				cout << n / 2 << " " << n / 2 + 1 << endl;
				cout << n /2 -1 << " " << n - 1 << endl;
				cout << 0 << " " << (n / 2) - 2 << endl;
				for (int i = 1; i < n / 2 - 2; i++)
				{
					cout << i << " " << n - 1 - i << endl;
				}
			}
		}
	}

	return 0;
}
