// https://leetcode.com/problems/find-the-duplicate-number/solution/
// Find the duplicate no
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int temp;
        while(nums[0]!=nums[nums[0]]){
                temp = nums[nums[0]];
                nums[nums[0]] = nums[0];
                nums[0] = temp;
            }
        return nums[0];
    }
};

