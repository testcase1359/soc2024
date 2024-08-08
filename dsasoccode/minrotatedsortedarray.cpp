#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int min_val = INT_MAX;
        int low = 0, high = nums.size() - 1;
        
        while (low <= high) {
            int mid = (low + high) / 2;
            
            if (nums[low] <= nums[mid]) {
                min_val = min(min_val, nums[low]);
                low = mid + 1;
            } else {
                min_val = min(min_val, nums[mid]);
                high = mid - 1;
            }
        }
        return min_val;
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {3, 4, 5, 1, 2};
    vector<int> nums2 = {4, 5, 6, 7, 0, 1, 2};
    vector<int> nums3 = {11, 13, 15, 17};

    cout << "Minimum in nums1: " << sol.findMin(nums1) << endl; 
    cout << "Minimum in nums2: " << sol.findMin(nums2) << endl; 
    cout << "Minimum in nums3: " << sol.findMin(nums3) << endl; 

    return 0;
}
