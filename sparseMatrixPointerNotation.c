#include<stdio.h>
#include<stdlib.h>
void sparseMatrix(int*,int,int,int);
int main()
{
    int r,c,i,j,size=0;
    int *matrix = 0;
    printf("Enter the rows of the matrix\n");
    scanf("%d",&r);
    printf("Enter the columns of the matrix\n");
    scanf("%d",&c);
    matrix=(int*)malloc((r*c)*sizeof(int));
    printf("Enter the elements in the array\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",(matrix+i*c+j));
            if(*(matrix+i*c+j)!=0)
            {
                size++;
            }
        }
    }
    printf("Your sparse matrix is----\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",*(matrix+i*c+j));
        }
        printf("\n");
    }
    if((3*size)<(r*c))
    {
        sparseMatrix(matrix,r,c,size);
    }
    else
    {
        printf("Triplet Represesntation need not be formed");
    }
    getch();
    return 0;

}
void sparseMatrix(int *p,int r,int c,int size)
{
    int *sparseMatrix=0;
    int k=1,i,j;
    sparseMatrix=(int*)malloc((size+1)*3*sizeof(int));
    *sparseMatrix = r;
    *(sparseMatrix+1) = c;
    *(sparseMatrix+2) = size;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(*(p+i*c+j)!=0)
            {
                *(sparseMatrix+k*3+0)=i;
                *(sparseMatrix+k*3+1)=j;
                *(sparseMatrix+k*3+2)=*(p+i*c+j);
                k++;
            }
        }
    }
    free(p);
    printf("\nThe triplet Representation of the sparse matrix is\n");
    for(i=0;i<size+1;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",*(sparseMatrix+i*3+j));
        }
        printf("\n");
    }
}
