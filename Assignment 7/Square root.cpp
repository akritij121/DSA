class Solution {
public:
    int mySqrt(int x) {
        // Initializing variables 
        long long y=0,i=3,cnt=0;
    
        //loop until y is greater than x
        while(x>y){
            y+=i;
            i+=2;
            cnt++;
        }

    // return cnt as the square root of x
    return cnt;
    }
}
