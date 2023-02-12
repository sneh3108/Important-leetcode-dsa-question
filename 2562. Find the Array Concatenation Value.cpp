//https://leetcode.com/problems/find-the-array-concatenation-value/description/

class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long res=0;
        int n=nums.size();
        for(int i=0;i<n/2;i++){
          // to_string() function use for changing integer to string
          string temp=to_string(nums[i])+to_string(nums[n-1-i]); 
          // stol() function use to change string to integer value
          res+=stol(temp);
        }
      if(n%2==1) res+=nums[n/2];
      return res;

    }
};
