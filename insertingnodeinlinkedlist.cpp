#include <bits/stdc++.h>
using namespace std;
class listnode{
    public:
    int val;
    listnode* next;
    listnode(int x)
    {
        val=x;
        next=NULL;
    }
};
    void printlist(listnode* head)
    {
        listnode* curr=head;
        for(;curr!=NULL;curr=curr->next)
        {
            cout<<curr->val<<"->";
        }
        cout<<"NULL"<<endl;
    }
    listnode* insert(int value,listnode* head)
    {
        listnode* newnode=new listnode(value);
        newnode->next=head;
        head=newnode;
        return head;
    }
    int main()
    {
        listnode* head=NULL;
        int n,a;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            head=insert(a,head);
        }
        printlist(head);
        return 0;
    }


