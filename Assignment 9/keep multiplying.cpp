class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        
    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i]==original)
        {
            original = 2 * original;
        }
        else
        {
            for (int j =  0; j < nums.size(); j++)
            {
                if (nums[j] == original)
                {
                    original = 2 * original;
                }
            }
        }
    }
    return original;


    }
};
