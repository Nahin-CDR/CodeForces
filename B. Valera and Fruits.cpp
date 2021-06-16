//Nahin the Coder
//16-06-2021


#include<bits/stdc++.h>
using namespace std;

int arr[3010];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

    int n,v;
	cin>>n>>v;
    
	//taking input of days and fruits

	for(int i=1; i<=n; i++)
	{
		int day,fruits;
		cin>>day>>fruits;
		arr[day] = arr[day] + fruits;
	}

    int collect = v;
	int ans = 0;
    //now calculation part
    for(int i=1; i<3010; i++)
	{
		if(arr[i]>collect)
		{
            ans = ans + collect;
			arr[i] = arr[i] - collect;
			if (arr[i]>v)
			{
				ans = ans + v;
                collect = 0;
			}
			else
			{
				ans = ans + arr[i];
				collect = v - arr[i];
			}
		}
		else
		{
			ans = ans + arr[i]; // when there is remaining from previous calculation
			collect = v;
		}
	}
   
    cout<<ans<<endl;





	return 0; 
}
