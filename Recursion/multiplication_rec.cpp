#include<iostream>
using namespace std;
int mul(int x,int y,int ans){
    if(y==0)
    return 0;

    return mul(x,y-1,ans)+x;

}
int main(){
int m,n;
cin>>m>>n;
//find m*n 

int ans=mul(m,n,0);
cout<<ans<<endl;


    return 0;
}