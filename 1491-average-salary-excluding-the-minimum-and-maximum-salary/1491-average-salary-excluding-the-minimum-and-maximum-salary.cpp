class Solution {
public:
    double average(vector<int>& salary) {
        double sum=0;
        sort(salary.begin(),salary.end());
        int n=salary.size();
        for(int i=0;i<n;i++)
            sum+=salary[i];
        double avg= (sum-salary[0]-salary[n-1])/(n-2);
        return avg;
    }
};