class Solution {
public:
    bool isPowerOfTwo(int n) {
       if(n%2!=0 && n>2)return false;

        if(n==1 ) return true;

        if(n==0 || n<0)return false;
      

       while(n>=2){
          if(n%2!=0){
            return false;
          }
          else{
            n = n/2;
          }
       }
       return true;
    }
};