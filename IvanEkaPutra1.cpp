#include "IvanEkaPutra1.h"

// Membaca data dari file
void ReadData(Tree *TreeCDT){
    int data;
    FILE *file1;

    file1 = fopen("BilanganBulat.txt", "rt");
    while(!feof(file1)){
        fscanf(file1, "%d ", &data);
        TreeCDT->Root = Insert_Level_Order(TreeCDT->Root, data);
    }
}

// Menghapus data pada file
void DeleteData(){
    int data, input;
    FILE *file1, *file2;

    file1 = fopen("BilanganBulat.txt", "rt");
    file2 = fopen("Temp.txt", "at");
    printf("Input: ");
    scanf("%d", &input);
    while(!feof(file1)){
        fscanf(file1, "%d ", &data);
        if(data != input){
            fprintf(file2, "%d ", data);
        }
    }
    fclose(file1);
    fclose(file2);
    remove("BilanganBulat.txt");
    rename("Temp.txt", "BilanganBulat.txt");
}
