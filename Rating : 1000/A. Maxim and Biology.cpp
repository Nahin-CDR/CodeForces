// Author : Nahin the Coder
// Date : 03-11-2021

#include<bits/stdc++.h>
using namespace std;

map<char,int>mp;


int Check(string str) 
{
	
	int sum = 0;
	string demo = "ACTG";

	for(int i = 0; i < 4; i++)
	{
		char ch = str[i];
        if(ch == demo[i])
		{
			continue;
		}
		else if(ch == 'A')
	    {
            int k1;
			int k2;
			k1 = mp[demo[i]] - mp[ch];
			k2 = mp['Z'] - mp[demo[i]] + 1;
			sum = sum + min(k1,k2);
		}
		else if(ch == 'Z')
		{
			int k1;
			int k2;
			k1 = mp['Z'] - mp[demo[i]] ;//
			k2 = mp[demo[i]];
			sum = sum + min(k1,k2);
		}
		else
		{
			int k1;
			int k2;
			if(mp[ch]>mp[demo[i]])
			{
		    	k1 = mp[ch] - mp[demo[i]];
				k2 = mp['Z'] - mp[ch] + (mp[demo[i]]);
				sum = sum + min(k1,k2);
			}
			else
			{
                k1 = mp[demo[i]] - mp[ch];
				k2 = ( mp[ch]-mp['A'] ) + (mp['Z']-mp[demo[i]])+1;//
				sum = sum + min(k1,k2); 
			}
		}
	}
	return sum;
}



 //     A C T G

void Solve()
{
    
	int n; cin>>n; 
    string str; cin>>str;

	size_t found = str.find("ACTG");
	if(found != string::npos)
	{
		cout<<"0"<<endl;
	}
	else
	{
		
		if(n == 4)
		{
			int sum = 0;
			string demo = "ACTG";

			for(int i = 0; i < 4; i++)
			{
				char ch = str[i];
                if(ch == demo[i])
				{
					continue;
				}
				else if(ch == 'A') /// problem 
				{
                    int k1;
					int k2;
					k1 = mp[demo[i]] - mp[ch];
					k2 = mp['Z'] - mp[demo[i]] + 1;
					sum = sum + min(k1,k2);
				}
				else if(ch == 'Z')
				{
					int k1;
					int k2;
					k1 = mp['Z'] - mp[demo[i]] ; //
					k2 = mp[demo[i]];
					sum = sum + min(k1,k2);
				}
				else
				{
					int k1;
					int k2;
					if(mp[ch]>mp[demo[i]])
					{
						k1 = mp[ch] - mp[demo[i]];
						k2 = mp['Z'] - mp[ch] + (mp[demo[i]]); 
						sum = sum + min(k1,k2);
					}
					else
					{
                        k1 = mp[demo[i]] - mp[ch];
						k2 = ( mp[ch]-mp['A'] ) + (mp['Z']-mp[demo[i]])+1; //

						sum = sum + min(k1,k2); 
						
					}
				}
			}
			cout<<sum<<endl;
		}
		else
		{
			int mini = 99999999;
			for(int i=0; i<n; i++)
			{
				if(i+4 <= n)
				{
					string s = "";
					for(int j=i; j<i+4; j++)
					{
						s = s + str[j];
					}
					int ln = s.length();
					if(ln == 4)
					{
						//cout<<s<<endl;
						int len = Check(s);
                        mini = min(mini,len);
						//cout<<"mini = "<<mini<<endl;
					}
					
				}
				else
				{
					break;
				}
			}
			cout<<mini<<endl;
		}
	}
}

//Driver Program

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
    
	int cnt = 1;
	for(char i='A'; i<='Z'; i++)
	{
		mp.insert(make_pair(i,cnt));
		cnt++;
	}
    
	Solve();

	return 0;
}
