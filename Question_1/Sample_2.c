// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");
/*
A binary gap within a positive integer N is any maximal sequence of consecutive 
zeros that is surrounded by ones at both ends in the binary representation of N.

For example, number 9 has binary representation 1001 and contains a binary gap of length 2. 
The number 529 has binary representation 1000010001 and contains two binary gaps: 
one of length 4 and one of length 3. The number 20 has binary representation 10100 and contains one binary gap of length 1. 
The number 15 has binary representation 1111 and has no binary gaps. 
The number 32 has binary representation 100000 and has no binary gaps.

Given a positive integer N, returns the length of its longest binary gap. 
The function should return 0 if N doesn't contain a binary gap



 @Author David Gakure
 
*/
int solution(int N)
{
     // write your code in C99 (gcc 6.2.0)
	int ar[100000];
 	int ar2[100000];
    int j;
	int size =0;  
    for(j=0;N>0;j++)
    {
        ar[j]=N%2;
        N=N/2;
    }
    size = j;
    for(j=j-1;j>=0;j--)
    {
        ar2[j] = ar[j];
    }
 	int open = 0;
 	int currentCount = 0;
 	int maxCount = 0;
 
 	int i =0;
   for(i=0;i<size;i++)
   {
	   	if (ar2[i] == 1)
	   	{
	   		if(currentCount>0)
		   {
			   	if(currentCount > maxCount)
				{
					maxCount = currentCount;  
				}
				currentCount = 0;
		   }
	   		open = 1;
		}
	   	else
	   	{
	   		{
	   		if(open == 1)
	   		{
	   			currentCount++;
			}
		}	
	} 	
	
 }return maxCount;
}