class Solution {
  public:
      int missingNumber(vector<int>& nums) {
          int n = nums.size();
          for(int i=0;i<n+1;i++){
              int j;
              for(j=0;j<n;j++){
                  if(nums[j]==i){
                      break;
                  }
              }
                  if(j==n){
                      return i;
                  }    
          }
          return -1;
      }
  };