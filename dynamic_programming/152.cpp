class Solution {
public:
    int maxProduct(vector<int>& nums) {
          
        int n = nums.size();
        if(n==0)
            return 0;
        if(n<2)
            return nums[0];
            
        int Product = nums[0];
        int maxProduct = Product;
        int minProduct = Product;
        
        for (int i = 1; i < n; i++) {
           //Product = max(nums[i], sum * nums[i]);
           int a=maxProduct * nums[i];
           int b=minProduct * nums[i];
           maxProduct = max(nums[i],max(a,b));
           minProduct = min(nums[i],min(a,b));
           Product = max( maxProduct , Product );
        }

         return Product;

    }

};