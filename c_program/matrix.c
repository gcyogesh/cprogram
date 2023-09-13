// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int i, j, k, q, w, e, r, a[10][10], b[10][10], prod[10][10];
//     printf("enter the no of rows and columns for 1 matrix(must be less than 10)\n");
//     scanf("%d%d", &q, &w);
//     printf("enter the no of rows and columns for 2 matrix(must be less than 10)\n");
//     scanf("%d%d", &e, &r);
//     if (w != e)
//     {
//         printf("the matrix can not be multiplied");
//     }
//     else
//     {

//         for (i = 0; i <q; i++)
//         {
//             for (j = 0; j < w; j++)
//             {
//                 printf("entet the %d x %d item of matrix one: ", i, j);
// 				 scanf("%d", &a[i][j]);
//             }
//         }
//         for (i = 0; i < e; i++)
//         {
//             for (j = 0; j <r ; j++)
//             {
//                 printf("entet the %d x %d item of matrix two: ", i, j);
//                 scanf("%d", &b[i][j]);
//             }
//         }

//         for (i = 0; i <q; i++)
//         {
//             for (j = 0; j <r ; j++)
//             {
//                 prod[i][j] =0;
//                 for (k = 0; k < w; k++)
//                 {
//                     prod[i][j] += a[i][k] * b[k][j];
//                 }
//             }
// 			   }
//         printf("The product is \n");
//         for (i = 0; i <q ; i++)
//         {
//             for (j = 0; j <r; j++)
//             {
//                 printf("%d\t", prod[i][j]);
//             }
//             printf("\n");
//         }
//     }
//     ;
// }



// write a c program to add sum of all elements given by user in three into three matrix(3*3) 
// #include <stdio.h>
// int main()
// {
//     int i, j, q, w, sum, a[10][10];
//     printf("enter the no of rows and columns for matrix(must be less than 10)\n");
//     scanf("%d%d", &q, &w);

//         for (i = 0; i < q; i++)
//         {
//             for (j = 0; j < w; j++)
//             {
//                 printf("enter the %d x %d item of matrix: ", i, j);
//                 scanf("%d", &a[i][j]);
//             }
//         }
//         for (i = 0; i < q; i++)
//         {
//             for (j = 0; j < w; j++)
//             {
//                 if(i==j){
//                     sum += a[i][i];
//                 }
//             }
//         }
//         printf("The sum is %d",sum);
//     return 0;
// }


// #include <stdio.h>
//  int main(){
//     int a[3][3],i, j, sum=0;
//     printf("Enter the element of the matrix:\n");
//     for (int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//         scanf("%d",&a[i][j]);
//         printf("\n");
//     }
// }



// for(i=1;i<3;i++){
//     for(j=0;j<i;j++){
//         a[i][j] =0;
//         }
//         printf("\n");
//     }
//       for (int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//          printf("%d",a[i][j]);
//     }
//     printf("\n");

//       }
//     return 0;
//  }



 
#include <stdio.h>
 int main(){
    int a[3][3],i, j, sum=0;
    printf("Enter the element of the matrix:\n");
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        scanf("%d",&a[i][j]);
        printf("\n");
    }
}

for(j=1;j<3;j++){
    for(i=0;i<j;i++){
        a[i][j] =0;
        }
        printf("\n");
    }
      for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
         printf("%d",a[i][j]);
    }
    printf("\n");

      }
    return 0;
 }


// #include <stdio.h>
// int main()
// {
//     int i, j, q, w, sum, a[10][10];
//     printf("enter the no of rows and columns for matrix(must be less than 10)\n");
//     scanf("%d%d", &q, &w);

//         for (i = 0; i < q; i++)
//         {
//             for (j = 0; j < w; j++)
//             {
//                 printf("enter the %d x %d item of matrix: ", i, j);
//                 scanf("%d", &a[i][j]);
//                 printf("\n");
//             }
//         }
//         for (i = 1; i < q; i++)
//         {
//             for (j = 0; j < i; j++)
//             {
//                a[i][j]=0;
//             }
//         }
//         for (i = 0; i < q; i++)
//         {
//             for (j = 0; j < w; j++)
//             {
            
//                printf(" %d",a[i][j]);
//             }
//             printf("\n");
//         }
        
//     return 0;
// }
