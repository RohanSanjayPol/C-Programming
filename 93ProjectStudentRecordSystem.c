#include <stdio.h>
struct student{
    int roll;
    char name[30];
    float marks;
};

int main(){
    struct student s[5];
    int n,i;
    printf("enter number of students: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("enter roll, name, marks of student %d: ",i+1);
        scanf("%d %s %f",&s[i].roll,s[i].name,&s[i].marks);
    }

    printf("\nstudent details:\n");
    for(i=0;i<n;i++){
        printf("%d\t%s\t%.2f\n",s[i].roll,s[i].name,s[i].marks);
    }
    return 0;
}
