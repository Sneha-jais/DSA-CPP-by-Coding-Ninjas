/* :)
Print all subsequences of a given string.
INPUT: take a string
OUTPUT: print all possible subsequences of a string

input1:
abc
output1:

c 
b 
bc 
a 
ac 
ab 
abc
*/


#include<iostream>
#include<math.h>
using namespace std;

int subs(string input,string output[]){
if(input.empty()){
output[0]=" ";
    return 1;
}

//ss represents small string
//remove first character and take all string from 1 to end
string ss=input.substr(1);

//sso represents small output size
int sos=subs(ss,output);

for(int i=0;i<sos;i++){
    output[i+sos]=input[0]+output[i];
}

return 2*sos;
}

int main(){
string s;
cin>>s;
int l=s.size();
int n=pow(2,l);
string *output=new string[n];

int size_output=subs(s,output); //count of subsequences

for(int i=0;i<size_output;i++){
    cout<<output[i]<<endl;
}

    return 0;
}