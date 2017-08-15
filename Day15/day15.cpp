      Node *start;
      Node* insert(Node *head,int data)
      {
          //Complete this method
          Node *nnode = new Node(data);
          if(head == NULL)
          {
              start = nnode;
              return nnode;
          }
          else
          {
              while(head->next != NULL)
              {
                head = head->next;
              }
              head->next = nnode;
              return start;
          }
      }
