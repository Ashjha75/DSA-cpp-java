Find two sum ==target q1 LCode

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> n;
        for(int i =0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                if(j<=nums.size()-2){
                    int x=nums[i]+nums[j+1];
                    if(x==target){
                        n.push_back(i);
                        n.push_back(j+1);
                    }
                }
            }
        }
        return n;
    }
};
