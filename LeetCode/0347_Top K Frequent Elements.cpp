
bool cmp(pair<int,int> &a,pair<int,int> &b)
{
    //reverse sort
    return a.second > b.second;
}
class Solution
{
public:

    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        map<int,int> numMap;
        for(int num:nums)
        {
            if(numMap.find(num)==numMap.end())
            {
                numMap[num]=0;
            }
            else
            {
                numMap[num]++;
            }
        }
        vector<pair<int,int>> numMap_dump;
        for(auto &p:numMap)
        {
            numMap_dump.push_back(p);
        }
        sort(numMap_dump.begin(),numMap_dump.end(),cmp);
        vector<int> result;
        for(int i=0;i<k;i++){
            result.push_back(numMap_dump[i].first);
        }
        return result;
    }
};
