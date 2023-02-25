class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX,maxo = INT_MIN,ind=-1;
        for(int i=0;i<prices.size();i++){
            if(mini>prices[i]) mini=prices[i];
            ind=prices[i]-mini;
            maxo=max(ind,maxo);
        }
        return maxo;
    }
};
