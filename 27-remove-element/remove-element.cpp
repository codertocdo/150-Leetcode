class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int a = 0;
        for (auto i : nums) {
            if (i!=val) {
                nums[a] = i;
                a++;
            }
        }
        return a;
    }
};