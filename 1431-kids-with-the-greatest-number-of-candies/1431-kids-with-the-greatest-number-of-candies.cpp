class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max=0;
        vector<bool> arr;
        for(int i=0;i<candies.size();i++){
            if(candies[i]>max)
                max=candies[i];
        }
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=max)
                arr.push_back(1);
            else
                arr.push_back(0);
        }
         return arr;
    }
};