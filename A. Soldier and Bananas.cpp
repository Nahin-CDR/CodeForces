#include <iostream>
using namespace std;

//Solver : Nahin the Coder
//Date   : 06-03-2020
//Time   : 10:43

int main() {
    int k,n,w;
    int counter = 0;
    cin>>k>>n>>w;
    for(int i = 1; i<=w; i++)
    {
        counter=counter+(i*k);
    }
    if(counter<=n)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<counter-n<<endl;
    }

    return 0;
}
