#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
            int n=nums1.size();
            int m=nums2.size();
            vector<int>merged_array;
            for(int i=0;i<n;i++){
                merged_array.push_back(nums1[i]);
            }
            for(int i=0;i<m;i++){
                merged_array.push_back(nums2[i]);
            }
            sort(merged_array.begin(),merged_array.end());
            int total_length=merged_array.size();
            if(total_length%2==1) return static_cast<double>(merged_array[total_length/2]);     //static_cast<data_type to be converted into>(which is to be converted) is written to type caste the data type
            
            else{
                int middle1=merged_array[total_length/2-1];
                int middle2=merged_array[total_length/2];
                return ((static_cast<double>(middle1)+static_cast<double>(middle2))/2.0);
            }
    }
};

int main(){
    vector<int>num1={1,3,5,6,7};
    vector<int>num2={1,2,5,9,8,5};
    Solution s;
    cout<<"median is "<<s.findMedianSortedArrays(num1,num2)<<endl;
}