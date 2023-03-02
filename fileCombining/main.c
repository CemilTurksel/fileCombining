#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *f1,*f2,*f3;
    char character;
    f1=fopen("info.txt","r");
    f2=fopen("data.txt","r");
    f3=fopen("combined.txt","w");
    if(f1==NULL || f2==NULL || f3==NULL){
        perror("Error opening the files");
    }
    else{
        do{
            character=getc(f1);
            if(character!=EOF){
                fprintf(f3,"%c",character);
            }
        }while(character!=EOF);
        fprintf(f3,"\n");
        do{
            character=getc(f2);
            if(character!=EOF){
                fprintf(f3,"%c",character);
            }
        }while(character!=EOF);
        printf("Combining is successful!");
        fclose(f1);
        fclose(f2);
        fclose(f3);
    }
    return 0;
}
