class Solution {
public:
    bool check(string s,int i,int j){
    if(i>j) return true;
    if(s[i]!=s[j]) return false;
     else return check(s,i+1,j-1);
}
    bool isPalindrome(int x) {
        string str=to_string(x);
        return check(str,0,str.length()-1);
    }
};