class Solution{
public:
	// function to return sum of  1, 2, ... n
	long long seriesSum(long long n) {
	    long long sum;
	    sum = (n) * (n + 1) / 2;
	    return sum;
	}
};
