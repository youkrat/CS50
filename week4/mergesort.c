#include <stdio.h>


void merge(int A[], int lo, int mid, int hi){
    int B[hi-lo];
    int i = lo;//start of left subarray
    int j = mid;//start of right subarray
    int k = 0;//starting index of array B

    while (i < mid && j < hi){
        if (A[i] <= A[j]){
            B[k++] = A[i++];
        }else{
            B[k++] = A[j++];
        }
    }
    while (i < mid ){
        B[k++] = A[i++];  
    }
    while( j < hi){
        B[k++] = A[j++];
    }
    for (k = 0; k < hi-lo; k++){
        A[lo + k] = B[k];
    }

}
void mergesort(int A[], int lo, int hi){


     if(hi-lo <= 1) return;

    int mid = lo+(hi-lo)/2;
    mergesort(A, lo, mid);
    mergesort(A, mid, hi);
    merge(A, lo, mid, hi);
}

int main(void){
    int A[] = {1,6,7,8,9,2};
    int n = sizeof(A)/sizeof(A[0]);
    printf("Original: ");
    for( int i = 0; i < n; i++){
        printf("%d ", A[i]);
    }
    mergesort(A, 0, n);
    printf("Sorted: ");
    for(int i = 0; i < n; i++){
        printf("%d ", A[i]);
    } printf("\n");
    return 0;
}