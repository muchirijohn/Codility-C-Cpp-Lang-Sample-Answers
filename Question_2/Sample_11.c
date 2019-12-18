// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");
/*
A non-empty array A consisting of N integers is given. 
The array contains an odd number of elements, 
and each element of the array can be paired with another element that has the same value, 
except for one element that is left unpaired.

given an array A consisting of N integers fulfilling the above conditions, returns the value of the unpaired element.

For example, given array A such that:

  A[0] = 9  A[1] = 3  A[2] = 9
  A[3] = 3  A[4] = 9  A[5] = 7
  A[6] = 9
the function should return 7

Author David Gakure

*/





int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int q =0;
    
    for(q=0;q<N;q++)
    {
        A[q] = A[q] ^ A[q-1];
    }
    return A[N-1];
}