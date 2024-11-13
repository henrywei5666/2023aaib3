class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int N = nums.size();
        for(int i=0;i<N-2;i++){
            int big = nums[N-i-1],middle=nums[N-i-2],small = nums[N-i-3];
            if(middle+small > big) return big+middle+small;
        }
        return 0;
    }
};
