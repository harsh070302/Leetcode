class Solution {
public:
    int reverse(int x) {
        int r=0;
        while(x!=0){
            if(r>INT_MAX/10 || r<INT_MIN/10)
                return 0;
            
            int ld=x%10;
            r=r*10 + ld;
            x=x/10;
        }
        return r;
    }
};