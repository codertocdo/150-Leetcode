class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int temp = nums[0];
        int k = 1;
        for (auto number : nums) {
            if (number!=temp) {
                k++;
                temp = number;
                nums[k-1] = number;
            } 
        }
        while (nums.size()>k) {
            nums.pop_back();
        }
        return k;
    }
};