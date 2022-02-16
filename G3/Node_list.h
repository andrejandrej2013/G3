#pragma once
#include <iostream>

//structor of linked list
struct Node_list
{
    int val;
    Node_list* next;
    Node_list() : val(0), next(nullptr) {}
    Node_list(int val) : val(val), next(nullptr) {}
    Node_list(int val, Node_list* next) : val(val), next(next) {}
};

//fill linked list
void fill_linked_list(Node_list* first_list, int size = 10, int from = 0, int to = 10)
{
    srand(time(NULL));

    for (int i = 0; i < size; i++)
    {
        first_list->val = rand() % to + from;
        if (i == size - 1) {
            break;
        }
        first_list->next = new Node_list;
        first_list = first_list->next;
    }
}

//clear memory
void clear_linked_link(Node_list* first_list)
{
    while (first_list != nullptr)
    {
        Node_list* intermediate_value = first_list->next;
        delete first_list;
        first_list = intermediate_value;
    }
}