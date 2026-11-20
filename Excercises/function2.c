#include <stdio.h>
#include <string.h>
void printNamaste();
void printBonjour();

int main(){
    char Nationality[20];
    printf("Enter your Naitionality");
    scanf("%19s",Nationality);
    if(strcmp(Nationality,"Indian")==0 ||strcmp(Nationality,"indian")==0){
        printNamaste();
    }
    else{
    printBonjour();
    }
return 0;
}
void printNamaste(){
     printf("Namaste");
}
void printBonjour(){
     printf("Bonjour");
}