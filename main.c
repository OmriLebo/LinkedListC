#include "linkedlist.h"

int main(void) {

    List *mylist = listCtor();

    insertNode(mylist, nodeCtor(10), 0);
    insertNode(mylist, nodeCtor(20), 1);
    insertNode(mylist, nodeCtor(30), 2);
    insertNode(mylist, nodeCtor(40), 3);

    printList(mylist);

    insertNode(mylist, nodeCtor(15), 1);

    printList(mylist);

    removeNodeByIndex(mylist, 1);

    printList(mylist);

    deleteList(mylist);

    return 0;
}
