class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        vector<int> ans;
        for(int n : nums){
            m[n]++;
        }
        while(ans.size() != k){
            int maxkey = 0, maxcount = 0;
            for(auto [key, count] : m){
                if(count > maxcount){
                    maxcount = count;
                    maxkey = key;
                }
            }
            ans.push_back(maxkey);
            m.erase(maxkey);
        }
        return ans;
    }
};
