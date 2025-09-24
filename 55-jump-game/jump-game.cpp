class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxjump = 0;
        int n = nums.size();
        int i = 0;
        while (i <= maxjump && i < n) {
            maxjump = max(maxjump, i + nums[i]);
            if (maxjump >= n - 1) return true;
            i++;
        }
        return false;    
    }
};