class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int altitudes[n+1];
        altitudes[0]=0;
        for(int i=1;i<n+1;i++){
            altitudes[i]=altitudes[i-1]+gain[i-1];
        }
        int mx=altitudes[0];
        for(int i=0;i<n+1;i++){
            if(altitudes[i]>mx) mx=altitudes[i];
        }
        return mx;
    }
};