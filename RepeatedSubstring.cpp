class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
        for(int i = 1; i <= s.length(); i++) {

            string temp = s.substr(0,i);
            string temp1 = "";
            bool flag = false;
            
            for(int j = i; j < s.length(); j += i) {

                temp1 = s.substr(j,i);
                
                if(temp != temp1) {
                    flag = true;
                    break;
                }

            }

            if(!flag && temp1.length() != 0) 
                return true;
            
        }

        return false;
    }
};