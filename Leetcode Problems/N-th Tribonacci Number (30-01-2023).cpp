class Solution {
public:
    int tribonacci(int n) {
        int zeroth = 0, first = 1, second = 1, ans;
        if(n < 2)       return n;
        if(n == 2)      return 1;
        for(int i = 3; i <= n; i++){
            ans = zeroth + first + second;
            zeroth = first;
            first = second;
            second = ans;
        }
        return ans;
    }
};
