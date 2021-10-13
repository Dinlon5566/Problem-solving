class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> pool;
        map<int,int>::iterator itr;
        for(int i:nums){
            itr=pool.find(i);
            if(itr==pool.end()){
                pool.insert(pair<int,int>(i,1));
                continue;
            }
            pool[i]++;
        }
        int maxloc,maxtime=0;
        for(itr=pool.begin();itr!=pool.end();itr++){
            if(itr->second>maxtime){
                maxtime=itr->second;
                maxloc=itr->first;
            }
        }
        return maxloc;
    }
};
