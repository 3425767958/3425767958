#include<stdio.h>
#include<stdlib.h>
#include"linklist.h"

tDataNode * FindCommand(tDataNode *head, char *cmd)
{
    if(head == NULL || cmd ==NULL)
    {
        return NULL;
    }
    tDataNode *p = head;
    while(p != NULL)
    {
        if(!strcmp(cmd,p->cmd))
        {
            return p;
        }
        p = p->next;
    }
    return NULL;
}

int ShowAllCmd(tDataNode *head)
{
    printf("Menu List:\n");
    tDataNode *p = head;
    while(p != NULL)
    {
        printf(" %s\t - %s\n",p->cmd,p->desc);
        p=p->next;
    }
    return 0;
}#include<stdio.h>
#include<stdlib.h>
#include"linklist.h"

tDataNode * FindCommand(tDataNode *head, char *cmd)
{
    if(head == NULL || cmd ==NULL)
    {
        return NULL;
    }
    tDataNode *p = head;
    while(p != NULL)
    {
        if(!strcmp(cmd,p->cmd))
        {
            return p;
        }
        p = p->next;
    }
    return NULL;
}

int ShowAllCmd(tDataNode *head)
{
    printf("Menu List:\n");
    tDataNode *p = head;
    while(p != NULL)
    {
        printf(" %s\t - %s\n",p->cmd,p->desc);
        p=p->next;
    }
    return 0;
}
