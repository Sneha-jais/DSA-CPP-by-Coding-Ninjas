/* :)
A child is running up a staircase with N steps, and can hop either 1 step, 2 steps or 3 steps at a time. Implement a method to count how many possible ways the child can run up to the stairs. You need to return number of possible ways W.
Input format :
Integer N

Output Format :
Integer W

Constraints :
1 <= N <= 30

Sample Input 1 :
4

Sample Output 1 :
7
*/

#include<iostream>
using namespace std;
int check_step(int p){
   if (p== 0)
            return 1;
        else if (p< 0)
            return 0;
else 
return check_step(p-1)+check_step(p-2)+check_step(p-3);
}
int main(){
int n;
cin>>n;

int temp=check_step(n);
cout<<temp;
    return 0;
}