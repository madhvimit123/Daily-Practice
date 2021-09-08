// https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1
// Union of two arrays
 int doUnion(int a[], int n, int b[], int m)  {
        //code here
        map<int,int> result;
        for(int i=0;i<n;i++) {
            result[a[i]] += 1;
        }
        for(int i=0;i<m;i++) {
            result[b[i]] += 1;
        }
        return result.size();
    }