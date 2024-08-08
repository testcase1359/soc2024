#include<iostream>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {
        if(x==0){
            return x;
        }
        int first=1,last=x;
        while(first<=last){
            int mid=first+(last-first)/2;           //prevents overflow
            if(mid==x/mid){
                return mid;
            }
            else if(mid>x/mid){
                last=mid-1;
            }
            else{
                first=mid+1;
            }
        }
            return last;        //this is when first>last ie when there is no search space
    }
};

int main(){
    Solution s;
    int x;
    cin>>x;
    cout<<"square root of "<<x<< " is "<<s.mySqrt(x)<<endl;
}