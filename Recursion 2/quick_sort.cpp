/* :)
Sort an array A using Quick Sort.
Change in the input array itself. So no need to return or print anything.
<br>
Input format :
Line 1 : Integer n i.e. Array size
Line 2 : Array elements (separated by space)

Output format :
Array elements in increasing order (separated by space)

Constraints :
1 <= n <= 10^3

Sample Input 1 :
6 
2 6 8 5 4 3

Sample Output 1 :
2 3 4 5 6 8
*/


#include<iostream>
using namespace std;

int part(int arr[],int low,int high){
int count=0,pivot=low;
for(int i=low+1;i<=high;i++){
    if(arr[i]<=arr[pivot]){
        count++;
    }
}

pivot=count+low;

swap(arr[low],arr[pivot]);

int i=low;
int j=high;

while(i<pivot && j>pivot){
   while(arr[i]<=arr[pivot]){
        i++;
    }
    while(arr[j]>arr[pivot]){
        j--;
    }
    if(i<pivot && j>pivot){
        swap(arr[i],arr[j]);
        i++;
    j--;
    }
}
return pivot;

}

void quickSort(int arr[],int low,int high){

if(low>=high){
    return;
}
int pi= part(arr,low,high);
quickSort(arr,low,pi-1);
quickSort(arr,pi+1,high);

}
int main(){

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
quickSort(arr,0,n-1);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}