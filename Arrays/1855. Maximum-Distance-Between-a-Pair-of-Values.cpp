You are given two non-increasing 0-indexed integer arrays nums1​​​​​​ and nums2​​​​​​.
A pair of indices (i, j),where 0 <= i < nums1.length and 0 <= j < nums2.length, is valid if both i <= j and nums1[i] <= nums2[j].The distance of the pair is j - i​​​​.
Return the maximum distance of any valid pair (i, j). If there are no valid pairs, return 0.
An array arr is non-increasing if arr[i-1] >= arr[i] for every 1 <= i < arr.length.

class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        // int n=nums1.size();
        // int m=nums2.size();
        // int mx=0;
        // for(int i=0;i<n;i++){
        //     int j=i;
        //     while(j<m && nums1[i]<=nums2[j]){
        //             mx=max(mx,j-i);
        //             j++;
        //     }
        // }
        // return mx;
         
        // above has T.C O(n*m) below have  T.C O(n+m)
        int n = nums1.size();
        int m = nums2.size();
        int i = 0, j = 0;
        int mx = 0;
        while (i < n && j < m) {
            if (nums1[i] <= nums2[j]) {
                mx = max(mx, j - i);
                j++;
            }
            else {
                i++;
            }
        }
        return mx;
    }
};
