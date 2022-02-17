/*******************************************
Andrejs Griņevičs, ag21199
G3. Create function to delete all elements in list with value less than value of previous element.
Program created: 2022/02/11
*******************************************/

#include <iostream>
#include "node_list.h"

using namespace std;

void sort_linked_list(Node_list* list)
{
    if (list != nullptr) 
    {
        while (list->next != nullptr)
        {
            if (list->val > list->next->val)
            {
                Node_list* save_address = list->next->next;
                delete list->next;
                list->next = save_address;
            }
            else {
                list = list->next;
            }
        }
    }
}



int main()
{
    //set random point
    

    //initialization
    Node_list* first_list = new Node_list;

    //fill linked list and get last
    fill_linked_list(first_list);
    print_linked_list(first_list);

    cout << endl;

    sort_linked_list(first_list);
    print_linked_list(first_list);


    //clear memory 
    clear_linked_link(first_list);


    return 0;
}