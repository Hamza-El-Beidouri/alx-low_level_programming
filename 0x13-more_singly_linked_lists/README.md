# 0x13. C - More singly linked lists

## Description
This repository contains solutions to various tasks related to singly linked lists in the C programming language.

## Mandatory Tasks
1. **Print list**
   - Prototype: `size_t print_listint(const listint_t *h);`
   - Return: the number of nodes
   - Format: see example
   - You are allowed to use printf

2. **List length**
   - Prototype: `size_t listint_len(const listint_t *h);`
   
3. **Add node**
   - Prototype: `listint_t *add_nodeint(listint_t **head, const int n);`
   - Return: the address of the new element, or NULL if it failed

4. **Add node at the end**
   - Prototype: `listint_t *add_nodeint_end(listint_t **head, const int n);`
   - Return: the address of the new element, or NULL if it failed

5. **Free list**
   - Prototype: `void free_listint(listint_t *head);`

6. **Free**
   - Prototype: `void free_listint2(listint_t **head);`
   - The function sets the head to NULL

7. **Pop**
   - Prototype: `int pop_listint(listint_t **head);`
   - If the linked list is empty, return 0

8. **Get node at index**
   - Prototype: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);`
   - If the node does not exist, return NULL

9. **Sum list**
   - Prototype: `int sum_listint(listint_t *head);`
   - If the list is empty, return 0

10. **Insert**
    - Prototype: `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);`
    - Returns: the address of the new node, or NULL if it failed
    - If it is not possible to add the new node at index idx, do not add the new node and return NULL
