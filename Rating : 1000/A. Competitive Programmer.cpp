//Solver : Nahin the coder
//Date : 05-10-2021

#include<bits/stdc++.h>
using namespace std;
using ll = long long; 

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
  
    int test;
    cin>>test;
    while(test--)
    {
        string str;
        cin>>str;
        int len = str.length();
        // string str = s; 
       
        stringstream ss(str);
        int x = 0;
        ss>>x;
        if(x%60 == 0 and (x==0 or x>=60))
        {
            cout<<"red"<<endl;
            continue;
        }

        int sum = 0;
        bool ans1 = false;
        int even = 0;
        for(int i=0; i<len; i++)
        {
            sum = sum + (str[i]-'0');
            if((str[i]-'0')%2==0)
            {
                even++;
            }

        }
        if(sum%3 == 0)
        {
            ans1 = true;
        }

        // sort(str.begin(),str.end());


        bool ans2 = false;
       // size_t found_6 = str.find("6");
        size_t found_0 = str.find("0");
        // size_t found_2 = str.find("2");
        // size_t found_4 = str.find("4");
        // size_t found_8 = str.find("8");

        if(even>1 and found_0 != string::npos)
        {
            ans2 = true;
        }
        // if(found_2 != string::npos and found_0 != string::npos)
        // {
        //     ans2 = true;
        // }
        // if(found_4 != string::npos and found_0 != string::npos)
        // {
        //     ans2 = true;
        // }
        // if(found_8 != string::npos and found_0 != string::npos)
        // {
        //     ans2 = true;
        // }
       
        



        // do{
        //     stringstream pp(str);
        //     int y = 0;
        //     pp>>y;
        //     if(y%60 == 0 and y>=60)
        //     {
        //         ans = true;
        //         break;
        //     }
        // }while (next_permutation(str.begin(),str.end()));
        
        if(ans1== true and ans2 == true)
        {
            cout<<"red"<<endl;
        }
        else
        {
            cout<<"cyan"<<endl;
        }
    }
    return 0;
}
