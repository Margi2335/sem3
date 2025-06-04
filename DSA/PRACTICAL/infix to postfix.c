#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define size 20
struct stack
{
    char item[size];
    int top;
};
typedef struct stack stack;

void push(stack *s, char ch);
char pop(stack *s);
int prec(char operator);

void display(stack *p)
{
    if (p->top == -1)
    {
        printf("\nStack is underflow [Empty]");
    }
    else
    {
        printf("\nItem of stack\n");
        while (p->top != -1)
        {

            printf("%c  ", p->item[p->top--]);
        }
    }
}

bool is_operator(char ch);

int main()
{
    stack opstk;
    opstk.top = -1;

    char infix[20], postfix[20];
    printf("Enter the Expression: ");
    gets(infix);
    
    int i = 0, j = 0;
    for (i = 0; i < strlen(infix); i++)
    {
        char symb = infix[i];
        if (symb == ' ' || symb == '\t' || symb == '\n')
        {
            continue; // Skip whitespace
        }

        if (!(is_operator(symb)))
        {
            postfix[j++] = infix[i];
        }
        else
        {
            while (opstk.top != -1 && prec(opstk.item[opstk.top]) >= prec(infix[i]))
            {
                postfix[j++] = pop(&opstk);
            }
            push(&opstk, symb);
        }
    }
    while (opstk.top != -1)
    {
        postfix[j++] = pop(&opstk);
    }
    postfix[j] = '\0';

    printf("%s", postfix);
    return 0;
}

bool is_operator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
    {
        return true;
    }
    else
    {
        return false;
    }
}
void push(stack *s, char ch)
{
    if (s->top == size - 1)
    {
        printf("Stack is Full");
    }
    else
    {
        s->item[++s->top] = ch;
    }
}

char pop(stack *s)
{
    if (s->top == -1)
    {
        printf("Stack is Empty");
        return -1;
    }
    else
    {
        char x;
        x = s->item[s->top--];
        return x;
    }
}

int prec(char operator)
{
    switch (operator)
    {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    case '^':
        return 3;
    default:
        return -1;
    }
}
