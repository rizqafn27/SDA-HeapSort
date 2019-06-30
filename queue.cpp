/************************************************
* File : queue.cpp			 					*
* Deskripsi 	: Program Implementasi ADT 		*
*				  Binary Tree - Heap Sert		*
*				  Alokasi Dinamis				*
* Updated bye 	: Ivan Eka Putra    - 181511	*
*				  Satria Natha B	- 181511066	*
8				  Rizqa Fauziyyah N - 181511065
* Tanggal 		: 24 Juni 2019					*
* Sumber		: Adaptasi program dan 			*
*			      pengembangan milik kating		* 
*				  Implementasi ADT Binary Tree	*
*				  dalam Melakukan Heap Sort		*
*************************************************/
#include "queue.h"
#include "boolean.h"

void EnQueue(LinkAddress *p,infotype value){
	LinkAddress PNew;
	Create_Node(&PNew);
	Isi_Node(&PNew,value);
	Ins_Akhir (p,PNew);	
}

void DeQueue(LinkAddress *p,infotype *X){
	Del_Awal(p,X);
}
