#include <stdio.h>
#include <stdbool.h>


void merge_sort(int a[], int length);
void merge_sort_recursion(int a[], int l, int r);
void merge_sorted_arrays(int a[], int l, int m, int r);


int main(){
    int array[] = {9,4,8,1,7,0,3,2,5,6};
    int length = sizeof(array)/sizeof(array[0]);
    merge_sort(array, length);

    for (int i = 0; i < length; i++){
        printf("%d", array[i]);
    } printf("\n");
    return 0;
}

void merge_sort(int a[], int length){

    merge_sort_recursion(a, 0, length-1);    

}
void merge_sort_recursion(int a[], int l, int r){
    if (l < r){
    int m = l + (r - l)/2;
    merge_sort_recursion(a, l, m);
    merge_sort_recursion(a, m+1, r);
    merge_sorted_arrays(a, l, m, r);
    }
}


void merge_sorted_arrays(int A[], int l, int m, int r){
   int B[r-l];
    int i = l;//start of left subarray
    int j = m;//start of right subarray
    int k = 0;//starting index of array B

    while (i < m && j < r){
        if (A[i] <= A[j]){
            B[k++] = A[i++];
        }else{
            B[k++] = A[j++];
        }
    }
    while (i < m ){
        B[k++] = A[i++];  
    }
    while( j < r){
        B[k++] = A[j++];
    }
    for (k = 0; k < r - l; k++){
        A[l + k] = B[k];
    }

}
