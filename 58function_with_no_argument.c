// function with no argument witout return type

//declaring a function
void sum(void);

void main(){
    // calling an function
    sum();
}
//defining an function
void sum(){
    int a,b,sum;
    printf("Enter a two values: ");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("the sum of two number is: %d",sum);
}