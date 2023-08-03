#include <bits/stdc++.h>
using namespace std;
int findLargestElement(vector <int>&arr,int n)
{
  int max=arr[0];
  for(int i=0;i<n;i++){
    if(max<arr[i]){
      max=arr[i];}
  }
return max;
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
  int large= findLargestElement(arr,n);
  cout<<"Largest Element:"<<large;
}