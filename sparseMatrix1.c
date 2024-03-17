#include<stdio.h>

int main()
{
	int i,j,r,c;
    int matrix[10][10];
    printf("Enter the rows of the first matrix:---");
    scanf("%d",&r);
    printf("Enter the columns of the second matrix:----");
    scanf("%d",&c);
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		scanf("%d",&matrix[i][j]);
		}
	}
    int size = 0;
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            if (matrix[i][j] != 0)
                size++;
 
    printf("Ther original matrix is:--\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
        	printf("%d\t",matrix[i][j]);	
		}
        	
        printf("\n");	
	}
 
	
	int sparseMatrix[10][3];
    int k = 1;
    sparseMatrix[0][0] = r;
    sparseMatrix[0][1] = c;
    sparseMatrix[0][2] = size;
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            if (matrix[i][j] != 0)
            {
                sparseMatrix[k][0] = i;
                sparseMatrix[k][1] = j;
                sparseMatrix[k][2] = matrix[i][j];
                k++;
            }
	printf("The triplet representation is:\n");
    for (i=0; i<size+1; i++)
    {
        for (j=0; j<3; j++)
            printf("%d\t", sparseMatrix[i][j]);
 
        printf("\n");
    }
    return 0;
}
