/************************************************
* File : Heap.cpp			 					*
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
#include "Heap.h"
TreeAddress heapify(TreeAddress Node)
{
	TreeAddress Largest = Node; 
	
	if (Node->Left != NULL && !Node->Left->Disable && Node->Left->Info > Largest->Info)
		Largest = Node->Left;

	if (Node->Right != NULL && !Node->Right->Disable && Node->Right->Info > Largest->Info)
		Largest = Node->Right;
		
	if (Largest != Node){
		
		Swap(&Node,&Largest);
		heapify(Largest);
	}
}

TreeAddress heapifymax(TreeAddress Node)
{
	TreeAddress Largest = Node;
	if (Node->Left != NULL && !Node->Left->Disable && Node->Left->Info < Largest->Info)
	Largest = Node->Right;

	if (Node->Right != NULL && !Node->Right->Disable && Node->Right->Info < Largest->Info)
		Largest = Node->Left;
		
	if (Largest != Node){
		
		Swap(&Node,&Largest);
		heapifymax(Largest);
	}
}

LinkAddress Heapsort(LinkAddress LinkedList,TreeAddress Root){
	LinkAddress QueueTemp;
	int Elemen = NbElmt(LinkedList);
	for(int i=Elemen/2;i>0;i--){
		QueueTemp = GetNodeSequenceTo(LinkedList,i-1);
		heapify(QueueTemp->info);
	}
	
	while(LinkedList != NULL){
		TreeAddress Last;
		Del_Akhir(&LinkedList,&Last);
		if(LinkedList!= NULL) Swap(&LinkedList->info,&Last);
		Last->Disable = true;
		heapify(Root);
	}
	
	LinkAddress Result = GetElementTree(Root);
	return Result;
}

LinkAddress MaxHeap(LinkAddress LinkedList, TreeAddress Root){
	LinkAddress QueueTemp;
	int Elemen = NbElmt(LinkedList);
	for(int i=Elemen/2; i>0; i--){
		QueueTemp = GetNodeSequenceTo(LinkedList,i-1);
		heapifymax(QueueTemp->info);
	}
	
	while(LinkedList != NULL){
		TreeAddress Last;
		Del_Akhir(&LinkedList,&Last);
		if(LinkedList!= NULL) Swap(&LinkedList->info,&Last);
		Last->Disable = true;
		heapifymax(Root);
	}
	LinkAddress Result = GetElementTree(Root);
	return Result;
}

LinkAddress GetElementTree(TreeAddress Node){
	LinkAddress Queue=NULL;
	LinkAddress Queue2=NULL;
	TreeAddress NodeCurrent;
	
	EnQueue(&Queue, Node);
	EnQueue(&Queue2, Node);
	
	while(Queue != NULL){
		DeQueue(&Queue, &NodeCurrent);
		
		if(NodeCurrent->Left != NULL){
			EnQueue(&Queue, NodeCurrent->Left);
			EnQueue(&Queue2, NodeCurrent->Left);
		}
		
		if(NodeCurrent->Right != NULL){
			EnQueue(&Queue, NodeCurrent->Right);
			EnQueue(&Queue2, NodeCurrent->Right);
		}
	}
	return Queue2;
}


void Swap(TreeAddress *Node1,TreeAddress *Node2){
	int Swap;
	Swap = (*Node1)->Info;
	(*Node1)->Info = (*Node2)->Info;
	(*Node2)->Info = Swap;
}
void Swap1(TreeAddress *Node1, TreeAddress *Node2){
	int Swap;
	Swap = (*Node2)->Info;
	(*Node2)->Info = (*Node1)->Info;
	(*Node1)->Info = Swap;
}
