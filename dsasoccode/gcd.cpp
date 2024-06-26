#include<iostream>
#include<string>
#include<numeric>
using namespace std;
string q3(string str1,string str2){
    if(str1+str2!=str2+str1)
    return "";
    int n;
    n=gcd(str1.size(),str2.size());  
        string x;
        for(int i=0;i<n;i++){
            x.push_back(str1[i]);
    }
    return x;
}
int main(){
    string a,b;
    cin>>a>>b;
    cout<<q3(a,b);
    return 0;
}