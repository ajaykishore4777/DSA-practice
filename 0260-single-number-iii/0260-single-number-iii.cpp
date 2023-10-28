class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int,int> k;
        int n=nums.size();
        for(int i=0;i<n;i++){
            k[nums[i]]++;
        }
        vector<int> ans;
        for (auto i : k) {
        if (i.second==1 ) {
            ans.push_back(i.first);
        }
    }
  
    return ans;
}
};