#include<bits/stdc++.h>

//Solver : Nahin thE Coder
//Date   : 06-02-2020

using namespace std;


int main () {

   int result;
   string first,second;

   cin>>first>>second;

   transform(first.begin(),first.end(), first.begin(), ::tolower);

   transform(second.begin(), second.end(), second.begin(), ::tolower);

   int size1,size2;

   size1 = first.size() + 1;
   size2 = second.size() + 1;

   char firstArray[size1];
   char secondArray[size2];

   strcpy(firstArray,first.c_str());
   strcpy(secondArray,second.c_str());

   result = strcmp(firstArray, secondArray);

   if(result>0)
   {
      cout<<"1"<<endl;
   }
   else if(result<0)
   {
      cout<<"-1"<<endl;
   }
   else
   {
      cout<<"0"<<endl;
   }

   return 0;
}
