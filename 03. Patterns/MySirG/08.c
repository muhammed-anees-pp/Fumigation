/*

   1
  121
 12321
1234321

*/

#include <stdio.h>
int main(){
	int i,j,row=4,k;
	for(i=1;i<=row;i++){
		k=1;
		for(j=1;j<=2*row-1;j++){
			if(j>=row+1-i && j<=row-1+i){
				printf("%d",k);
				j<row?k++:k--;
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}

/*
Working:
i	j	j(d)		j>=row+1-i && j<row-1+i
1	4	j>=4 && j<=4
2	345	j>=3 && j<=5
3	23456	j>=2 && j<=6
4	1234567	j>=1 && j<=7

Iteration 1 (i=1)
j=4

Iteration 2 (i=2)
j=345

Iteration 3 (i=3)
j=23456

Iteration 4 (i=4)
j=1234567


Note:
The condition j<row?k++:k--; is a ternary operation within the nested loop. Here's a breakdown of how it works in the program:

Structure of the Ternary Operation:
j<row: This is the condition being checked. If j (the current column index) is less than row (which is set to 4), the operation before the colon (k++) will be executed. If not, the operation after the colon (k--) will be executed.
What it Does:
k++: This increments the value of k by 1.
k--: This decrements the value of k by 1.
Explanation in Context:
The loop iterates over the columns (j), and the program prints numbers in the range determined by the condition if(j>=row+1-i && j<=row-1+i). Within this range, the value of k is printed and either incremented or decremented based on the position of j.

The ternary condition j<row?k++:k--; ensures that:

When the column index j is less than row (i.e., to the left of the middle column of the pyramid), the value of k is incremented (k++).
When j is greater than or equal to row (i.e., to the right of the middle column), the value of k is decremented (k--).
This results in a pattern where the numbers increase towards the middle of the pyramid and then decrease symmetrically after crossing the middle column.

Example with row=4:
For the first row:

The condition j>=row+1-i && j<=row-1+i translates to j>=4+1-1 && j<=4-1+1, i.e., j>=4 && j<=4. Hence, k=1 is printed in the middle column.
For the second row:

The condition becomes j>=4+1-2 && j<=4-1+2, i.e., j>=3 && j<=5. So, k is incremented from 1 to 2 at column j=3, reaches the middle column j=4, and then decrements back to 1 for j=5.
*/
 