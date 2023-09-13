// #include <stdio.h>

// int main(){


// int a =333;
// int*  p;
// int** ptr;
// int*** pointer;


// p=&a;
// ptr = &a;
// pointer= &a;


// printf("Value of var %d\n", a);
// printf("Value of p %d\n", *p);
// printf("Value of ptr %d\n", **ptr);
// printf("Value of pointer %d\n", ***pointer);


// return 0;	
// }




// #include <stdio.h>
// int main(){

// 	int arr[]= {5,2,99,4,5};
// 	int *ptr= arr;
// 	printf("The value of ptr after increament is %d\n",*ptr);
// 	ptr=ptr+4;
// 	printf("The value of ptr after increament is %d\n",*ptr);
// 	ptr=ptr-2;
// 	printf("The value of pointer after decreament id %d\n",*ptr);
// 	return 0;
// }



#include <stdio.h>
int main(){
	int yg=3;
	int* ptr;
	printf("The value of prt is %d\n",yg);
	ptr=ptr+3;
	printf("The value of increament is %d\n",ptr);
	ptr=ptr-3;
	printf("the value of dc %d\n ",ptr);

	return 0;
}


#include <stdio.h>
int main(){
	int y=12;
	int* pp;
	if(y==pp){
		printf("It is equal to pp");
	}else if (y!=pp)
	{
		 printf("The value is not equal");
	}
	
	return 0;
	
	
}



#include <stdio.h>
int main(){
	int arr[]= {1,3,5,6,7,9};
	int *ptr=&arr[0];
	int **ptr= &arr[4];
	
}