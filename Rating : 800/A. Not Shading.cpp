//Solver : Nahin the Coder
//Date : 08-02-2022 

#include<bits/stdc++.h>
using namespace std;

/*

 -- HAPPY PROPOSE DAY --
 -I LOVE YOU CODE

*/



int main()
{
	int test; cin>>test;
	while(test--)
	{
		bool isPresent = false;
		
		bool rTrue = false;
		bool cTrue = false;
		bool rcTrue = false;

		int n,m,r,c;
		cin>>n>>m>>r>>c;
		char arr[n][m];
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
			{
				cin>>arr[i][j];
				if(arr[i][j] == 'B' and isPresent == false)
				{
					isPresent = true;
				}

				if(i == r-1 and arr[i][j] == 'B')
				{
					rTrue = true;
				}

				if(j == c-1 and arr[i][j] == 'B')
				{
					cTrue = true;
				}

				if(i == r-1 and j == c-1 and arr[i][j] == 'B')
				{
					rcTrue = true;
				}
			}
		}

          if(isPresent == false)
		{
			cout<<"-1"<<endl;
		}
		else if(rcTrue == true)
		{
			cout<<"0"<<endl;
		}
		else if(cTrue == true or rTrue == true )
		{
			cout<<"1"<<endl;
		}
		else
		{
			cout<<"2"<<endl;
		}





	}
	return 0;
}
