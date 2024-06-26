#include<iostream>
using namespace std;
long long length_of_chocolate(long long l){
      long long i= l*l+2*l+2;
      return i;
}
int main(){
      int t;
      cin>>t;
      while(t--){
            long long l,ans;
            cin>>l;
            ans=length_of_chocolate(l);
            cout<<ans<<endl;
      }
}