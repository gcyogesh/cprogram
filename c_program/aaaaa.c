// #include <stdio.h>
// int main(){
// 	for(int a=0; a<=10; a++){
// 		printf("%d \n", a);
// 	}
// }



#include <stdio.h>
int main(){
	int a[3][4],i,j;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
         printf("Enter [%d][%d] element of matrix",i,j);
		 scanf("%d", &a[i][j]);
		}
	}
	printf("\n the elements of matrix are\n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}


// #include <stdio.h>
// int main(){
// 	int i,j;
// 	for(i=1;i<=5;i++){
// 		for(j=1;j<=i;j++){
// 			printf("* ");
// 		}
// 		printf("\n");
// 	}
	
// }

