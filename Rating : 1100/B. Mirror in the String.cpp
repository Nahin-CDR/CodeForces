//Author : Nahin the Coder
//Date : 02-01-2022

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int test;
	cin>>test;

	while(test--)
	{
		int n;
		cin>>n;
		char arr[n];
		for(int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		if(n == 1 or arr[0] == arr[1])
		{
			cout<<arr[0]<<arr[0]<<endl;
		}
		else
		{
			char last = 'z';
			string ans = "";
			for(int i = 0; i < n; i++)
			{
				if(arr[i]<=last)
				{
					ans = ans + arr[i];
					last = arr[i];
				}
				else
				{
					break;
				}
			}
			cout<<ans;
			reverse(ans.begin(),ans.end());
			cout<<ans<<endl;
		}
		// else
		// {
		// 	vector<string>vc;
		// 	string ans = "";
		// 	for(int i = 0; i < n; i++)
		// 	{
		// 		if(i==0)
		// 		{
		// 			ans = ans + arr[i];

		// 			string s1 = ans;
		// 			reverse(ans.begin(), ans.end());
		// 			vc.push_back(s1+ans);
		// 			ans = "";
		// 		}
		// 		else
		// 		{
		// 		    for(int j = 0; j <=i; j++)
		// 			{
		// 				ans = ans + arr[j];
		// 			}
		// 			string s1 = ans;
		// 			reverse(ans.begin(), ans.end());
		// 			vc.push_back(s1+ans);
		// 			ans = "";
		// 		}
		// 	}
			
		// 	vector<string>vs;
        //     int cnt = 0;
		// 	string small = "";

		// 	small = vc[0];
		// 	int len1 = small.size();
            
		// 	char sml[] = vc[0];

		// 	for(int i = 1; i <vc.size(); i++)
		// 	{
		// 		string s2 = vc[i];
		// 		int len2 = s2.size();
        //         char comp[] = s2;
		// 		if(lexicographical_compare(sml, sml+len1, comp, comp+len2))
		// 		{
		// 			//small is correct
		// 		}
		// 		else
		// 		{
		// 			small  = s2;
		// 		}
		// 	}
		// 	cout<<small<<endl;
		// }

	}
	return 0;
}
