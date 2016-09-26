extern struct Addr* head;
extern struct Addr* tail;
extern int cnt;

extern void add();
extern void print(struct Addr* where);
extern void printAll();
extern void removeAll();
extern void modify(struct Addr* where);
extern struct Addr* search(char *name);
