class Solution {
public:
    bool isHappy(int n) {
        while(n!=1 && n!=4){
            int sum=0;
            while(n>0){
                int temp=n%10;
                sum+=temp*temp;
                n=n/10;
            }
            n=sum;
        }
        return n==1;
    }
};