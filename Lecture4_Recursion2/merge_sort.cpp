/* :)
Sort an array A using Merge Sort.
Change in the input array itself. So no need to return or print anything.
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

void merge(int arr[],int low,int mid,int high){

int n1=mid-low+1;
int n2=high-mid;
int a[n1],b[n2];

for(int i=0;i<n1;i++){
    a[i]=arr[low+i];
}
for(int i=0;i<n2;i++){
    b[i]=arr[mid+1+i];
}
int k=low,i=0,j=0;

while(i<n1 && j<n2){
    if(a[i]>b[j]){
        arr[k]=b[j];
        j++;
    }
    else{
        arr[k]=a[i];
        i++;
    }
    k++;
}

while(i<n1){
    arr[k]=a[i];
    i++;
    k++;
}
while(j<n2){
    arr[k]=b[j];
    j++;
    k++;
}

}
void mergeSort(int arr[],int low,int high){
int mid;
if(low<high){
    mid=(low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}


}

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
mergeSort(arr,0,n-1);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}