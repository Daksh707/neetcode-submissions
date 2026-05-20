class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i:nums){
            mp[i]++;
        }
        vector<int>ans;
        while(k--){
            int maxfreq=0;
            int element=-1;
            for(auto a:mp){
                if(a.second>maxfreq){
                    maxfreq=a.second;
                    element=a.first;
                }
            }
            ans.push_back(element);
            mp.erase(element);
        }
        return ans;
    }
};
