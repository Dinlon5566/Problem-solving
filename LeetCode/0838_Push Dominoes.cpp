class Solution {
public:
    string pushDominoes(string dominoes) {

        int left=0,right;
        string result="";
        for(right=0;right<=dominoes.size();right++){
            if(right==dominoes.size()||dominoes[right]=='R'){
                right=0;
                break;
            }
            if(dominoes[right]=='L'){
                for(int i=0;i<right;i++){
                    result+='L';
                }
                left=right;
                break;
            }
        }
        for(right;right<dominoes.size();right++){
            if(dominoes[right]=='L'){
                for(left;left<=right;left++){
                    result+='L';
                }
            }else if(dominoes[right]=='R'){
                for(left;left<right;left++){
                    result+='.';
                }

                for(right;right<=dominoes.size();right++){
                    if(right==dominoes.size()||dominoes[right]=='R'){
                        for(left;left<right;left++){
                            result+='R';
                        }
                        if(right==dominoes.size()){
                            return result;
                        }
                    }
                    if(dominoes[right]=='L'){
                        int mid=(left+right)/2;
                        int dlt=right-left;
                        for(left;left<=right;left++){
                            result+=left<=mid?'R':'L';
                        }
                        if(dlt%2==0){
                            result[mid]='.';
                        }
                        break;
                    }
                }
            }
        }
        for(left;left<right;left++){
            result+='.';
        }
        return result;
    }
};
