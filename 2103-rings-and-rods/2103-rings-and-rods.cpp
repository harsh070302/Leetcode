class Solution {
public:
    int countPoints(string rings) {
        int r[10]={0};
         int g[10]={0};
         int b[10]={0};
        int c=0;
        
        for(int i=0;i<rings.size();i+=2){
            int rod=rings[i+1]-'0';
            if(rings[i]=='R')
                r[rod]++;
            else if(rings[i]=='G')
                g[rod]++;
            else
                b[rod]++;
        }
        for(int i=0;i<10;i++){
            if(r[i]>0 && g[i]>0 && b[i]>0)
                c++;
        }
        return c;
        
    }
};