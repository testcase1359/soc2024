#include<iostream>
using namespace std;
int main(){
     int a,c;
     while(cin >>a>>c){
        int s1[200],s2[200];
        int length1,length2,highest;
        for(length1=0;a>0;length1++,a/=3){
        s1[length1]=a%3;
        }
        for(length2=0;c>0;length2++,c/=3){
        s2[length2]=c%3;
        }
        if(length1<length2){
        for(int i=length1;i<length2;i++){
            s1[i]=0;
        }
            highest=length2;
            
        }
        else{
            for(int i=length2;i<length1;i++){
            s2[i]=0;
            }
            highest=length1;
        }
     
     int result=0;
     for(int i=highest-1;i>=0;i--){
        if(s2[i]-s1[i]>=0){
            result=result*3 +s2[i]-s1[i];
    
        }
        else{
            result=result*3 +3 +s2[i]-s1[i];
        }
 
     }
        cout<<result<<endl;
}
 
}