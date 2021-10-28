class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       
        int max_sum = -10000;
        int t_sum = 0;
        for(auto num : nums){
            t_sum += num;
            cout << num << " " ;
            max_sum = max(t_sum,max_sum);
            if(t_sum <0)
                t_sum =0;         
        }
        
        return max_sum;
        
    }
};
