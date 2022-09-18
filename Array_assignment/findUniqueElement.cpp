/* :)
*/

#include<bits/stdc++.h>
using namespace std;

int unique(int n,int arr[]){
bool flag=true;
int i,j;
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(arr[i]==arr[j] && i!=j){
            break;
        }
        
    }
    if(j==n){
      return arr[i];
    }
    
}
return -1;
}



int unique_sort(int n,int arr[]){
sort(arr,arr+n);
for(int i=0;i<n;i+=2){
    if(arr[i]!=arr[i+1]){
        return arr[i];
    }
}
return -1;
}


int unique_xor(int n,int arr[]){
    int ans=0;

for(int i=0;i<n;i++){
     ans=ans^arr[i];
}
return ans;
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

int temp=unique(n,arr);
// int temp=unique_sort(n,arr);
// int temp=unique_xor(n,arr);
cout<<temp<<endl;
}
    return 0;
}
