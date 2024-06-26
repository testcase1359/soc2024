#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<string>final;
    for(int i=0;i<t;i++){
        string a,b;
        cin>>a>>b;
        char ex=a[0];
        a[0]=b[0];
        b[0]=ex;
        final.push_back(a+" "+b);
    }
    for(int i=0;i<final.size();i++){
        cout<<final[i]<<endl;
    }
}
