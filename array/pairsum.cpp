class Solution {
public:
    vector<int> pairsum(vector<int>& nums, int target) {
        vector<int> ans;
        int n=nums.size();
        int i=0,j=n-1;
        while(i<j){
            int pairsum =nums[i]+nums[j];
            if(pairsum>target){
                j--;
            }
            else if(pairsum<target){
                i++;
            }
            else{
                ans.push_back(i);
                ans.push_back(j);
                return ans;
                
            }
        }return ans;
    }
};
