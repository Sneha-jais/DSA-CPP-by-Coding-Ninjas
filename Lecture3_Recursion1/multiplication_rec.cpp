/* :)
Given two integers M & N, calculate and return their multiplication using recursion. You can only use subtraction and addition for your calculation. No other operators are allowed.
Input format :
Line 1 : Integer M
Line 2 : Integer N

Output format :
M x N

Sample Input 1 :
3 
5

Sample Output 1 :
15
*/



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
