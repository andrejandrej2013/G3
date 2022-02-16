/*******************************************
Andrejs Griņevičs, ag21199
G3. Create function to delete all elements in list with value less than value of previous element.
Program created: 2022/02/11
*******************************************/

#include <iostream>

using namespace std;

struct Node_list {
    int val;
    Node_list* next;
    Node_list(int val) : val(val), next(nullptr) {}
    Node_list(int val, Node_list* next) : val(val), next(next) {}
};

int main()
{

    return 0;
}