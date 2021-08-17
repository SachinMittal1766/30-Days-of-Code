
    Node* insert(Node *head,int data)
      {
          //Complete this method
          if(head == NULL){
              return new Node(data);
          }
          
          Node *ptr = head;
          while(ptr->next != NULL){
              ptr = ptr->next;
          }
          
          ptr->next = new Node(data);          
          return head;
      }


