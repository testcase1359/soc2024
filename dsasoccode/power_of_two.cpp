#include<iostream>
using namespace std;
bool power(int n){
    if (n==0)
    return false;
    while(n!=1){
        if(n%2!=0){
            return false;
        }
        n = n/2;
   }
    return true;
}
int main(){
    int n;
    cin>>n;
    if(power(n)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}