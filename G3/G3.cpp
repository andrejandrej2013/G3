/*******************************************
Andrejs Griņevičs, ag21199
G3. Create function to delete all elements in list with value less than value of previous element.
Program created: 2022/02/11
*******************************************/

#include <iostream>

using namespace std;

//create linked list
struct Node_list
{
    int val;
    Node_list* next;
    Node_list() : val(0), next(nullptr) {}
    Node_list(int val) : val(val), next(nullptr) {}
    Node_list(int val, Node_list* next) : val(val), next(next) {}
};

void fill_linked_list(Node_list* first_list, int size=10, int from=0, int to=10)
{
    for (int i = 0; i < size; i++)
    {
        first_list->val = rand() % to + from;
        cout << "Value N" << i+1 << "\t: " << first_list->val << endl;    //just print val - delete later
        if (i== size-1) {
            break;
        }
        first_list->next = new Node_list;
        first_list = first_list->next;
    }
}
void clear_linked_link(Node_list* first_list)
{
    while (first_list != nullptr)
    {
        Node_list* intermediate_value = first_list->next;
        delete first_list;
        first_list = intermediate_value;
    }
}

int main()
{
    //set random point
    srand(time(NULL));

    //initialization
    Node_list* first_list = new Node_list;

    //fill linked list and get last
    fill_linked_list(first_list);


    //clear memory 
    clear_linked_link(first_list);

    return 0;
}