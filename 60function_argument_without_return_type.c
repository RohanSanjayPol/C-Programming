//function argument without return type

// function declaration
void sum(float,float);

// main function
void main(){
    float a,b;
    printf("Enter a two values\n");
    scanf("%f %f",&a,&b);
    // function calling
    sum(a,b);
}

//function defining
void sum(float x,float y){
    float sum;
    sum=x+y;
    printf("the sum of two value is: %f",sum);
}