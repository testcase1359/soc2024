#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return 0;
        if(nums[0]>nums[1]) return 0;           //edge cases 0 and n-1 are taken separately as we get error 
        // for accessing invalid adresses
        if(nums[n-1]>nums[n-2]) return n-1;
        int low=1;
        int high=n-2;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>nums[mid-1]&&nums[mid]>nums[mid+1]) return mid;
            if(nums[mid]<nums[mid-1]) high=mid-1;
            if(nums[mid]>nums[mid-1]) low=mid+1;
        }
        return -1;
    } 
};

int main(){
    vector<int>nums={1,2,3,5,6,2,9};
    Solution s;
    cout<<"peak element index is "<<s.findPeakElement(nums)<<endl;
}