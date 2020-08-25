//Question: Making a hollow rhombus using C programming

//Solution:

#include<stdio.h>
// Function for Rhombus 
void hollowRhombus(int rows) 
{ 
    int i, j; 
    for (i=1; i<=rows; i++) 
    { 
        // Print trailing spaces 
        for (j=1; j<=rows - i; j++) 
            printf(" "); 
              
        // Print stars after spaces 
        // Print stars for each solid rows 
        if (i==1 || i==rows) 
            for (j=1; j<=rows; j++) 
                printf("*"); 
                  
        // stars for hollow rows 
        else
            for (j=1; j<=rows; j++) 
                if (j==1 || j==rows) 
                    printf("*");   
                else
                    printf(" "); 
        // Move to the next line/row 
        printf("\n"); 
    } 
} 
int main() 
{ 
    int rows;
    printf("\nEnter the no.of rows:");
    scanf("%d",&rows); 
    printf("\nHollow rhombus:\n");
    hollowRhombus (rows); 
    return 0; 
}
