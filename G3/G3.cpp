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

void fill_list_linked(Node_list* first_list, int size=10, int from=0, int to=10)
{
    for (int i = 0; i < size; i++)
    {
        first_list->val = rand() % to + from;
        cout << first_list->val << endl;    //just print val - delete later
        Node_list* next = first_list;
        Node_list* first_list = new Node_list;
        first_list = next->next;
    }
}

int main()
{
    //set random point
    srand(time(NULL));

    //initialization
    Node_list* first_list = new Node_list;

    fill_list_linked(first_list,1);

    return 0;
}