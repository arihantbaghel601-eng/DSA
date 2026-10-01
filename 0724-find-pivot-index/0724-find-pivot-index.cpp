class Solution {
public:
    int pivotIndex(vector<int>& a) {
      int sum = 0;
      int left = 0;

      for (int x : a){
      sum += x;
      }
      for(int i = 0; i < a.size(); i++) {
      int right = sum - a[i] -left;
      if(left==right)
      return i;
      left += a[i];
      }
      return -1;  
    }
};