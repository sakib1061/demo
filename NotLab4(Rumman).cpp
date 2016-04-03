#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,m,n,a,b,c,det;
    printf("Number of columns : ");
    scanf("%d",&m);
    printf("Number of rows : ");
    scanf("%d",&n);
    int A[n][m],B[n][m];
    float C[n][m];
    printf("Value of matrix A : \n");
    for(i=0;i<n;i++)
    {
       for(j=0;j<m;j++)
       {
           scanf("%d",&A[i][j]);
       }
    }
    printf("\n\nMatrix A : \n\n");
    for(i=0;i<n;i++)
    {
       for(j=0;j<m;j++)
       {
           printf("%d\t",A[i][j]);
       }
       printf("\n");
    }
    det = A[0][0]*((A[1][1]*A[2][2]) - (A[2][1]*A[1][2]))-
          A[0][1]*(A[1][0]*A[2][2] - A[2][0]*A[1][2]) +
          A[0][2]*(A[1][0]*A[2][1] - A[2][0]*A[1][1]);
    printf("\n\nThe Determinant of matrix A : %d\n\n",det);
    printf("\n\nThe Transpose of matrix A : \n\n");
    for(i=0;i<n;i++)
    {
       for(j=0;j<m;j++)
       {
           printf("%d\t",A[j][i]);
       }
       printf("\n");
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==0&&j==0)
            {
                B[i][j]= (A[1][1]*A[2][2]) - (A[2][1]*A[1][2]);
            }
            else if(i==0&&j==1)
            {
                B[i][j] = -1*(A[1][0]*A[2][2] - A[2][0]*A[1][2]);
            }
            else if(i==0&&j==2)
            {
                B[i][j] = A[1][0]*A[2][1] - A[2][0]*A[1][1];
            }
            else if(i==1&&j==0)
            {
                B[i][j] = -1*(A[0][1]*A[2][2] - A[0][2]*A[2][1]);
            }
            else if(i==1&&j==1)
            {
                B[i][j] = (A[0][0]*A[2][2] - A[0][2]*A[2][0]);
            }
            else if(i==1&&j==2)
            {
                B[i][j] = -1*(A[0][0]*A[2][1] - A[0][1]*A[2][0]);
            }
            else if(i==2&&j==0)
            {
                B[i][j] = (A[0][1]*A[1][2] - A[0][2]*A[1][1]);
            }
            else if(i==2&&j==1)
            {
                B[i][j] = -1*(A[0][0]*A[1][2] - A[0][2]*A[1][0]);
            }
            else if(i==2&&j==2)
            {
                B[i][j] = (A[0][0]*A[1][1] - A[0][1]*A[1][0]);
            }
        }
    }
    printf("\n\nThe Adjoint Of Matrix A: \n\n");
    for(i=0;i<n;i++)
    {
       for(j=0;j<m;j++)
       {
           printf("%d\t",B[j][i]);
       }
       printf("\n");
    }

    for(i=0;i<n;i++)
    {
       for(j=0;j<m;j++)
       {
           C[i][j]=(float)B[j][i]/det;
       }
    }

    printf("\n\nThe Inverse Of Matrix A : \n\n");

    for(i=0;i<n;i++)
    {
       for(j=0;j<m;j++)
       {
           printf("%0.4f\t",C[i][j]);
       }
       printf("\n");
    }
}
