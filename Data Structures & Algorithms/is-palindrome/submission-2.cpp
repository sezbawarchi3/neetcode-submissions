class Solution {
public:
    bool isAlph(char c){
        return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <='z') || (c >= '0' && c <= '9');
    }

    bool isPalindrome(string s) {
        string str;
        int i{0};
        while(i < s.length()){
            if(isAlph(s[i])) str += tolower(s[i++]);
            else i++;
        }
        string rev = str;
        reverse(str.begin(), str.end());
        return str == rev;
    }
};
