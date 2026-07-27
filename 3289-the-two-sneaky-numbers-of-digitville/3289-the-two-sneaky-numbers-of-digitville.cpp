class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> freq;
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
        for(auto a:freq)
        {
            if(a.second==2)
            {
                ans.push_back(a.first);
            }
        }
        return ans;
    }
};