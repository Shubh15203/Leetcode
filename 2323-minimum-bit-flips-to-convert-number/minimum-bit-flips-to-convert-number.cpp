class Solution {
public:
    int minBitFlips(int start, int goal) {
        int x=start^goal,count=0;
        while(x!=0){
            if((x%2)==1) count++;
            x/=2;
        }
        return count;
    }
};