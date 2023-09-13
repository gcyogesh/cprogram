int main(){
    int i,j,n,fact;
    float sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int fact=1;
    for(j=1;j<=i;j++){
        fact=fact*j;
    }
    sum=sum+(float)i/fact;
    }
    printf("Sum of the sries is:%.2f",sum);
    return 0;
}


