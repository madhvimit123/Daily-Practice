// https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1#

pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long,long> result;
    result.first = a[0];
    result.second = a[0];
    for(int i =1;i<n;i++){
        if(result.first > a[i]) result.first = a[i];
        if(result.second<a[i]) result.second = a[i];
    }
    return result;
}