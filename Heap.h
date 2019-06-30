/************************************************
* File : Heap.h			 					*
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
#include "Binary_Tree.h"
#include "queue.h"
TreeAddress heapify(TreeAddress Node);
LinkAddress GetElementTree(TreeAddress Node);
void Swap(TreeAddress *Node1,TreeAddress *Node2);
LinkAddress Heapsort(LinkAddress LinkedList,TreeAddress Root);

void Swap1(TreeAddress *Node1, TreeAddress *Node2);
TreeAddress heapifymax(TreeAddress Node);
LinkAddress MaxHeap(LinkAddress LinkedList, TreeAddress Root);
