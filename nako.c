#include <stdio.h>
#include <stdlib.h>

typedef struct set {
	
	int data;
	struct set * next;

}SetStruct;


typedef SetStruct * Set;



 Set create (){
	SetStruct * newNode = NULL;
	return newNode;
}
	





Set add(Set s,int e){
	
	
	Set prev = NULL;
		
	/* Set the temp node by copying the data and pointer 
	  of the head node to temp node    */
	Set temp;
	temp = s;
	
	/* allocate the memory for new node and insert the data to the
       node  */
	Set newNode = (Set)malloc(sizeof(SetStruct));
	newNode->data = e;
	newNode->next =NULL;
	
		/* executes if the linked list is empty */ 
		if (s == NULL){
			s = (Set)malloc(sizeof(SetStruct));
			s = newNode;
		}
		else if(e < temp->data ){
		/*executes if the data to be inserted is less than the
		  data of the head pointer*/ 	
			newNode->next = s;
			s = newNode;
		}  		
  		else{
  		
		  
		  while(temp != NULL){
		  	
		  	if (e<temp->data)
		  		
		  		break;
		  		
		  		prev = temp;
		  		temp = temp->next;
		  		
		  }
		  		
		  		
			newNode->next = temp;
			
			if (prev != NULL)
				prev->next = newNode;
			else 
				s = temp;	
				
		}
		
		return s;
		  }
 



void print(Set s){
	
	while( s != NULL){
		printf(" %d ",s->data);
		s = s->next;
	}
	printf("\n");

}


int main(){
	
	 

Set s1, s2, s3;

 

s1 = create();

s2 = create();

s3 = create();

 

s1 =add (s1, 4);

s1 =add (s1, 2);

s1 =add (s1, 8);

s1 =add (s1, 6);

print (s1);                                 // this statement will display (2, 4, 6, 8)

s2 =add (s2, 2);

s2 =add (s2, 5);

print (s2);                                  // this statement will display (2, 5)

s3 =add (s3, 7);

s3=add (s3, 6);

print (s3);                                     // this statement will display (6, 7)



	
	
	
	
	
	
}



