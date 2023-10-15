class Solution {
  const int MOD = pow(10, 9) + 7;
  vector<vector<int>> memo;
  int r(int steps, int idx, int &l) {
    if (idx < 0) return 0;

    if (idx >= l) return 0;

    if (steps < 0) return 0;

    if (idx > steps) return 0;

    if (idx == steps) return 1;

    if (memo[steps][idx] >= 0) return memo[steps][idx];

    if (steps == 0) {
      if (idx != 0) return 0;

      return 1;
    }

    long long int curRes = r(steps - 1, idx, l) % MOD;
    if (idx > 0) curRes += r(steps - 1, idx - 1, l) % MOD;
    if (idx < (l-1)) curRes += r(steps - 1, idx + 1, l) % MOD;
    memo[steps][idx] = curRes % MOD;
    return memo[steps][idx];
  }

 public:
  int numWays(int steps, int arrLen) {
    // recursion
    arrLen = min(arrLen,steps); // wtf!
    memo.resize(steps + 1, vector<int>(arrLen + 1, -1));
    return r(steps, 0, arrLen);
  }
};