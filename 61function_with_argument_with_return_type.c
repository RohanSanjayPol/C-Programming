// function with argument with return type

// funtion declaration
int sum(int ,int);

// main function
void main(){
    int x,y;
    printf("Enter a two values: ");
    scanf("%d %d",&x,&y);
    //function calling
    int s=sum(x,y);
    printf("the addition of two number is :%d",s);
    
}
// function declaration
int sum(int a,int b){
    int sum=a+b;
    return sum;
}