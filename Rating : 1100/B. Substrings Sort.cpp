//Author : Nahin the Coder
//Date : 05-12-2021
#include<bits/stdc++.h>
using namespace std;

int main()
{
      int n; cin>>n;
      vector<pair<int,string> >vc;
      for(int i=0; i<n; i++)
      {
            int len; string str;
            cin>>str;
            len = str.size();
            vc.push_back(pair<int,string>(len,str));
      }
      sort(vc.rbegin(),vc.rend());
      string mainStr = vc[0].second;

      for(int i=1; i<n; i++)
      {
            string temp =  vc[i].second;
            size_t found = mainStr.find(temp);
            if(found != string::npos)
            {
                  mainStr = temp;
            }
            else
            {
                  cout<<"NO"<<endl;
                  return 0;
            }
      }
      sort(vc.begin(),vc.end());
      cout<<"YES"<<endl;
      for(int i=0; i<n; i++)
      {
            cout<<vc[i].second<<endl;
      }
      return 0;
}
