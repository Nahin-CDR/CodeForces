#include<iostream>

//Solver : Nahin
//Date   : 09-01-2020
//Time   : 06:23 pm
using namespace std;

int main()
{
    int range,checker;
    int counter = 0;
    cin>>range>>checker;
    if(range>checker || range==checker)
    {

        int arr[range];

        int picker=checker;


        for(int i=1; i<=range; i++)
        {
            cin>>arr[i];
        }

        for(int j=checker; j<=range; j++)
        {
            if(arr[j]>0 && arr[j]>=arr[checker])
            {

                counter=picker;
                picker++;
            }
            else if(arr[j]==0)
            {
               for(int jr=range; jr>0; jr--)
               {
                   if(arr[jr]>0)
                   {
                       counter=jr;
                       break;
                   }
               }
            }
            else
            {
                break;
            }

        }
    }

    cout<<counter<<endl;
    return 0;
}
