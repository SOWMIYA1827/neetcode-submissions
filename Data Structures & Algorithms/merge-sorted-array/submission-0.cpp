class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int l = 0 , r=0;
       while ( l < nums1.size() && r<nums2.size()){
        if (nums1[l] == 0){
            nums1[l] = nums2[r++];
        }
        l++;
      }
    sort(nums1.begin() , nums1.end());
    }
};