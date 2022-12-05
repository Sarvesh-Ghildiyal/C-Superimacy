/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 15:16:57 by jterrazz          #+#    #+#             */
/*   Updated: 2019/07/22 11:18:09 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include<stdio.h>


typedef struct node{
    int data;
    struct node *next;
}node;
node *head,*ptr;

void insert_first(int value)
{
    ptr=(node *)malloc(sizeof(node));
    if(ptr==NULL){
        printf("Overflow condition\n");
        return;
    }
    ptr->data=value;
    ptr->next=head;
    head=ptr;
}

int main()
{
    insert_first(5);
	insert_first(6);
	node *temp=head;
    
    while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
    }
    node *t=head->next;
    printf("%d",t->data);
    free(t);
     node *prev=head;
    while(prev!=NULL){
     printf("%d ",prev->data);
     prev=prev->next;}
}
