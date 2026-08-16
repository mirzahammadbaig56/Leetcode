class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i = m, j = 0; i < m+n; i++, j++){
            nums1[i] = nums2[j];
        }
        for(int i=0; i < m+n-1;i++){
            for(int j=0; j< m+n-1-i; j++){
                if(nums1[j] > nums1[j+1]) swap(nums1[j], nums1[j+1]);
            }
        }
    }
};