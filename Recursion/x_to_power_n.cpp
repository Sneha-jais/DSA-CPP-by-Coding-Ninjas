/* :)
Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to return the answer.
Do this recursively.
Input format :
Two integers x and n (separated by space)

Output Format :
x^n (i.e. x raise to the power n)

Constraints :
1 <= x <= 30
0 <= n <= 30

Sample Input 1 :
 3 4

Sample Output 1 :
81

*/

#include<iostream>
using namespace std;
int pow(int x, int n,int ans=1){
  
    if(n==0){
     return ans;
    }
    ans*=x;
    return pow(x,n-1,ans);
    return -1;

}
int main(){
int x,n;
cin>>x>>n;
int ans=pow(x,n);
cout<<ans<<endl;

    return 0;
}