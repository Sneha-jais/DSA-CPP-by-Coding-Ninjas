#include<bits/stdc++.h>
using namespace std;

void pair_sum(int arr[],int n,int num){
    int low=0,high=n-1;
while(low<high){
    int sum=arr[low]+arr[high];
    if(sum==num){
        cout<<arr[low]<<" "<<arr[high]<<endl;
        if(arr[low]==arr[low++] || arr[low--]==arr[low]&& arr[high]==arr[high--]){
            cout<<arr[low]<<" "<<arr[high]<<endl;

        }
         if(arr[low]<arr[high]){
            low++;
        }
        else{
            high--;
        }
    }
    else if(sum<num){
        low++;
    }
    else{
        high--;
    }
}

}

int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
int num;
cin>>num;
sort(arr,arr+n);
pair_sum(arr,n,num);


}
    return 0;
}