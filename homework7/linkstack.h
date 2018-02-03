#define len 10
typedef int stackElemType; 

typedef struct link_stack
{
  struct link_stack *top;
  int data;
}linkstack;

void init_linkstack(linkstack *s);
bool is_empty(linkstack *s);
bool is_full(linkstack *s);

bool pop(linkstack *s,stackElemType *value);
void Push_Stack(linkstack * S,stackElemType value);

//¿®∫≈∆•≈‰
#define stack_SIZE 50

typedef char stackElemType;
typedef struct stack
{
  stackElemType data[stack_SIZE];
  int top;
}seqstack;

void Bracket(char *str);

void init_stack(seqstack *s);

bool push(seqstack *s,stackElemType value);

bool pop(seqstack *s,stackElemType *value);

bool Gettop(seqstack *s,stackElemType *value);

bool is_empty(seqstack *s);

bool match(char ch,char *str);