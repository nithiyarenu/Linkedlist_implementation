This program demonstrates various operations on a singly linked list using C++. The singlylinkedlist class provides multiple methods to manipulate nodes in the list, such as appending, prepending, inserting, deleting, and updating nodes. Below is a detailed explanation of the operations this code performs and some common applications of linked lists.

OPERATIONS PERFORMED:

Append Node (appendNode(node* n)):
   Adds a new node to the end of the linked list. If a node with the same key already exists, it will not be added.
   
Prepend Node (prependNode(node* n)):
   Adds a new node at the beginning of the linked list, pushing all other nodes down the list.
   
Insert Node After a Specific Node (insertNode(int k, node* n)):
   Inserts a new node after the node with a specified key. If the specified key does not exist, the operation is not performed.

Delete Node by Key (deleteNode(int k)):
   Deletes the node with the specified key from the linked list. If the key does not exist, the operation is not performed.

Update Node Data (updateNode(int k, int d)):
   Updates the data of the node with the specified key. If the key does not exist, the operation is not performed.

Print Nodes (printing()):
   Prints all the nodes in the linked list in order of their appearance from the head to the end of the list.

Clear Screen (system("cls")):
   Clears the console screen. (Note: This function is platform-dependent and works on Windows systems.)

LINKED LIST APPLICATIONS:

Dynamic Memory Allocation:
  Linked lists allow dynamic memory allocation, meaning the list can grow or shrink as needed, unlike arrays, which have a fixed size.
  
Implementing Stacks and Queues:
  Linked lists can be used to implement stack and queue data structures efficiently.
  
Maintaining a Sorted List:
  Linked lists are ideal for maintaining a sorted list of elements, as insertion and deletion can be done efficiently.
  
Graph Representation:
  Linked lists can be used to represent graphs, where each node represents a vertex, and each edge is represented by a linked list connecting nodes.
  
Real-World Applications:
  Linked lists are used in real-world applications such as navigating through web pages (browser back/forward), implementing file systems, and in algorithms like Dijkstra’s shortest path and A* search.
