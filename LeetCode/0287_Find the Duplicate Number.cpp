
class Solution {
public:

    int findDuplicate(vector<int>& nums) {
        int loca=0;
        int locb=0;
        do{
           loca=nums[loca];
           locb=nums[nums[locb]];
        }while(loca!=locb);
        loca=0;
        while(loca!=locb){
            loca=nums[loca];
            locb=nums[locb];
        }
        return loca;

    }
};

