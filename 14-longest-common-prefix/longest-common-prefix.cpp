class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //create an empty string to store the result
        string prefix = "";
        //sort the list alphabetically since common prefix should be common to all the strings
        //we only need to find it between the first and last string
        sort(strs.begin(),strs.end());
        string first = strs[0], last = strs[strs.size()-1];
        //iterate through the smaller string between the first and the last string
        for (int i = 0;i<min(first.size(),last.size());i++){
            if(first[i]!=last[i]){
                //return immediately when one char is different
                return prefix;
            }
            //else append the common char
            prefix +=first[i];
        }
        return prefix;
    }
};