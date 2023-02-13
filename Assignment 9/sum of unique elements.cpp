class Solution {
public:
    int maxi(vector<int>& nums){
        int m=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>m)m=nums[i];
        }
        return m;
    }
    int sumOfUnique(vector<int>& nums) {
        int n=maxi(nums);
        int aux[n+1];
        for(int i=0;i<n+1;i++){
            aux[i]=0;
        }
        for(int i=0;i<nums.size();i++){
            aux[nums[i]]++;
        }
        int sum=0;
        for(int i=0;i<n+1;i++){
            if(aux[i]==1)sum+=i;
        }
        return sum;
    }
};
