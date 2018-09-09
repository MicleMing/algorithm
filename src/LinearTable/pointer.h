typedef struct pNode *node;
typedef struct pNode {
  int element;
  node next;
} Node;

typedef struct llist *List;
typedef struct llist {
  node first;
} Llist;

node NewNode();

List initList();

bool ListEmpty(List L);

int ListRetrieve(int index, List L);

void InsertNode(int pos, int element, List L);

int DeleteNode(int pos, List L);

void PrintList(List L);
