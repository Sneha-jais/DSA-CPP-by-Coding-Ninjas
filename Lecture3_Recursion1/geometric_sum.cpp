/*  :)
Given k, find the geometric sum i.e.
1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k)
using recursion.
Input format : Integer k

Output format : Geometric sum
Constraints :
0 <= k <= 1000

Sample Input 1 :
3

Sample Output 1 :
1.875
*/



#include<iostream>
#include<math.h>
using namespace std;
double gsum(int k,double ans){
if(k==0)
return ans;

return gsum(k-1,ans)+(1/pow(2,k));

}
int main(){
int k;
cin>>k;

double ans=gsum(k,1);
cout<<ans<<endl;


    return 0;
}
