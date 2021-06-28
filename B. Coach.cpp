//Solver : Nahin the Coder
//Date : 28 - 06 - 2021

#include<bits/stdc++.h>
using namespace std;
#define MAX 100

bool visited[MAX];
vector<int>graph[MAX];


int arr[MAX][MAX];
vector<int>lonely;

map<int,vector<int> > mp;

vector<int>vc;


void dfs(int n)
{
    vc.push_back(n);
	visited[n] = true;
	for(int i=0; i<graph[n].size(); i++)
	{
		if(visited[graph[n][i]] == false)
		{
			dfs(graph[n][i]);
		}
	}
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
	
	int n,m;
	cin>>n>>m;
	
	for(int i=0; i<m; i++)
	{
		int u,v;
		cin>>u>>v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	
    if(m == 0)
    {
    	while(n)
    	{
    		cout<<n<<" ";
    		n--;
		}
		return 0;
	}

	int counter = 0;
    for(int i=1; i<=n; i++)
    {
    	if(visited[i] == false)
    	{
    		dfs(i);
    		for(int j=0; j<vc.size(); j++)
    		{
    			mp[counter].push_back(vc[j]);
			}
			vc.clear();
			counter++;
		}
	}
	
	
	vector<int>lonely; //which nodes are not connected to anyone
	
	
	int s = 0;
	
	int oneCounter = 0;
	int toCounter = 0;
	int threeCounter = 0;
	
	bool impossible = false;
	
	for(auto it = mp.begin(); it!=mp.end(); it++)
	{
		if(mp[s].size() == 1)
		{
			lonely.push_back(it->second[0]);
			oneCounter++;
		}
		else if(mp[s].size() == 2)
		{
			toCounter++;
		}
		else if(mp[s].size() == 3)
		{
			threeCounter++;
		}
		else
		{
			impossible = true;
		}
		s++;
	}
	
	if(impossible == true)
	{
		cout<<-1<<endl;
		return 0;
	}
	
	if(oneCounter != toCounter)
	{
		if(oneCounter>0 and toCounter>0)
		{
			if(oneCounter>toCounter)
			{
				if((oneCounter-toCounter)%3 != 0)
				{
					cout<<-1;
					return 0;
				}
			}
			else
			{
				cout<<-1;
				return 0;
			}
		}
		else if(oneCounter>0 and toCounter==0)
		{
			if(oneCounter%3 !=0 )
			{
				cout<<-1;
				return 0;
			}
		}
		else if(oneCounter == 0 and toCounter>0)
		{
			cout<<-1;
			return 0;
		}
	}
	
	int rest = 0;
	
	if(oneCounter>toCounter)
	{
		rest = oneCounter-toCounter;
	}
	
	
	if(n/3 != threeCounter + toCounter+rest/3)
	{
		cout<<-1<<endl;
		return 0;
	}
	
	int len = lonely.size();
	int ln = 0;
	
	int k = 0;
	for(auto it = mp.begin(); it!=mp.end(); it++)
	{
		if(mp[k].size()==2)
		{
			cout<<lonely[ln++]<<" ";
			for(int j=0; j<mp[k].size(); j++)
			{
				cout<<mp[k][j]<<" ";
			}
			len--;
			cout<<"\n";
		}
		if(mp[k].size() == 3)
		{
			for(int j=0; j<mp[k].size(); j++)
			{
				cout<<mp[k][j]<<" ";
			}
			cout<<"\n";
		}
		k++;
	}
	
	//if there is reamining lonely
	int cp = 0;
    if(len>=3)
    {
    	for(int i = 0; i<len; i++)
    	{
    		cout<<lonely[ln++]<<" ";
    		cp++;
    		if(cp%3 == 0)
    		{
    			cout<<"\n";
			}
		}
	}
	
	return 0;
}
