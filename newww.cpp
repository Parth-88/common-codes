#include <iostream>
using namespace std;
#include<bits/stdc++.h>


int linear(int arr[],int t,int p){
   
        if (t==arr[p]){
            return p;
         }
         else{
            return linear(arr,t,p+1);
         }
}

int binary(int arr[],int t,int s,int l){
    int mid = (s+l)/2;
    
    if (l<s){
        return -1;
    }
    if (arr[mid] == t){ 
        return mid;
    }
    if(arr[mid] > t){
        return binary(arr,t,s,(mid-1));
    }
    
    if(arr[mid] < t){
        return binary(arr,t,(mid+1),l);
    }
    return 0;
}

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr [], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main ()
{
    int arr[] = {5,6,7,1,4,8};
    int t = 7;
  
    int n = sizeof(arr) / sizeof(arr[0]);
 
    insertionSort(arr, n);
    printArray(arr, n);

    int a = linear(arr,t,1);
   cout<<"LINEAR "<<a<<endl;

    int b = binary(arr,t,0,n );
    cout <<"BINARY "<<b ;

return 0;
}

