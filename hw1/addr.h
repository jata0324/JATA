typedef struct Addr{
	char name[10];
	char tel[15];
	char address[30];
	struct Addr* next;
}AD;

extern AD* ptr;
extern int cnt;
extern void addO(AD** ptr);
extern void list(AD* ptr);
