#include <stdio.h>
void readmat(int row,int col,int mat[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("Enter ele [%d][%d] : ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }

}

void dismat(int row,int col,int mat[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d  ",mat[i][j]);
        }
        printf("\n");
    }

}

int mulmat(int r1,int c1,int mat[r1][c1],int r2,int c2,int mat2[r2][c2],int resmat[r1][c2]){
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            resmat[i][j] = 0;
            for(int k=0;k<c1;k++){
                resmat[i][j] += mat[i][k] * mat2[k][j];
            }
        }
    }

}

int main() {
    int r1,c1,r2,c2;
    printf("Enter row1 , col1 : ");
    scanf("%d %d",&r1,&c1);
    printf("Enter row2 , col2 : ");
    scanf("%d %d",&r2,&c2);

    if(c1 != r2){
        printf("Cant");
        return 1;
    }

    int mat1[r1][c1],mat2[r2][c2],resmat[r1][c2];

    printf("Enter ele for mat1 : \n");
    readmat(r1,c1,mat1);

    printf("Enter ele for mat2 : \n");
    readmat(r2,c2,mat2);

    mulmat(r1,c1,mat1,r2,c2,mat2,resmat);

    printf("The result : \n");
    dismat(r1,c2,resmat);

    return 0;
}

