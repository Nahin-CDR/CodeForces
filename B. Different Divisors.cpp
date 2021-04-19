#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin the Coder
//Date   : 19 - 04 -2021



int next(int x)
{
	for(int i=2; i*i<=x; i++)
    {
	    if(x%i==0)
	    {
		    x++;
		    i = 1;
		    continue;
	    }
	}
	return x;
}





int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	#ifdef _DEBUG
	freopen("input.txt","r",stdin);
	#endif
	
    int test;
    cin>>test;
    while(test--)
    {
    	int x;
    	cin>>x;
    	int b = next(x+1);
    	int c = next(b+x);
    	cout<<b*c<<endl;
	}

	return 0;
}
