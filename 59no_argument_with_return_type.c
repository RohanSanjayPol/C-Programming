// no argument with return type

//declaration of function
int sum(void);

void main(){
    //function calling
    int s;
    s=sum();
    printf("the sum of two values:%d",s);
}
//function defination
int sum(){
    int a,b,sum;
    printf("Enter a two values:");
    scanf("%d %d",&a,&b);
    sum=a+b;
    return sum; // return sum
}