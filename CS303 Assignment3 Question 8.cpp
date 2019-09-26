#include <iostream>
#include <queue>
using namespace std;


// Question 8
void move_to_rear(queue<int> &q1){
    int value = q1.front();
    q1.pop();
    q1.push(value);
}

int main()
{
    queue<int> q1;
    
    q1.push(1);
    q1.push(2);
    move_to_rear(q1);
    cout << q1.front();

    return 0;
}

