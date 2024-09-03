#include <stdio.h>
int main()
{
    int r1,c1,r2,c2;
    printf("r1 c1:");
    scanf("%d %d",&r1,&c1);
    printf("r2 c2:");
    scanf("%d %d",&r2,&c2);

    if(r1 != c2){
        printf("cant mul");
        return 1;
    }

    int mat1[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("mat1(%d,%d):",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }

    int mat2[r2][c2];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            printf("mat2(%d,%d):",i,j);
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("multi : \n");
    int pro[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            pro[i][j] = 0;
            for(int k=0;k<c1;k++){
                pro[i][j] += mat1[i][k] * mat2[k][j];
            }
            printf("%d ",pro[i][j]);
        }
        printf("\n");
        printf("\n");
    }


    return 0;
}


