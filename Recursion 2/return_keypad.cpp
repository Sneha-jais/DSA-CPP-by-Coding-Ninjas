/* :)
Given an integer n, using phone keypad find out all the possible strings that can be made using digits of input n.
Return empty string for numbers 0 and 1.
Note : 1. The order of strings are not important.
2. Input and output has already been managed for you. You just have to populate the output array and return the count of elements populated in the output array.
Input Format :
Integer n

Output Format :
All possible strings in different lines

Constraints :
1 <= n <= 10^6

Sample Input:
23

Sample Output:
ad
ae
af
bd
be
bf
cd
ce
cf
*/



#include <iostream>
#include <string>
using namespace std;

void print(int num,string out){
    if(num==0)
    {
        cout<<out<<endl;
        return ;
    }
    string s[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string input=s[num%10];
    for(int i=0;i<input.size();i++){
        print(num/10,input[i]+out);
    }
}
void printKeypad(int num){
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */
    print(num,"");
}

int main(){
    int num;
    cin >> num;

    printKeypad(num);

    return 0;

}



