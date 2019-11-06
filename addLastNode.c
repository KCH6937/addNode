#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct NODE {
	struct NODE *next;
	int dataX;
	int dataY;
};

int cnt = 1;

void addNode(int dataX, int dataY)
{
	struct NODE *newNode = malloc(sizeof(struct NODE));
	newNode->dataX = dataX;
	newNode->dataY = dataY;
	newNode->next = NULL;
	
	while(newNode == NULL) 
	{
		struct NODE *newNode2 = malloc(sizeof(struct NODE));
		newNode->next = newNode2;
		newNode = newNode->next;
	}
	
	while (newNode != NULL) 
	{
		printf("%d 	%d\n", newNode->dataX, newNode->dataY);
		newNode = newNode->next;
	}
	

}

int main(void)
{
	
	addNode(10,20);
	addNode(30,40);
	addNode(50,60);
	addNode(70,80);

	

	return 0;	
}
