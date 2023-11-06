#include <stdio.h>
#include <stdlib.h>

typedef struct element
{
	char ch;
	struct element *next;
} element_t;

char get_counterpart(char symbol)
{
	switch (symbol)
	{
		case '(': return ')';
		case '{':return'}';
		case '[':return ']';
		default: return '\0';
	}
}

int main()
{
	char symbol;
	element_t *top = NULL;

	while (true)
	{
		if (scanf("%c", &symbol) != 1)
		{
			return 0;
		}

		if (symbol == '!')
		{
			break;
		}

		if (symbol == '(' || symbol == '{' || symbol == '[')
		{
			element_t* element = new element_t();
			element->ch = get_counterpart(symbol);
			element->next = top;

			top = element;

			continue;
		}

		if (symbol == ')' || symbol == '}' || symbol == ']')
		{
			if (top == NULL)
			{
				puts("NO");
				return 0;
			}

			if (symbol == top->ch)
			{
				top = top->next;
			}
			else
			{
				puts("NO");
				return 0;
			}
		}
	}

	puts(top == NULL ? "YES" : "NO");

	return 0;
}	
