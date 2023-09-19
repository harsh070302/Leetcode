class Solution {
public:
    bool isPalindrome(int x) {
    
        long n=x;
        long rem=0;
        while(n>0)
        {
            long temp=n%10;
            rem=rem*10+temp;
            n=n/10;
        }
        if(rem==x)
        {
            return true;
         }
        else{
            return false ;
        }
    }
};