typedef struct aItem *ListItem;
typedef struct aItem {
  int value;
} AItem;

ListItem newListItem(int value);

typedef struct alist *List;
typedef struct alist {
  int n;
  int maxsize;
  ListItem *table;
} Alist;

List ListInit(int size);

int ListEmpty(List L);

int ListLength(List L);

int ListLocate(ListItem x, List L);

ListItem ListRetrieve(int k, List L);

void ListInsert(int k, ListItem x, List L);

ListItem ListDelete(int k, List L);

void PrintList(List L);
