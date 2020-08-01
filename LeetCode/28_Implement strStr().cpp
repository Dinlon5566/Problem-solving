class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle == "")
            return 0;
        if(needle == haystack)
            return 0;
        if(needle.size() > haystack.size())
            return -1;
        int t;
        // buscando el primer caracter coincidente
        for(int i = 0, j = 0; i < haystack.size(); i++) {
            // encontrado
            if(haystack[i] == needle[j]) {
                t = i;
                while(j < needle.size()) {
                    if(i > haystack.size())
                        return -1;
                    if(haystack[i] != needle[j]) {
                        // si la longitud en la cadena a buscar es menor a needle.size()
                        // no se encontrará needle
                        if(haystack.size() - t < needle.size())
                            return -1;
                        j = 0;
                        i = t;
                        break;
                    }
                    j++;
                    i++;
                }
                if(j != 0)
                    return t;
            }
        }
        
        return -1;
    }
};