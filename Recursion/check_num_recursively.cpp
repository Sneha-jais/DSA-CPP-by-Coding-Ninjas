/* :)
Given an array of length N and an integer x, you need to find if x is present in the array or not. Return true or false.
Do this recursively.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x
Output Format :
'true' or 'false'
*/

#include<iostream>
using namespace std;
bool check(int arr[],int n,int x,int i){

if(x==arr[i]){
    return true;
}
if(i<n){
    return check(arr,n,x,i+1);
}


return false;
}
int main(){
    int n,x;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
cin>>x;
    int ans=check(arr,n,x,0);
    if(ans==true){
        cout<<"TRUE\n";

    }
    else
    cout<<"FALSE"<<endl;
    return 0;
}
