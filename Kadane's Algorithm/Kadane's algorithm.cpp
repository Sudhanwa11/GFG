class solution {
    public: 
    long long maxSubarraySum (int arr[], int n) {
        long long mx = arr[0];
        long long currSum = 0;
        for (int i=0; i<n; i++) {
            currSum += arr[i];
            mx = max (currSum, mx);
            if (currSum <= 0) {
                currSum = 0;
            }
        }
        return mx;
    }
};
