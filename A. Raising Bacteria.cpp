#include <iostream>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    #endif
    
    
    int num, temp;
    int count = 0;

    cin>>num;


    while(num)
	{
        if(num%2)
        {
        	count++;
		}
        num /= 2;
    }

    cout<<count<<endl;
    return 0;
}
