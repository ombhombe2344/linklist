# linklist
## Aim 
To use excepttion handling.

## Software Used 
VS Code

## Theory
**Definition**
A **linked list** is a fundamental data structure used to store a collection of elements. Unlike arrays, where elements are stored in contiguous memory locations, linked lists store elements in nodes scattered throughout memory. Each node contains two parts:

1. **Data**: The actual value of the element.
2. **Pointer (or Reference)**: A reference (or pointer) to the next node in the list.

## Types of Linked Lists
1. **Singly Linked List**: Each node points to the next node in the sequence, and the last node points to `NULL`.
2. **Doubly Linked List**: Each node points to both the next and the previous node. This allows traversal in both directions.
3. **Circular Linked List**: The last node points back to the first node, forming a circle. It can be singly or doubly linked.

Eg-
```cpp
struct Node {
    int data;
    Node* next;
};
```

Here, data stores the value of the element, and next is a pointer to the next node in the list.
#### Basic Operations

##### 1. Insertion: Adding elements to the list

- **At the beginning**: Insert a node at the head of the list.
- **At the end**: Traverse the list and insert a node at the tail.
- **At a specific position**: Insert a node at a given position.

##### 2. Deletion: Removing elements from the list

- **From the beginning**: Remove the head node.
- **From the end**: Traverse to the second-last node and set its `next` pointer to `NULL`.
- **From a specific position**: Remove the node at a given index.

##### 3. Traversal: Visit each node in the list to process or display its data.

##### 4. Searching: Find an element in the list by comparing the value of each node’s data.

##### 5. Reversing: Reverse the order of nodes in the list.

```cpp
// Function to insert a node at the beginning
void insertAtBeginning(Node*& head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
}
```
```cpp
// Function to insert a node at the end
void insertAtEnd(Node*& head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}
```

## Algorithms
### Algorithm for implementation of linked list
#### Step 1: Define a Class for the Node
1. Create a class `Link` to represent a node of the linked list.
2. Inside the class:
   - Declare an integer `data` to store the value of the node.
   - Declare a pointer `next` of type `Link*` to store the address of the next node.
   
#### Step 2: Define the Constructor
1. Create a constructor `Link(int num)` that takes an integer parameter:
   - Set `data` equal to `num` (the value passed during object creation).
   - Initialize `next` to `NULL`, meaning that the current node doesn’t point to any other node.

#### Step 3: Create a Node in Main Function
1. In the `main` function:
   - Declare a pointer `l1` of type `Link*` and dynamically allocate memory for it using `new`.
   - Initialize the node with the value `6` by calling the constructor.
   
#### Step 4: Print Node Data and Pointer to Next Node
1. Use `cout` to print the value of the node (`l1->data`).
2. Print the address stored in `next` using `l1->next`, which should be `NULL` for this node.

#### Step 5: End the Program
1. Return `0` to indicate successful completion of the program.
<br>


### Algorithm for adding node at begenning

#### Step 1: Define the Node Class
1. Create a class named `Node` to represent each node in the linked list.
2. Inside the class:
   - Declare an integer `value` to store the value of the node.
   - Declare a pointer `next` of type `Node*` to point to the next node in the list.
3. Define a constructor `Node(int data)`:
   - Set `value` to the parameter `data`.
   - Initialize `next` to `NULL`, indicating no next node.

#### Step 2: Define the Function to Insert at Head
1. Define a function `insertAtHead(Node* &head, int value)` to insert a new node at the beginning of the list:
   - Create a new `Node` object named `new_node` and initialize it with the `value`.
   - Set the `next` pointer of `new_node` to the current `head`.
   - Update `head` to point to `new_node`.

#### Step 3: Define the Function to Display the List
1. Define a function `display(Node* head)` to print the elements of the linked list:
   - Initialize a temporary pointer `temp` to `head`.
   - While `temp` is not `NULL`, do the following:
     - Print the `value` of the current node followed by " -> ".
     - Move `temp` to the next node (`temp = temp->next`).
   - After the loop, print "NULL" to indicate the end of the list.

#### Step 4: Implement the Main Function
1. In the `main` function:
   - Declare a pointer `head` of type `Node*` and initialize it to `NULL` to represent an empty list.
   - Call `insertAtHead(head, 4)` to insert the value `4` at the head and display the list.
   - Call `insertAtHead(head, 5)` to insert the value `5` at the head and display the list again.
   - Call `insertAtHead(head, 10)` to insert the value `10` at the head and display the list one final time.

#### Step 5: End the Program
1. Return `0` from the `main` function to indicate successful completion of the program.

## Conclusion
We learnt the use of linked list in this experiment.
