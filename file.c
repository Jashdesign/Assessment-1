#include<stdio.h>
#include<stdlib.h>
// void main(){
//     FILE* fptr;
//     fptr = fopen("1st.txt","r");
//     if(fptr == NULL){
//         printf("File not opened!");
//     }else{
//         printf("File opened!");
//     }
// }
// void main(){
//     FILE* fptr;
//     fptr = fopen("2nd.txt","w");
//     if(fptr == NULL){
//         printf("File not opened!");
//     }else{
//         printf("File opened!");
//     }
// }
// void main(){
//     FILE* fptr;
//     char a[] = {"Hello! My name is Jash."};
//     fptr = fopen("3rd.txt","w");
//     if(fptr == NULL){
//         printf("File not opened!");
//     }else{
//         printf("File opened!");
//         fputs(a,fptr);
//         fclose(fptr);
//         printf("\nData successfully written!");
        
//     }
// }
// void main(){
//     FILE* fptr;
//     char data[50];
//     fptr = fopen("3rd.txt","r");
//     if(fptr == NULL){
//         printf("File not opened!");
//     }else{
//         printf("File opened!");
//         while (fgets(data,50,fptr) != NULL)
//         {
//             printf("%s",data);
//         }
//         fclose(fptr);
//         printf("\nData successfully read!");
//     }
// }