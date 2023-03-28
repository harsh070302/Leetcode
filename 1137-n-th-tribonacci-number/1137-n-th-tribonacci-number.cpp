class Solution {
public:
    int tribonacci(int n) {
        int zero=0,one=1,sec=1,res=0;
        if(n<2)
            return n;
        if(n==2)
            return 1;
        for(int i=3;i<=n;i++){
            res=zero+one+sec;
            zero=one;
            one=sec;
            sec=res;
        }
        return res;
    }
};