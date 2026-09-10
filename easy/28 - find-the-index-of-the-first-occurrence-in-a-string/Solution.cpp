class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle == ""){
            return 0;
        }
        if (needle.size() > haystack.size()){
            return -1;
        }
        int i=0;
        int j=0;
        while(i < haystack.size() - needle.size() + 1){
            int start = i;
            while(i < haystack.size() && j < needle.size() && haystack[i] == needle[j]){
                i++;
                j++;
            }
            if(j == needle.size()){
                return start;
            }
            i=start+1;
            j=0;
        }
        return -1;
    }
};