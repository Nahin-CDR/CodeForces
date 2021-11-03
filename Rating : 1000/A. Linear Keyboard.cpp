// Author : Nahin the Coder
// Date : 03-11-2021

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
    


    
	int test; cin>>test; 
	while(test--)
	{
		string str1; cin>>str1; 
        string str2; cin>>str2;
		
		int len1 = str1.length();
		int len2 = str2.length();


		map<char,int>mp;
		
		for(int i = 0; i < len1 ; i++)
		{
			mp.insert(make_pair(str1[i],i+1));
		}
		
		int sum = 0;

		for(int i=0; i<len2-1; i++)
		{
			char ch1 = str2[i];
			char ch2 = str2[i+1];

			sum = sum + abs(mp[ch1]-mp[ch2]);

		}
        cout<<sum<<endl;
		mp.clear();

	}







	return 0;
}
