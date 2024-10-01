#include <stdio.h>/* some basic func like pring */
#include <math.h>
#include <string.h>

int main(void) { /*void is that function is not accept anything as input */

// single line comments
/* multiline
 * comments */

/* Declare variables */
   int i,inum,tmp,numdigits; // compact declaration
   float fnum;
   char binnum[60]; //


/* Intialise 4-byte integer */
   inum = 33554431;
/* Convert to 4-byte float | from int to float */
   fnum = (float) inum; 
   // last bit is rounded for 2


/* Convert to binary number (string)*/
   i = 0; tmp = inum;
   while (tmp > 0) {
     sprintf(&binnum[i],"%1d",tmp%2);
     tmp = tmp/2;
     i++;
   }

/* Terminate the string */
   binnum[i] = '\0';

/* Reverse the String binnum*/
   int length, mid, j;
   char aux;
   length = strlen(binnum);
   mid = length/2;
   for(i = 0; i < mid; i++) {
       j = length-i-1;
       aux = binnum[i];
       binnum[i] = binnum[j];
       binnum[j] = aux;
    }

/* TODO: Complete the expression */
/*   numdigits = ceil(...);
   printf("The number of digits is %d\n",numdigits);
*/
   // log(fnum) = log_e(fnum)/log_e(2)
   numdigits = (int)(ln(fnum)/ln(2));
   //1111111111111111111111111
   printf("inum=%d,  fnum=%f, inum in binary=%s\n",inum,fnum,binnum);

   return 0;
}
