/************************************************
* File : main.cpp			 					*
* Deskripsi 	: Program Implementasi ADT 		*
*				  Binary Tree - Heap Sert		*
*				  Alokasi Dinamis				*
* Updated bye 	: Ivan Eka Putra    - 181511	*
*				  Satria Natha B	- 181511066	*
*				  Rizqa Fauziyyah N - 181511065
* Tanggal 		: 24 Juni 2019					*
* Sumber		: Adaptasi program dan 			*
*			      pengembangan milik kating		* 
*				  Implementasi ADT Binary Tree	*
*				  dalam Melakukan Heap Sort		*
*************************************************/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "Binary_Tree.h"
#include "queue.h"
#include "stack.h"
#include "Heap.h"
#include "IvanEkaPutra1.h"


int main() {
	int Elemen, Pilih;
	int Nilai, Value;
	Tree R;
	FILE *f_heapsort;
	do {
	printf("+++++++++++++++++++++++++++++++++++\n");
	printf("+\t      Binary Tree	  +\n");
	printf("+\t  Rizqa Fauziyyah N  	  +\n");
	printf("+\tD3 Teknik Informatika     +\n");
	printf("+++++++++++++++++++++++++++++++++++\n");
	Tree TreeCDT;
	CreateTree(&TreeCDT.Root);
	ReadData(&TreeCDT);
	LinkAddress Queue=GetElementTree(TreeCDT.Root);
	Tampil_List(Queue);
	system("pause");
	for(;;){
		system("cls");
		Tree TreeCDT;
		CreateTree(&TreeCDT.Root);
		ReadData(&TreeCDT);
		LinkAddress Queue=GetElementTree(TreeCDT.Root);
		Tampil_List(Queue);
		printf("MENU : \n");
		printf("  1. Input Data\n");
		printf("  2. Tampil Data yang Ada di File\n");
		printf("  3. Max dan Min Heap\n");
		printf("  4. Sebelum dan Sesudah Sort\n");
		printf("  5. Mencari Index Elemen\n");
		printf("  6. Keluar");
		printf("\nPilihan	: ");
		fflush(stdin);
		scanf("%d", &Pilih);
		switch(Pilih){
			case 1 : {
					if ((f_heapsort=fopen("Heap_Sort.txt", "at"))== NULL){
						printf("File tidak dapat dibuka\n");
						exit(1);
					}
					fflush(stdin);
				//Insert Secara Level Order
				printf("Masukan Jumlah Elemen : ");
				scanf("%d",&Elemen); 
				fflush(stdin);	
				for(int i=0;i<Elemen;i++){	
					printf("[%d] -> ",i+1);scanf("%d", &Value);
					//putw(Value, f_heapsort);
					fprintf(f_heapsort, "%d \n", Value);
					//TreeCDT.Root = Insert_Level_Order(TreeCDT.Root,Value);
					fflush(stdin);
				}fclose(f_heapsort);
				printf("\n");
				system("pause");
				break;
			};
			case 2 : {
				if ((f_heapsort=fopen("Heap_Sort.txt", "rt"))==NULL){
					printf("File Gagal Dibuka!\n");
					exit(1);
				}
				printf("Isi File Heap_Sort.DAT : \n");
				
				while(1){
					//Baca Nilai Integer dari File
					Value = getw(f_heapsort);
					//Jika Akfir File Keluar Loop
					if (feof(f_heapsort) != NULL) break;
					//Tampilkan Ke Layar
					printf("%d \n", Value);
				}  fclose(f_heapsort);
				system("pause");
				break;
			};
			case 3 : 	
			//tree level order			
				printf("Tree Level Order\n");
				printf("test");
				print2D(TreeCDT.Root);
				LinkAddress Queue=GetElementTree(TreeCDT.Root);
				//TreeCDT.Root = Insert_Level_Order(TreeCDT.Root, Value);
				Tampil_List(Queue);
				printf("\n");
			//Traversing 
			printf("PreOrder : ");
			PreOrder(TreeCDT.Root);   printf("\n");
			printf("PostOrder : ");
			PostOrder(TreeCDT.Root);  printf("\n");
			printf("InOrder : ");
			InOrder(TreeCDT.Root);    printf("\n");
			system("pause");
			printf("\n");
			
			//Minheap	
				printf("Min Heap\n");
				//print2D(TreeCDT.Root);
			//	Queue=GetElementTree(TreeCDT.Root);
				Queue = Heapsort(Queue,TreeCDT.Root);
				Tampil_List(Queue);
				print2D(TreeCDT.Root);
			//Traversing 
			printf("PreOrder : ");
			PreOrder(TreeCDT.Root);   printf("\n");
			printf("PostOrder : ");
			PostOrder(TreeCDT.Root);  printf("\n");
			printf("InOrder : ");
			InOrder(TreeCDT.Root);    printf("\n");
			system("pause");
			printf("\n");
				
			//MaxHeap
				printf("Max Heap\n");
		   	 //Queue=GetElementTree(TreeCDT.Root);
				Queue = MaxHeap(Queue,TreeCDT.Root);
				Tampil_List(Queue);
				print2D(TreeCDT.Root);
				fclose(f_heapsort);
			//Traversing 
			printf("PreOrder : ");
			PreOrder(TreeCDT.Root);   printf("\n");
			printf("PostOrder : ");
			PostOrder(TreeCDT.Root);  printf("\n");
			printf("InOrder : ");
			InOrder(TreeCDT.Root);    printf("\n");
			system("pause");
			printf("\n");
			break; 
			
			
			case 4 : {
				//Get Element Tree Ke Queue
				LinkAddress Queue = GetElementTree(TreeCDT.Root);
				printf("Sebelum Di Sorting : "); 
				Tampil_List(Queue);
				system("pause");
			
				//Heapsort
			//	Queue = GetElementTree(TreeCDT.Root);
				LinkAddress Queue = Heapsort(Queue,TreeCDT.Root);
				printf("Setelah Di Sorting : "); 
				Tampil_List(Queue);
				system("pause");
				break;
			};
			case 5 : {
				printf("Belum Ada\n");
				system("pause");
				break;
			};
			case 6 : {
				exit(1);
				break;
			};
		}
	}
} while(Pilih!=6);*/
}

