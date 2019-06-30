/************************************************
* File : queue.h			 					*
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
#ifndef QUEUE_H
#define QUEUE_H
#include <stdio.h>
#include "boolean.h"
#include "slink.h"

void EnQueue(LinkAddress *p,infotype value);
void DeQueue(LinkAddress *p,infotype *X);
 
#endif

