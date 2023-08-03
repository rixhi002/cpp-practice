#include <bits/stdc++.h>
using namespace std;
int secondSmallest(vector <int>& arr,int n)
{
    if(n<2)
        return -1;
    int second_small= INT_MAX;
    int small= INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<small)
        {
            second_small=small;
            small=arr[i];
        }
        else if(arr[i]<second_small&&arr[i]!=small)
        {
            second_small=arr[i];
        }
    }
    return second_small;

}
int secondLargest(vector <int>& arr,int n)
{
    if(n<2)
        return -1;
    int second_large= INT_MIN;
    int large= INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>large)
        {
            second_large=large;
            large=arr[i];
        }
        else if(arr[i]>second_large&&arr[i]!=large)
        {
            second_large=arr[i];
        }
    }
    return second_large;

}
int main(){
    vector <int> arr;
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    cout<<"Second Smallest :"<<secondSmallest(arr,n)<<"\n";
    cout<<"Second largest :"<<secondLargest(arr,n);
    cout<<endl;
    return 0;
}