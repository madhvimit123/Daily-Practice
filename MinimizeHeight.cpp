// https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1#
// Minimize the Heights II

int getMinDiff(int arr[], int n, int k) {
        // code here
        int modifiedArr[n];
        for(int i = 0; i < n; i++) {
            if(arr[i]-k > 0) modifiedArr[i] = arr[i]-k;
            else modifiedArr[i] = arr[i] + k;
        }
        return (*max_element(modifiedArr, modifiedArr+n) - *min_element(modifiedArr, modifiedArr+n));
    }