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
