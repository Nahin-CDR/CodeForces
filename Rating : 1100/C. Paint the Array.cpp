//Author : Nahin - CDR
//Date : 19-12-2021


#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long test; cin>>test;

    while(test--)
    {
        long long n; cin>>n;
        vector<long long>v;
     

        long long oddGCD = 0;
        long long evenGCD = 0;


        for(long long i=0; i<n; i++)
        {
            long long k; cin>>k;
            v.push_back(k);
            if(i%2 !=0)
            {
                oddGCD = __gcd(oddGCD,k);
            }
            else
            {
                evenGCD = __gcd(evenGCD,k);
            }
        }
       
       
        bool od = true;
        bool even = true;
        for(long long i=0; i<v.size(); i++)
        {
            if(i%2 == 0 and v[i]%oddGCD == 0)
            {
                od = false;
            }
            if(i%2 !=0  and v[i]%evenGCD == 0)
            {
                even = false;
            }
        }
        if(od)
        {
            cout<<oddGCD<<endl;
        }
        else if(even)
        {
            cout<<evenGCD<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }


    return 0;
}
