#include <iostream>
#include <queue>

using namespace std;

class Queue {
private:
    queue<int> q;

public:
    void push(int item) {
        q.push(item);
        cout << "Element " << item << " added to the queue.\n";
    }

    void pop() {
        if (q.empty()) {
            cout << "Queue is empty.\n";
        } else {
            cout << "Element " << q.front() << " removed from the queue.\n";
            q.pop();
        }
    }

    void display() {
        if (q.empty()) {
            cout << "Queue is empty.\n";
        } else {
            queue<int> temp = q;

            cout << "Elements in the queue: ";
            while (!temp.empty()) {
                cout << temp.front() << " ";
                temp.pop();
            }
            cout << endl;
        }
    }
};

int main() {
    Queue q;
    int choice, item;
    
    do {
        cout << "\n1. Add Element to Queue";
        cout << "\n2. Remove Element from Queue";
        cout << "\n3. Display Elements in Queue";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter element to add to the queue: ";
                cin >> item;
                q.push(item);
                break;

            case 2:
                q.pop();
                break;

            case 3:
                q.display();
                break;

            case 4:
                cout << "Exiting Program...";
                break;

            default:
                cout << "Invalid choice.\n";
        }
    } while (choice != 4);

    return 0;
}