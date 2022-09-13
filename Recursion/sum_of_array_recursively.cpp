/* :)
Given an array of length N, you need to find and return the sum of all elements of the array.
Do this recursively.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces

Output Format :
Sum

Constraints :
1 <= N <= 10^3

Sample Input 1 :
3
9 8 9

Sample Output 1 :
26
*/

#include<iostream>
using namespace std;
int sum_arr(int arr[],int n,int i=0,int ans=0){

if(i>=n){
    return ans;
}
ans+=arr[i];
return sum_arr(arr,n,i+1,ans);


}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    int ans=sum_arr(arr,n);
    cout<<ans<<endl;



    return 0;
}
