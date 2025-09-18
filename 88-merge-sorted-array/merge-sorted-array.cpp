class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> numans;
        while (nums1.size()>m) {
            nums1.pop_back();
        }
        for (int i=0; i<n; i++) {
            nums1.push_back(nums2[i]);
        }
        for (int i=0; i<nums1.size(); i++) {
            for (int j=i+1; j<nums1.size(); j++) {
                if (nums1[i]>=nums1[j]) {
                    int temp = nums1[i];
                    nums1[i] = nums1[j];
                    nums1[j] = temp;
                }
            }
        }       
    }      
};