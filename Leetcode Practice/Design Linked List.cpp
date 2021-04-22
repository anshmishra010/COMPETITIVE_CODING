class MyLinkedList {
private:
    struct node {
        int val;
        struct node* next;
    };
    
    struct node *head, *tail, *temp;
    int nodeCount;
    
    void display(struct node* node) {
        while (node) {
            cout << node->val << " ";
            node = node->next;
        }
        cout << "\n";
    }
public:
    /** Initialize your data structure here. */
    MyLinkedList() {
        head = tail = nullptr;
        temp = head;
        nodeCount = 0;
        // cout << "\nstart\n";
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        temp = head;
        // display(temp);
        while (temp and index) {
            temp = temp->next;
            --index;
        }
        return temp ? temp->val : -1;
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        struct node* newNode = (struct node*)malloc(sizeof(struct node));
        newNode->val = val;
        newNode->next = head;
        head = newNode;
        if (!tail)
            tail = head;
        ++nodeCount;
        // display(head);
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        struct node* newNode = (struct node*)malloc(sizeof(struct node));
        newNode->val = val;
        newNode->next = nullptr;
        if (tail)
            tail->next = newNode;
        tail = newNode;
        if (!head)
            head = tail;
        ++nodeCount;
        // display(head);
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        if (index > nodeCount) return;
        if (index == 0) addAtHead(val);
        else if (index == nodeCount) addAtTail(val);
        else {
            struct node* newNode = (struct node*)malloc(sizeof(struct node));
            newNode->val = val;
            temp = head;
            --index;
            while (index) {
                temp = temp->next;
                --index;
            }
            newNode->next = temp->next;
            temp->next = newNode;
            ++nodeCount;
        }   
        // display(head);
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        if (index >= nodeCount) return;
        --nodeCount;
        if (index == 0) {
            if (head == tail) tail = nullptr;
            head = head->next;
            return;
        }
        temp = head;
        --index;
        while (index) {
            temp = temp->next;
            --index;
        }
        if (temp->next->next)
            temp->next = temp->next->next;
        else {
            temp->next = nullptr;
            tail = temp;
        }
        // display(head);
    }
};

// another style though logic is same

class MyLinkedList {
	struct Node {
		int val;
		Node *next;
		Node(int x): val(x), next(nullptr) {}
	};

	Node *head;
	int size;
public:
    /** Initialize your data structure here. */
    MyLinkedList() {
        head = nullptr;
		size = 0;
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
		int res = -1;

		if (index > size)
			return res;

		Node *curr = head;
		while(curr && index > 0) {
			index--;
			curr = curr->next;
		}

		if (index == 0 && curr != nullptr)
			res = curr->val;

		return res;
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
       Node *curr = new Node(val);
	   curr->next = head;
	   head = curr; 
	   size++;
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
		size++;
		Node *node = new Node(val);
		if (head == nullptr) {
			head = node;
			return;
		}

        Node *curr = head;
		while(curr && curr->next)
			curr = curr->next;

		curr->next = node;
    }

    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, 
	the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
		if (index > size)
			return;

		if (index == 0) {
			size++;
			addAtHead(val);
			return;
		}

		if (index == size) {
			size++;
			addAtTail(val);
			return;
		}

		Node *curr = head;
		while(curr && index > 0) {
			index--;
			if (index == 0) {
				Node *new_node = new Node(val);
				new_node->next = curr->next;
				curr->next = new_node;
				size++;
				break;
			}

			curr = curr->next;
		}

    }

    /** Delete the index-th node in the linked list, if the index is valid. */
	/*
	
	1->2->3->4
	*/
    void deleteAtIndex(int index) {
		if (index == 0) {
			Node *tmp = head;
			head = head->next;
			size--;
			delete tmp;
			return;
		}

		Node *curr = head, *pre = nullptr;
		while(curr && index > 0) {
			pre = curr;
			curr = curr->next;
			index--;
		}

		if (index == 0 && curr != nullptr) {
			Node *tmp = curr;
			pre->next = curr->next;
			size--;
			delete tmp;
		}
    }
};
