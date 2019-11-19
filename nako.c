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


Set intersect(Set s1,Set s2) 
{ 
	int boolean =0;
    Set result= NULL;
    Set temp = s1; 
 	Set t = s2; 
    // Traverse list1 and search each element of it in 
    // list2. If the element is present in list 2, then 
    // insert the element to result 
    while (temp != NULL) 
    { 
    
    	
    	
    
    	 while (t != NULL){ 
    	 
        if (t->data == temp->data)
          {
          	result = add(result, temp->data); 
		  }
        
        
        t = t->next; 
	   } 
    	
		    
	
    
	temp = temp->next; 
    } 
  
  
    return result; 
} 


Set combine(Set s1, Set s2) 
{ 
    Set result = NULL; 
    Set t1 = s1, t2 = s2; 
  
    // Insert all elements of list1 to the result list 
    while (t1 != NULL) 
    { 
        result = add(result, t1->data); 
        t1 = t1->next; 
    } 
    
   
  
    // Insert those elements of list2 which are not 
    // present in result list 
    
    
    Set t = result;
		
	int i =0;	
	int j=0;
	while (t2 != NULL) 
    { 
        
        printf("%d ",i);
        getchar();
		
		 while (t != NULL){ 
    	 
    	 printf("%d ",j);
        getchar();
    	 
    	 
        if (!(t->data == t2->data))
          	t = add(t, t2->data);
        
			
		     
        t2 = t2->next; 
       	j++;
	   }
  
    i++;
    
    return result; 
}

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


print (combine(s1, s2)); 
print(intersect(s1,s2));
print (intersect(s2,s3));     


	
	
	
	
}



