class Solution {
public:
    double average(vector<int>& salary) {
        double ans = 0;
        sort(salary.begin(), salary.end());
        double k = accumulate(salary.begin() + 1, salary.end() - 1, 0);
        ans = k/(salary.size() - 2);
        return ans;
        
    }
};