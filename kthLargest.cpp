// https://leetcode.com/problems/kth-largest-element-in-an-array/submissions/
//kthLargest

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end(),greater<int>());
        int i = 1;
        for(int num: nums) {
            if(k==i){
                return num;
            }
            i++;
        }
        return 0;
    }
};