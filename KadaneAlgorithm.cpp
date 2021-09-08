// https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1
// Kadane's Algorithm

long long maxSubarraySum(int arr[], int n){
        long long maxTillNow = -INFINITY;
        long long maxHere = 0;
        for(int i=0;i<n;i++) {
            maxHere += arr[i];
            if(maxHere > maxTillNow) maxTillNow = maxHere;
            if(maxHere < 0) maxHere = 0;
        }
        return maxTillNow;
    }
