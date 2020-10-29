#include <bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    #endif 
    
    
    
	string word = "qwertyuiopasdfghjkl;zxcvbnm,./"; 
	
	string mes, sd;
	
	cin >> sd >> mes;
	
	
	for (int i = 0; i < mes.size(); i++)
	{
		if (sd == "R")
		{
			cout << word[word.find(mes[i]) - 1];
		}
		else
		{
		    cout << word[word.find(mes[i]) + 1];	
		}		
	}
	
 
    
    return 0;
}
