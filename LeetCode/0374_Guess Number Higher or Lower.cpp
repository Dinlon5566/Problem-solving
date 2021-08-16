class Solution {
public:
    int guessNumber(int n) {
        int left=1;
        int right=n;
        int mid=1;
        while(left<=right){
            mid=(right-left)/2+left;
            int result=guess(mid);
            if(result==0){
                return mid;
            }else if(result==-1){
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return mid;
    }
};
