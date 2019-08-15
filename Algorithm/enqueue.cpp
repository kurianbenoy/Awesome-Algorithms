/* p is pointer to address of rear (double pointer). This function adds new 
node after rear and updates rear which is *p to point to new node */
void enQueue(struct node **p, struct node *new_node) 
{ 
	/* Missing code to handle base cases like *p is NULL */
	
	new_node->next = (*p)->next; 
	(*p)->next = new_node; 
	(*p) = new_node /* new is now rear */
	/* Note that p is again front and p->next is rear */
} 

/* p is pointer to rear. This function removes the front element and 
	returns the new front */
struct node *deQueue(struct node *p) 
{ 
	/* Missing code to handle base cases like p is NULL, 
		p->next is NULL,... etc */

	struct node *temp = p->next->next; 
	p->next = p->next->next; 
	return temp; 
	/* Note that p is again front and p->next is rear */
}

