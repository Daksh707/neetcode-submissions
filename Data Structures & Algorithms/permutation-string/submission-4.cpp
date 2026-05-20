class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;
        sort(s1.begin(),s1.end());
        int k=s1.size();
        for(int i=0;i<=s2.size()-k;i++){
            string s=s2.substr(i,k);
            sort(s.begin(),s.end());
            if(s==s1) return true;
        }
        return false;
    }
};
