// https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1

//Sort an array of 0,1,2

void sort012(int a[], int n)
    {
        map<int,int> result;
        for(int i = 0;i<n;i++){
            result[a[i]] += 1;
        }
        int i = 0;
        while (i<result[0]) {
            a[i] = 0;
            i++;
        }
        while(i<(result[0] + result[1])) {
            a[i] =1;
            i++;
        }
        while(i<n) {
            a[i]=2;
            i++;
        }
    }