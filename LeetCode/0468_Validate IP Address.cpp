class Solution {
public:
    string validIPAddress(string IP) {
        return isIPv4(IP)?"IPv4":isIPv6(IP)?"IPv6":"Neither";
    }
    bool isIPv4(string str){
        if(count(str.begin(),str.end(),'.')!=3){
            return 0;
        }
        vector<string> parts=spiltIP(str,'.');
        if(parts.size()!=4){
            return 0;
        }
        for(string part:parts){
            if(part.empty()||part.size()>3||part.size()>1&&part[0]=='0'){
                return 0;
            }
            for(char c:part){
                if(!isdigit(c)){
                    return 0;
                }
            }
            if(stoi(part)>255){
                return 0;
            }
        }
        return 1;
    }

    bool isIPv6(string str){
        if(count(str.begin(),str.end(),':')!=7){
            return 0;
        }
        vector<string> parts=spiltIP(str,':');
        if(parts.size()!=8){
            return 0;
        }
        for(string part:parts){
            if(part.empty()||part.size()>4){
                return 0;
            }
            for(char c:part){
                if(!((toupper(c)>='A'&&toupper(c)<='F')||isdigit(c))){
                    return 0;
                }
            }
        }

        return 1;
    }

    vector<string> spiltIP(string str,char c){
        vector<string> result;
        string part;
        istringstream in(str);
        while(getline(in,part,c))
            result.push_back(part);
        return result;
    }
};
