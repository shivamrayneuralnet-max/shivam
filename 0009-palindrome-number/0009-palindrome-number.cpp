class Solution {
public:
    bool Palindrome(string s,int i,int j){
    if(i>j) return true;
    if(s[i]!=s[j]) return false;
     else return Palindrome(s,i+1,j-1);
}
    bool isPalindrome(int x) {
        string str=to_string(x);
        return Palindrome(str,0,str.length()-1);
    }
};