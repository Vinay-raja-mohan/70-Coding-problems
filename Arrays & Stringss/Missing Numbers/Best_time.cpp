class Solution {
  public:
      int missingNumber(vector<int>& nums) {
          int  sums =0,i,n=nums.size();
          for(i=0;i<n;i++){
              sums += nums[i];
          }
          
          int real_sum;
          real_sum = (n*(n+1))/2;
  
          return real_sum-sums;
  
      }
  };