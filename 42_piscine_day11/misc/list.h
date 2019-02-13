#ifndef __LIST_H__
#define __LIST_H__

typedef struct s_list t_list;

struct s_list {
	char *str;
	t_list *next;
};

t_list *add_list(t_list *list, char *str);

#endif
