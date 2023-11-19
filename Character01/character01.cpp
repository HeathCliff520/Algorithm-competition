//
// Created by 78436 on 2023/11/19.
//

#include "character01.h"
#include <cstdio>
void character01::Dynamicachieve() {
    int n,m;
    scanf("%d %d",&n,&m);
    node* head,*p,*now,*prev;
    //初始话头节点
    head =new node;
    head->data=1;head->next=NULL;
    now=head;
    for (int i = 2 ; i <= n; i++) {
        p=new node;
        p->data=i;
        p->next= NULL;
        now->next=p;
        now=p;
    }
    now->next=head;
    //解题逻辑
    now=head;
    prev=head;
    while((n--)>1){
        for (int i = 1; i <m; i++) {
            prev=now;
            now=now->next;
        }
        printf("%d ",now->data);
        prev->next=now->next;
        delete now;
        now=prev->next;
    }
    printf("%d",now->data);
    delete now;
}
