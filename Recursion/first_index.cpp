#include<iostream>
using namespace std;
int index(int arr[],int n,int x,int start){

    if(arr[start]==x)
       return start;
    if(start<n)
       return index(arr,n,x,start+1);
       
return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
int x;
cin>>x;

    int ans=index(arr,n,x,0);
    cout<<ans<<endl;



    return 0;
}