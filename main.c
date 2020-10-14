
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>
struct Node { 
	int data; 
	char letter;
	struct Node* next; 
}; 
char letters() {
	char letter[] = { 'a','b', 'c', 'd', 'e', 'f', 'g','h'};
	return letter[rand() % 8];
}

void printList(struct Node* n) 
{ 	int i=0;
    srand((unsigned)time(NULL));
    int c=rand() % 8 + 1;
    for(i=0;i<=c;i++){
	if (n != NULL) { 
		printf(" %c%d ",n->letter, n->data); 
		n = n->next; 
	} 
}
	printf(" \n ADIM SAYISI= %d ",i);
} 

int main() 
{ 
	srand((unsigned)time(NULL));
	struct Node* head = NULL; 
	struct Node* second = NULL; 
	struct Node* third = NULL; 
	struct Node* fourth = NULL; 
	struct Node* fifth = NULL; 
	struct Node* sixth = NULL; 
	struct Node* seventh = NULL; 
	struct Node* eighth = NULL; 

	//new memory for node
	head = (struct Node*)malloc(sizeof(struct Node)); 
	second = (struct Node*)malloc(sizeof(struct Node)); 
	third = (struct Node*)malloc(sizeof(struct Node)); 
	fourth = (struct Node*)malloc(sizeof(struct Node)); 
	fifth = (struct Node*)malloc(sizeof(struct Node));
	sixth = (struct Node*)malloc(sizeof(struct Node)); 
	seventh = (struct Node*)malloc(sizeof(struct Node));
	eighth = (struct Node*)malloc(sizeof(struct Node)); 
	

	head->data = rand() % 8 + 1; // assign data in first node 
	head->letter=letters();//first letter
	head->next = second; // Link first node with second 

	second->data = rand() % 8 + 1; // assign data to second node 
	second->letter=letters();//second letter
	second->next = third; // Link  node with third 
	
	third->data = rand() % 8 + 1; // assign data to third node 
	third->letter=letters();//third letter
	third->next = fourth; // Link  node with fourth

	fourth->data = rand() % 8 + 1; // assign data to fourth node 
	fourth->letter=letters();//fourth letter
	fourth->next = fifth; // Link  node with fifth

	fifth->data = rand() % 8 + 1; // assign data to fifth node 
	fifth->letter=letters();//fifth letter
	fifth->next = sixth; // Link  node with sixth

	sixth->data = rand() % 8 + 1; // assign data to sixth node 
	sixth->letter=letters();//sixth letter
	sixth->next = seventh; // Link  node with seventh
	
	seventh->data = rand() % 8 + 1; // assign data to seventh node 
	seventh->letter=letters();//seventh letter
	seventh->next = eighth; // Link  node with eighth

	eighth->data = rand() % 8 + 1; // assign data to eighth node 
	eighth->letter=letters();//eighth letter
	eighth->next = NULL;  // Link  node null 
		

	printList(head);

	return 0; 
}

