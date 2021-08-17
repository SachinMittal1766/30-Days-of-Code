
          Node* removeDuplicates(Node *head)
          {
            //Write your code here
            Node* ptr=head;
            Node* p=head->next;
            while (ptr->next!=NULL) {
              if(ptr->data == p->data){
                  ptr->next=p->next;
                  p=ptr->next;
              }
              else{
                  ptr=ptr->next;
                  p=p->next;
              }
            }
            return head;
          }


