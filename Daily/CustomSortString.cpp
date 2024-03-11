//11.03.24
//append(size_t n, char c): Appends n copies of the character c to the end of the current string.
class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> mp;
        string ans="";
        for(auto &it:s){
            mp[it]++;
        }
        for(auto &it:order){
            if(mp.find(it)!=mp.end()){
                ans.append(mp[it],it);
                mp.erase(it);
            }
        }
        for(auto &it:mp){
            ans.append(it.second,it.first);
        }
        return ans;
    }
};
