#include<bits/stdc++.h>
using namespace std;

int main(){
	int q;
	cin>>q;
	while(q--){
		int n;
		cin>>n;
		vector<vector<char> > a(n,vector<char> (n,'='));
		string s;
		cin>>s;
		int f=-1,l=-2,cnt=0;
		for(int i=0;i<n;i++)
			if(s[i]=='2'){
				if(f<0)
					f=i;
				else
					a[i][l]='+',
					a[l][i]='-';
				l=i;
				cnt++;
			}
		if(cnt==1||cnt==2)
			cout<<"NO\n";
		else{
			if(f>=0){
				a[f][l]='+';
				a[l][f]='-';
			}
			cout<<"YES\n";
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++)
				if(i==j)
					cout<<'X';
				else
					cout<<a[i][j];
				cout<<"\n";
			}
		}
	}
}
