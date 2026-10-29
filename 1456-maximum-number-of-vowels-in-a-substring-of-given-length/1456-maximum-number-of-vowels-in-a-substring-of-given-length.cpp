class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.size();
        int  sum=0;
        int vowel=0;
        int mxvowel=INT_MIN;
        for(int i=0;i<k;i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') vowel++;
        }
        mxvowel=max(vowel,mxvowel);
        int i=0;
        int j=k;
        while(j<n){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') vowel--;
            if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u') vowel++;
            mxvowel=max(vowel,mxvowel);
            i++;
            j++;
        }
        return mxvowel;
    }
};