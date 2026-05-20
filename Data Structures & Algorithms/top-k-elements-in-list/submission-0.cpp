class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int num : nums) {
            mp[num]++;
        }
        vector<int> ans;
        while(k--) {
            int maxFreq = 0;
            int element = -1;

            for(auto it : mp) {
                if(it.second > maxFreq) {
                    maxFreq = it.second;
                    element = it.first;
                }
            }
            ans.push_back(element);
            mp.erase(element);
        }
        return ans;
    }
};