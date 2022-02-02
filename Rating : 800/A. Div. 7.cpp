//Author : Nahin the Coder
//Date : 02-02-2022

#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    
    int test; cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        if(n%7 == 0)
        {
            cout<<n<<endl;
        }
        else
        {
            int t = n;
            std::string str = std::to_string(t);
            int len = str.length();

            for(int i=0; i<=9; i++)
            {
                char a = '0'+ i;
                str[len-1] = a;
                //cout<<str<<endl;
                int number = std::stoi(str);
                if(number%7 == 0)
                {
                    cout<<number<<endl;
                    break;
                }
            }
        }
    }
   

	return 0;
}
