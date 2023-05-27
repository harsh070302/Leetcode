
class Compare {
    public:
       bool operator()(pair<int, int>  a, pair<int, int>  b){
           if(a.first==b.first){
               return a.second<b.second;
           }
           return a.first>b.first;
      }
};
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        
        priority_queue<pair<int, int> , vector<pair<int, int>>,Compare> minh;
        
        for(auto i=mp.begin();i!=mp.end();i++){
            minh.push({i->second,i->first});
        }
        while(minh.size()>0){
            int freq=minh.top().first;
            int val=minh.top().second;
            
            for(int i=0;i<freq;i++)
                ans.push_back(val);
            
            minh.pop();
        }
        return ans;
    }
};