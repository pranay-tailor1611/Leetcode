class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start = 0;
        int totalTank = 0;
        int currentTank = 0;

        for(int i = 0; i < gas.size(); i++){
            int diff = gas[i] - cost[i];

            totalTank += diff;
            currentTank += diff;

            if(currentTank < 0){
                start = i + 1;
                currentTank = 0;
            }

            
        }

        if(totalTank >= 0){
            return start;
        }
        return -1;
    }
};