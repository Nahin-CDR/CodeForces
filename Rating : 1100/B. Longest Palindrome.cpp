//Author : Nahin -CDR
//Date : 17-12-2021

#include<bits/stdc++.h>
using namespace std;

bool PalindromeChecker(string str)
{
    string rev = str;
    reverse(rev.begin(),rev.end()); // reverse
    if(str == rev) return true;
    else return false;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,k;
    cin>>n>>k;
    
    string palindrome = "0";
    vector<string>str;
    for(int i=0;i<n;i++)
    {
        string s;
        cin >> s;
        str.push_back(s);
        if(PalindromeChecker(s))
        {
            palindrome = s;
        }
    }


    int reverseCount = 0;
    
    vector<string>first;
    vector<string>second;

    for(int i=0; i<n; i++)
    {
        string check = str[i];
        reverse(check.begin(), check.end());
        for(int j=i+1; j<n; j++)
        {
            if(check == str[j])
            {
                first.push_back(str[i]);
                second.push_back(str[j]);
                reverseCount = reverseCount + (check.size()*2);
            }
        }
    }

    if(palindrome=="0" and first.size() == 0)
    {
        cout<<0<<endl;
        cout<<" "<<endl;
        return 0;
    }
    if(palindrome != "0")
    {
        reverseCount = reverseCount + palindrome.size();
    }


    cout<<reverseCount<<endl;
    for(int i=0; i<first.size(); i++)
    {
        cout<<first[i];
    }
    if(palindrome != "0")
    {
        cout<<palindrome;
    }
    for(int i=second.size()-1; i>=0; i--)
    {
        cout<<second[i];
    }

    return 0;
}
