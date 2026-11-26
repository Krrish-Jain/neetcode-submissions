class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>repitions;
        int majority = nums.size() / 2;

        for (int i = 0; i < nums.size(); i++){
            int current = nums[i];
            repitions[current]++;

            if(repitions[current] > majority ){
                return current;
            }

        }
        return -1;
    }
};