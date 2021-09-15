// https://practice.geeksforgeeks.org/problems/number-of-paths0926/1/
// Number of Paths using Combination

long long numberOfPaths(int m,int n)
{
    long long up,down1,down2;
    up = 1;
    down1 = 1;
    down2 = 1;
    for(int i = 1;i<=(m+n-2);i++) {
        up *= i;
    }
    for(int i =1;i<=(m-1);i++) {
        down1 *= i;
    }
    for(int i =1;i<=(n-1);i++) {
        down2 *= i;
    }
    return (up/(down1*down2));
}