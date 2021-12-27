//Author : Nahin_junior71
//Date : 27-12-2021

/*
By the Name of My Creator Allah 
I am very happy today . Alhamdulillah !
its an historical moment for me !
because it is going to be my  500th solved problem 
on codeforces . 

I wanted to solve 500+ problems on codeforces by 2021 AND 
its 27th December of 2021 , 08:45pm .

I did not ever thought about it that
I will reach this point someday ! 
Insha Allah in Future I will Continue my journey and 
moving towards my goal .

Alhamdulillah !! 
Alhamdulillah !! 
Alhamdulillah !!
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);


    int n,k;
    cin>>n>>k;
    char arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    
    int maxlevel = -1;
    int level = 0;
    for(char ch ='a'; ch<='z'; ch++)
    {
        level = 0;
        int cnt = 0;

        for(int i=0; i<n; i++)
        {
            if(ch == arr[i])
            {
                cnt++;
                if(cnt>=k)
                {
                    level++;
                    cnt = 0;
                }
            }
            else
            {
                if(cnt>=k)
                {
                    level++;
                    cnt = 0;
                }
                else
                {
                    cnt = 0;
                }
            }
        }
        maxlevel = max(maxlevel,level);
    }
    cout<<maxlevel<<endl;





    return 0;
}
