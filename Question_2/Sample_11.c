// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int q =0;
    
    for(q=0;q<N;q++)
    {
        A[q] = A[q] ^ A[q-1];
    }
    return A[N-1];
}