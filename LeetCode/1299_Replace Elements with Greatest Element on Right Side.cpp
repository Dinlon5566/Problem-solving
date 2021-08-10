class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            int maxLoc=i;
            arr[i]=-1;
            for(int j=i+1;j<arr.size();j++){
                maxLoc=arr[maxLoc]>arr[j]?maxLoc:j;
            }
            arr[i]=arr[maxLoc];
        }
        return arr;
    }
};
