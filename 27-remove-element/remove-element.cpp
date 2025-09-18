class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        vector<int> temp;
        for (auto i : nums) {
            if (i!=val) {
                count++;
                temp.push_back(i);
            }
        }
        while (nums.size()>0) {
            nums.pop_back();
        }
        for (int i=0; i<count; i++) {
            nums.push_back(temp[i]);
        }
        return count;
    }
};