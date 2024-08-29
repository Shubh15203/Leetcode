class Solution {
public:
    int alternateDigitSum(int n) {
        int k=n,a,len=0;
        while(k!=0){
            a=k%10;
            k/=10;
            len++;
        }
        int flag;
        if(len%2==1){
            flag=1;
        }
        else flag=0;
        int sum=0;
        while(n!=0){
            a=n%10;
            if(flag==1){
                sum+=a;
                flag=0;
            }
            else{
                sum-=a;
                flag=1;
            }
            n/=10;
        }
        return sum;
    }
};