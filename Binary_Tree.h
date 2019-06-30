/************************************************
* File : Binary_Tree.h			 				*
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
#ifndef BINTREE
#define BINTREE
#define MAX_SIZE 15
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define COUNT 10


typedef int Infotype;
typedef struct TreeNode *TreeAddress;
typedef struct TreeNode {
	Infotype Info;
	bool Disable;
	TreeAddress Left;
	TreeAddress Right;
};
typedef struct Tree {
	TreeAddress Root;
};



/*--------- About Create / Delete A Node/Tree -----------*/
void CreateTree(TreeAddress *Root);
TreeAddress CreateNode(Infotype Data,int Indexs);
TreeAddress Insert_Level_Order(TreeAddress Root, Infotype Data);
//Belum
void DeleteNode(TreeAddress *Root,TreeAddress NodeDeleted);
void SubTreeDelete(TreeAddress Node);

/*--------- Info About The Tree -----------*/
int Depth(TreeAddress Node);
Infotype Min(TreeAddress Node);
Infotype Max(TreeAddress Node);
void Leaf(TreeAddress Node);
int Height(TreeAddress Node);
int Size(TreeAddress Node);
int MaxDegree(TreeAddress Node);

/*--------- Info About The Node -----------*/
int Degree(TreeAddress Node);
int Level(TreeAddress Node); //
void Ancestor(TreeAddress Node);
void Descendant(TreeAddress Node);
void SubTree(TreeAddress Node);

/*--------- Get About The Node -----------*/
Infotype GetRoot(TreeAddress Node);
Infotype GetParent(TreeAddress Node);
Infotype GetSon(TreeAddress Node);
Infotype GetBrother(TreeAddress Node);

///*--------- Traversing -----------*/
void PreOrder(TreeAddress Node);
void PostOrder(TreeAddress Node);
void InOrder(TreeAddress Node);
void LevelOrder(TreeAddress Node);

void print2DUtil(TreeNode *Root, int space);
void print2D(TreeNode *Root);
#endif
