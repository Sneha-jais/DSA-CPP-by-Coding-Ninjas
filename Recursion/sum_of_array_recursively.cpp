#include<iostream>
using namespace std;
int sum_arr(int arr[],int n,int i=0,int ans=0){

if(i>=n){
    return ans;
}
ans+=arr[i];
return sum_arr(arr,n,i+1,ans);


}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    int ans=sum_arr(arr,n);
    cout<<ans<<endl;



    return 0;
}