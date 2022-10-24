#ifndef _BINARYTREE_H_
#define _BINARYTREE_H_

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

// 노드의 데이터타입
typedef char DATA;

// 노드 : tree[ ]의 index로써 노드를 가리킴.
typedef struct _Node
{
    DATA data;
    struct  _Node* lchild;
    struct  _Node* rchild;

} * Node; // 왜 포인터?

Node makeRoot(DATA data);
Node makeLeftChild(Node cur, DATA data);
Node makeRightChild(Node cur, DATA data);

DATA getCurData(Node cur);
Node getLeftChild(Node cur);
DATA getLeftChildData(Node Cur);
Node getRightChild(Node cur);
DATA getRightChildData(Node cur);
int isTreeEmpty(Node root);

#endif // _BINARYTREE_H_