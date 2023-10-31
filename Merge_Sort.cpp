class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums3(m + n);  
        
        int left = 0;
        int right = 0;
        int index = 0;
        
        while (left < m && right < n) {
            if (nums1[left] <= nums2[right]) {
                nums3[index++] = nums1[left++];
            } else {
                nums3[index++] = nums2[right++];
            }
        }
        
        
        while (left < m) {
            nums3[index++] = nums1[left++];
        }
        
        
        while (right < n) {
            nums3[index++] = nums2[right++];
        }
        
        
        for (int i = 0; i < m + n; i++) {
            nums1[i] = nums3[i];
        }
    }
};
