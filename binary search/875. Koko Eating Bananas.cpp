class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long l = 1,r = 1LL * *max_element(piles.begin(),piles.end()) ,mid;
        while(l <= r){
            mid = l + (r - l)/2;
            if(enoughHours(piles,mid,h)) r = mid - 1;
            else l = mid + 1;
        }
        return l;
    }
    bool enoughHours(vector<int>& piles,int bananaPerHour,int h){
        long long timeTaken = 0;
        for(auto b:piles){
            timeTaken += ceil(b/(double)bananaPerHour); 
        }
        return timeTaken <= h ;
    }
};
