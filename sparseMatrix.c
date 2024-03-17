#include<stdio.h>
void sparseMatrix(int*,int,int,int);

int main()
{
	int r,c,i,j;
	printf("Enter the number of rows and columns\n");
	scanf("%d%d",&r,&c);
	int matrix[10][10];
	int size =0;
	printf("Enter the matrix elements\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("matrix[%d][%d]=",i,j);
			scanf("%d",&matrix[i][j]);
			if(matrix[i][j]!=0)
			{
				size++;
			}
		}
	}
	printf("The original matrix is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	if((3*size)<(r*c))
	{
		sparseMatrix(&matrix[0][0],r,c,size);
	}
	else
	{
		printf("Sparse Matrix need not to be formed");
	}
	return 0;
	
}
	void sparseMatrix(int*p,int r,int c,int size)
	{
		int sparseMatrix[10][3];
		int k=1;
		sparseMatrix[0][0]=r;
		sparseMatrix[0][1]=c;
		sparseMatrix[0][2]=size;
		int i,j;
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(*(p+i*c+j)!=0)
				{
					sparseMatrix[k][0]=i;
					sparseMatrix[k][1]=j;
					sparseMatrix[k][2]=*(p+i*c+j);
					k++;
				}
			}
		
		}
		printf("The sparse matrix  is:\n");
		for(i=0;i<size+1;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d\t",sparseMatrix[i][j]);	
			}
			printf("\n");
		}
	}
	

