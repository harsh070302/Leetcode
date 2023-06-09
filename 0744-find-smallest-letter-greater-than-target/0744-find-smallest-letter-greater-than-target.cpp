class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int s=0;
        int e=letters.size()-1;
        int ans=0;
        while(s<=e){
            int mid=s+(e-s)/2;

            if(target==letters[mid])
                s=mid+1;
            else if(target>letters[mid])
                s=mid+1;
            else{
                ans=mid;
                e=mid-1;
            }
        
        }
        return letters[ans];
    }
};