#include <iostream>
using namespace std;

int count0(int n,int x,int count=0){
    if(n>1){
    if(x==0)
    count++;
    n/=10;
    x=n%10;
    return count0(n,x,count);
    }
return count;
}

int main(){
int n;
cin>>n;

int ans=count0(n,n%10);
cout<<ans;
    return 0;
}