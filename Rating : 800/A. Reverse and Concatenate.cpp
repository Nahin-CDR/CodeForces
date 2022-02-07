//Author : Nahin the Coder
//Date : 06-02-2022

#include<bits/stdc++.h>
using namespace std;

struct Node{

    int dataPart;
    Node *linkPart;
};


void PrintLinkedList(Node *head)
{
    if(head == NULL)
    {
        cout<<"Linked list is empty !"<<endl;
    }
    else
    {
        cout<<"Entire linkedlist :\n";
        while(head != NULL)
        {
            cout<<head->dataPart<<endl;
            head= head->linkPart;
        }
    }
}

void AddNode(Node **head,int value)
{
    Node *new_node = new Node;
    new_node->dataPart = value;
    new_node->linkPart = *head;
    *head = new_node;
}

int main()
{
    
    int test; cin>>test;
    while(test--)
    {
        int n,k;
        cin>>n>>k;
        string str; cin>>str;
        
        if(k == 0)
        {
            cout<<1<<endl;
        }
        else
        {
            string temp = str;
            reverse(temp.begin(),temp.end());
            if(temp == str)
            {
                cout<<1<<endl;
            }
            else
            {
               
                cout<<2<<endl;
                
            }
        }
    }
   
    return 0;
}
