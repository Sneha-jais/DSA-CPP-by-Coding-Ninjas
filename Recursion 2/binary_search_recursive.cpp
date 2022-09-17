#include<iostream>
using namespace std;

int binary_search(int arr[],int low,int high,int key){
    if(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key)
        return mid;
        else if(arr[mid]<key)
        return binary_search(arr,mid+1,high,key);
        else
         return binary_search(arr,low,mid-1,key);
    }
    return -1;

}

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int key;
cin>>key;
int x=binary_search(arr,0,n-1,key);
if(x==-1)
cout<<"Element not found\n";
else
cout<<"Position of "<<key<<" is "<<x+1;
    return 0;
}
