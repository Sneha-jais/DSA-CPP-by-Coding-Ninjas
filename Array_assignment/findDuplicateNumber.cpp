/* :)
*/
  
#include<bits/stdc++.h>
using namespace std;

int duplicate(int n,int arr[]){
bool flag=true;
int i,j;
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(arr[i]==arr[j] && i!=j){
       return arr[i];
        }
        
    }
       
}
return -1;
}


int duplicate_sort(int n,int arr[]){
sort(arr,arr+n);
for(int i=0;i<n;i++){
    if(arr[i]==arr[i+1]){
        return arr[i];
    }
}
return -1;
}


int duplicate_sum(int n,int arr[],int sum){
int ans=0;

for(int i=0;i<n;i++){
    ans+=arr[i];
}


return (ans-sum);
}




int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
//numbers will be 0 to (n-2)
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];

int sum=((n-1)*(n-2))/2;

// int temp=duplicate(n,arr);
// int temp=duplicate_sort(n,arr);
int temp=duplicate_sum(n,arr,sum);
cout<<temp<<endl;
}
    return 0;
}
