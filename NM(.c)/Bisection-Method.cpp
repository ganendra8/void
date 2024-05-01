#include <stdio.h>  
#include <conio.h>  
  
// create a function  
double bisect ( double num)  
{  
    // it returns the value of the function  
    return ( pow (num, 3) + 3 * num - 5);  
}  
  
int main ()  
{  
    printf ( " \n Display the real roots of the given equation using the Bisection method: ");  
    printf ( " \n x ^ 3 + 3 * x - 5 = 0 \n ");  
    double x0, x1;  
      
    printf ( " \n Enter the first approximation of the root: ");  
    scanf (" %lf", &x0);  
      
      
    printf ( " \n Enter the second approximation of the root: ");  
    scanf (" %lf", &x1);  
      
    int iterate;  
    printf (" \n Input the number of iteration you want to perform: ");  
    scanf (" %d", &iterate);  
      
      
    int count = 1;  
    double l1 = x0;  
    double l2 = x1;  
    double r, f1, f2, f3;  
      
    // now check whether the initial approximation are the real root  
    if (bisect (l1) == 0) // it is a root  
    {  
        r = l1;  
    }  
    else if ( bisect (l2) == 0)  
    {  
        r = l2;  
    }  
      
    // if the above two values are not the root of the given equation  
    else  
    {  
        while (count <= iterate) // here count is initialized with 1  
        {  
            f1 = bisect (l1);  
            r = (l1 + l2) / 2.0; // get the mid value of the interval l1 and l2  
            f2 = bisect (r);  
            f3 = bisect (l2);  
              
            // check f2 is equal to 0  
            if (f2 == 0)  
            {  
                r = f2;  
                break; // break the execution from the while loop statement  
            }  
              
            printf (" \n The root after %d iterations is %lf. \n", count, r);  
              
            // check multiplication of f1 * f2 not less than 0  
            if ( f1 * f2 < 0)  
            {  
                l2 = r;  
            }  
            else if (f2 * f3 < 0)  
            {  
                l1 = r;  
            }  
            count++;  
        }  
    }     
    // return final value after mentioned the iteration  
    printf (" \n The approximation of the root is: %lf \n ", r);      
    return 0;  
}    
