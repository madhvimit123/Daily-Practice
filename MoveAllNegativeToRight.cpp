//https://practice.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1

// Move all negative elements to end

void segregateElements(int arr[],int n)
    {
        int result[n],j = 0;
        for(int i = 0; i < n;i++) {
            if(arr[i] >=0) {
                result[j] =arr[i];
                j++;
            }
        }
        for(int i = 0; i < n;i++) {
            if(arr[i] < 0 && j < n) {
                result[j] =arr[i];
                j++;
            }
        }
        for(int i = 0; i < n;i++) {
            arr[i] = result[i];
        }
    }