
void (*f)(void * head)
{
    while (head->next != NULL)
        head = head->next; 
}

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    while (lst->next != NULL)
    {
        f(lst->content);
        lst = lst->next;
    } 
}