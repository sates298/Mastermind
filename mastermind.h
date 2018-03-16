#define FIELDS 4
#define COLOURS 6

struct list{

  int code;
  struct list* next;

};
void add(struct);
void removeOne(struct list** pointer);
int power(int powerbase, int index);
void change(struct list* pointer, int* table);
