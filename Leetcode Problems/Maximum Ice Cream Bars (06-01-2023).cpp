class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
    sort(costs.begin(),costs.end());
    int size = costs.size();
    for (int i=0; i <size; i++){
        if (coins >= costs[i]){
            coins -= costs[i];
        }
        else{
            return i;
        }
    }
    return size;
    }
};
