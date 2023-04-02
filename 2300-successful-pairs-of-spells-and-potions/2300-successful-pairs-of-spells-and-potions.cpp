// class Solution {
// public:
//     vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
//         vector<int> arr;
//         int c=0;

//         for(int i=0;i<spells.size();i++){
//             c=0;
//             for(int j=0;j<potions.size();j++){
//                 if((long)spells[i]*potions[j]>=success){
//                     c++;
//                 }
//             }
//              arr.push_back(c);
//         }
//         return arr;
//     }
// };
class Solution {
    public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        vector<int> ans;
        for(int i=0;i<spells.size();i++){
            int c=0;
            int index=bs(spells[i],potions,success);
            if(index==-1)
                c+=0;
            else
                c+=potions.size()-index;
            ans.push_back(c);
        }
        return ans;

    }
    
    int bs(int spells, vector<int>& potions, long long success){
    
        int s=0, e=potions.size()-1;
        int ans=-1;
        while(s<=e){
            int mid= s+ (e-s)/2;
            if((long)spells*potions[mid]>=success){
                ans=mid;
                e=mid-1;
            }
            else
                s=mid+1;
        }
        return ans;
    }
};