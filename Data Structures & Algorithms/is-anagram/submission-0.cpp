class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if (s.size() != t.size()){
            return false;
        } 
        else{

            unordered_map<char, int> count;
            
            for (int i = 0; i < s.size(); ++i){
                count[s[i]]++;
            }
                
            
            for (int j=0; j < t.size(); ++j){
                if (count[t[j]] == 0){
                    return false;
                }

                count[t[j]]--;
            }

        }
        return true;

    }
};
