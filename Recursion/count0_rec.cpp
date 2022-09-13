/* :)
Given an integer N, count and return the number of zeros that are present in the given integer using recursion.
Input Format :
Integer N

Output Format :
Number of zeros in N

Constraints :
0 <= N <= 10^9

Sample Input 1 :
10204

Sample Output 1 :
2
*/


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
