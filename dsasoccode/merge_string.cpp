#include<iostream>
#include<string>
using namespace std;
string merge(string first,string second){
    string mergedstring;
   int l1=first.length();
   int l2=second.length();
   int index=0;
   while(index<l1 || index<l2){
    if(index<l1){
        mergedstring+=first[index];
    }
    if(index<l2){
        mergedstring+=second[index];
    }
    index++;
   }
   return mergedstring;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    string final_string=merge(s1,s2);
    cout<<final_string<<endl;
}
