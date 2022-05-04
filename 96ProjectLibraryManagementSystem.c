#include <stdio.h>
#include <string.h>
struct book{
    int id;
    char title[30];
    char author[30];
};

int main(){
    struct book b[10];
    int n,i;
    printf("how many books: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("enter id, title, author: ");
        scanf("%d %s %s",&b[i].id,b[i].title,b[i].author);
    }

    printf("\nbook list:\n");
    for(i=0;i<n;i++){
        printf("%d %s %s\n",b[i].id,b[i].title,b[i].author);
    }

    return 0;
}
