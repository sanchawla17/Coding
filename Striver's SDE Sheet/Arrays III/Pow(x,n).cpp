//Brute- multiply n times , if negative divide 1 by ans
//Optimal- Maths opening power
class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
        long long nn=n;
        double ans=1;
        if(n<0) nn*=-1;
        while(nn){
            if(nn%2==1){
                ans*=x;
                nn--;
            }else{
                x=x*x;
                nn/=2;
            }
        }
        if(n<0) ans= (double)(1)/(double)(ans);
        return ans;
    }
};
