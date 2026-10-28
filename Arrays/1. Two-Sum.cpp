class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        // it has T.C O(n*n)
        // for(int i=0;i<(n-1);i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]+nums[j]==target){
        //             // cout<<"["<<i<<","<<j<<"]";
        //             return {i,j};
        //         }
        //     }
        // }
        // return {};

        // it has T.C O(n)
        vector<int>ans;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            int rem = target - nums[i];
            if(m.find(rem)!=m.end()){
                ans.push_back(m[rem]);
                ans.push_back(i);
            }
            else m[nums[i]] = i;
        }
        return ans;
    }
};
