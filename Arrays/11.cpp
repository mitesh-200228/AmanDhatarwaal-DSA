class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int ans = 0;
        int right = height.size() - 1;
        int left_max = 0;
        int right_max = 0;
        while(left<right){
            if(height[left]<height[right]){
                height[left] >= left_max ? (left_max = height[left]) : ans += (left_max - height[left]);
                ++left;
            }else{
                height[right] >= right_max ? (right_max = height[right]) : ans += (right_max - height[right]);
                --right;
            }
        }
        return ans;
    }
};

//this is done on leetcode basis , so paste your code there