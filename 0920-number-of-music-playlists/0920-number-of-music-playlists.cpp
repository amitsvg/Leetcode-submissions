class Solution {
public:
    const int mod = 1e9 + 7;
    long dp[101][101];
    long solve(int countSong, int uniqueSong, int n, int goal, int k){
        if(countSong ==  goal){
            if(uniqueSong == n){
                return 1;
            }
            return 0;
        }
        if(dp[countSong][uniqueSong] != -1){
            return dp[countSong][uniqueSong];
        }
        long result = 0;
        // option 1 play a unique song
        if(uniqueSong < n)
        result += (n-uniqueSong)*(solve(countSong+1, uniqueSong+1, n, goal, k));

        // option 2 replay a song
        if(uniqueSong > k)
        result += (uniqueSong-k)*(solve(countSong+1, uniqueSong, n, goal, k));
        return dp[countSong][uniqueSong] = result%mod;
    }
    int numMusicPlaylists(int n, int goal, int k) {
        memset(dp, -1, sizeof(dp));
        return solve(0, 0, n, goal, k);
    }
};