


    //Program that checkes if given linked list is Palindrome or not

    #include<stdio.h>
    #include<stdlib.h>

    typedef struct Node{

	    int data;
	    struct Node *next;
    }Node;

    Node *head = NULL;

    //createNode

    Node* createNode(){

    	Node *newNode = (Node*)malloc(sizeof(Node));

	    printf("Enter Data:\n");
	    scanf("%d",&(newNode->data));

	    newNode->next = NULL;

	    return newNode;
    }

    //addNode

    void addNode(){

       Node *newNode = createNode();

       if(head==NULL){

             head = newNode;

       }else{

              Node *temp = head;

	      while(temp->next != NULL){

		      temp = temp->next;

	       }

	        temp->next = newNode;
	    }
    }

    //printLL

    int printLL(){

	    if(head==NULL){

		    return -1;
	
        }else{
		
            Node *temp = head;

		    while(temp->next != NULL){

			    printf("|%d|->",temp->data);
			    temp = temp->next;
		    }

		    printf("|%d|\n",temp->data);
            return 0;
	    }
    }

    // Linked list is Palindrome or not
    
    int isPalindrome() {
        
        if(head==NULL||head->next==NULL){
		    
		    return 1;
        }
    
        struct Node* head1=head;
        struct Node* head2=head->next;
    
        int count=1;
    
        while(head1->next!=NULL){
            
            head1=head1->next;
            count++;
         }
   
        head1=head;
        head->next=NULL;
    
        for(int i=1;i<count/2;i++){
        
            struct Node* r=head2->next;
            head2->next=head1;
            head1=head2;
            head2=r;
        }

        if(count%2!=0){
            
            head2=head2->next;
        }
    
        while(head1!=NULL){
        
            if(head1->data!=head2->data){
                
                return 0;
            }
        
            head1=head1->next;
            head2=head2->next;
        }
        
        return 1;
    
    }

    // Driver Code

    void main(){

       int n;
       
       printf("Enter No of Nodes:\n");
       scanf("%d",&n);
        
       if(n>0){
	
	        for(int i =0;i<n;i++){

			    addNode();
		    }

	        printLL();
	
	        int ret = isPalindrome();
    
            if(ret){	    
	   
                printf("Palindrome\n");

            }else{
	    
                 printf("Not Palindrome\n");
            }
	   
         }else{
		
            printf("Invalid Node Count!\n");

	    }
	
    }


