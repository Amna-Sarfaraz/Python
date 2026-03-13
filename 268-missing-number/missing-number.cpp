class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size=nums.size();
        for (int i=0;i<=size;i++){
            if(find(nums.begin(),nums.end(),i)==nums.end()){
                return i;
            }
        }
        return -1;
    }  
};