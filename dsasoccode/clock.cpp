#include<iostream>
using namespace std;
bool intersection(int a,int b,int c,int d){
    if (a>b) swap(a,b);
    if (c>d) swap(c,d);
    if(a<c && b<d && c<b) return true;
    if(c<a && d<b && a<d)return true;
    return false;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a<1 || a>12 || b<1 || b>12 || c<1 || c>12 || d<1 || d>12){
    cout<<"numbers are invalid"<<endl;
    return 1;   
}
    
    if(intersection(a,b,c,d)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
}