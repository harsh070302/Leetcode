class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        int n=s.size(),count=0,flag=0;
        
        while(1)
        {
            flag=0;
            for(int i=1;i<n;i++)
            {
                if(s[i-1]=='0' && s[i]=='1')
                {
                    s[i-1]='1';
                    s[i]='0';
                    i++;
                    flag=1;
                }
            }
            if(flag==1)
                count++;
            if(flag==0)
                break;
        }
        return count;
    }
};