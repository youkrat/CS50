/* COMP 211, Wesleyan University
 *
 * Recursive and iterative mergesorts
 */

#include <stdio.h>

void merge(int A[], int lo, int mid, int hi)
{
    int B[hi-lo];
    int i = lo; // counts from lo to mid
    int j = mid; // counts from mid to hi
    int k = 0; // counts from 0 to hi

    while (i<mid && j<hi) {
        if (A[i] <= A[j]) {
            B[k++] = A[i++];
        } else {
            B[k++] = A[j++];
        }
    }

    // Copy remaining elements in A to B
    while (i<mid) {
        B[k++] = A[i++];
    }
    while (j<hi) {
        B[k++] = A[j++];
    }
    // Copy all elements in B back to A
    for (k=0; k < hi-lo; k++) {
        A[lo+k] = B[k];
    }
}

/*
 * Divide array into 2 halves.
 * Recursively sort each half.
 * Merge 2 halves.
 */
void mergesort(int A[], int lo, int hi)
{
    printf("lo=%d hi=%d: A1=[", lo, hi);
    for (int i=0; i < hi; i++) {
        printf("%d ", A[i]);
    }
    printf("]\n");

    if (hi - lo <= 1) return;

    int mid = lo + (hi-lo)/2;
    mergesort(A, lo, mid);
    mergesort(A, mid, hi);
    merge(A, lo, mid, hi);

    printf("lo=%d hi=%d: A1=[", lo, hi);
    for (int i=0; i<4; i++) {
        printf("%d ", A[i]);
    }
    printf("]\n");


}

/*
 * Look at len 1 subarrays, merge adjacent pairs in sorted order
 * Look at len 2 subarrays, merge adjacent pairs in sorted order
 * Look at len 4 subarrays, merge adjacent pairs in sorted order
 * ...
 */
void mergesort_seq(int A[], int n) {

    if (n == 0) return;

    int len = 1; // Length of subarrays to merge
    while (len < n) {
        for (int lo=0; lo<n; lo+=2*len) {
           int hi = lo+2*len;
           if (hi > n) hi = n;
           merge(A, lo, lo+len, hi);
        }
        len *= 2;
    }
}

int main() {

    int j=0;
    printf("j++ = %d, j++=%d,++j=%d\n", j++, j++, ++j);

    /*
    int A[] = {1, 7, 3,4,21,5,1,11,4,2,2,1};
    int n = 12;
    */

    int A[] = {1, 7, 3,4,21,5,1,11,4,2,2,1};
    int n = sizeof(A)/sizeof(A[0]);


    printf("Original: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    mergesort(A, 0, n);
    //mergesort_seq(A, n);

    printf("Sorted: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}