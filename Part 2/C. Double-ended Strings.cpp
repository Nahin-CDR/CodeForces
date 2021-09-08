//Solver : Nahin the Coder
//Date : 08-09-2021
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
    	string s1,s2;
    	cin>>s1>>s2;
    	int len1 = s1.size();
    	int len2 = s2.size();
    	if(s1 == s2)
    	{
    		cout<<0<<endl;
		}
		else if(s1.size()>=s2.size())
		{
			size_t found = s1.find(s2);
			if(found != string::npos)
			{
				cout<<s1.size()-s2.size()<<endl;
				continue;
			}
			
			bool exist = true;
			
			int loop = s2.size();
			
			int counter = 0;
			vector<int>res;
			while(loop--){
				
			    for(int i=0; i<s2.size(); i++){
				    
					string temp ="";
				    int turn = i+1;
				    int cnt = 0;
				    while(turn--){
					    temp = temp + s2[cnt++];
					}
				    
					size_t foundd = s1.find(temp);
					if(foundd != string::npos){
						//cout<<temp<<" ";
						exist = true;
						int len = temp.size();
						res.push_back(len);
					
					}else{
						res.push_back(0);
					}
					
					//cout<<temp<<"\n";
			    }
			    s2.erase(s2.begin());
			    //cout<<"\n";
			    //counter++;
		    }
		    
		    
			if(exist == false){
				cout<<len1+len2<<endl;
			}else{
				int l = res.size();
				sort(res.begin(),res.end());
				int pick = res[l-1];
				int result = (len1-pick) + (len2-pick);
				cout<<result<<endl; 
			}
		}else{ // S2 is greater
			size_t found = s2.find(s1);
			if(found != string::npos)
			{
				cout<<s2.size()-s1.size()<<endl;
				continue;
			}
			
			bool exist = true;
			
			int loop = s1.size();
			
			int counter = 0;
			vector<int>res;
			while(loop--){
				
			    for(int i=0; i<s1.size(); i++){
				    
					string temp ="";
				    int turn = i+1;
				    int cnt = 0;
				    while(turn--){
					    temp = temp + s1[cnt++];
					}
				    
					size_t foundd = s2.find(temp);
					if(foundd != string::npos){
						//cout<<temp<<" ";
						exist = true;
						int len = temp.size();
						res.push_back(len);
					
					}else{
						res.push_back(0);
					}
					
					//cout<<temp<<"\n";
			    }
			    s1.erase(s1.begin());
			    //cout<<"\n";
			    //counter++;
		    }
		    
		    
			if(exist == false){
				cout<<len1+len2<<endl;
			}else{
				int l = res.size();
				sort(res.begin(),res.end());
				int pick = res[l-1];
				int result = (len1-pick) + (len2-pick);
				cout<<result<<endl; 
			}	
		}
	}
	return 0;
}
