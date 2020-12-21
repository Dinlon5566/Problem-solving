class Solution {
public
    int numTeams(vectorint& rating) {
        int ans=0;
        for(int i=0;irating.size()-2;i++){
            for(int j=i+1;jrating.size()-1;j++){
                if(rating[i]rating[j]){
                    for(int k=j+1;krating.size();k++){
                        if(rating[j]rating[k]){
                            ans++;
                        }
                    }
                }else if(rating[i]rating[j]){
                    for(int k=j+1;krating.size();k++){
                        if(rating[j]rating[k]){
                            ans++;
                        }
                    }
                }
            }
        }
        return ans;
    }
};
