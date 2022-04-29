#include <stdio.h>
int main(){
    FILE *f;
    char note[100];

    f = fopen("notes.txt","w");
    if(f == NULL){
        printf("error opening file");
        return 0;
    }

    printf("write something: ");
    gets(note);
    fputs(note,f);
    fclose(f);

    printf("saved successfully!\n");

    f = fopen("notes.txt","r");
    printf("file content: ");
    while(fgets(note,100,f)){
        printf("%s",note);
    }
    fclose(f);
    return 0;
}
