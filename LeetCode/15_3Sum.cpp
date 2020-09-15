class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
       vector<vector<int>> v;
    if(a.size()<3) return v;
    int n=a.size();
    sort(a.begin(),a.end());

    for(int i=0;i<n-2;i++)
    {
        int l=i+1,r=n-1;
        if(i>0 and a[i]==a[i-1])
            continue;
        
        while(l<r)
        {
            if(a[i]+a[l]+a[r]==0){
                v.push_back({a[i],a[l],a[r]});
            l++; r--;
            while(a[l]==a[l-1] and l<r) 
                l++;
            while(l<r and a[r]==a[r+1])
                r--;
            }
            else if(a[i]+a[l]+a[r]<0)
                l++;
            else
                r--;
        }
    }
    return v;
} 
    
};