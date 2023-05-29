#include <iostream>
#include <queue>

using namespace std;

class CircularQueue {
private:
    int size;
    queue<int> q;

public:
    CircularQueue(int s) {
        size = s;
    }

    void enqueue(int item) {
        if (q.size() == size) {
            cout << "Queue is full.\n";
        } else {
            q.push(item);
            cout << "Element " << item << " added to the queue.\n";
        }
    }

    void dequeue() {
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
    int size, choice, item;
    cout << "Enter the size of the circular queue: ";
    cin >> size;

    CircularQueue cq(size);

    do {
        cout << "\n1. Enqueue Element";
        cout << "\n2. Dequeue Element";
        cout << "\n3. Display Elements in Queue";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter element to add to the queue: ";
                cin >> item;
                cq.enqueue(item);
                break;

            case 2:
                cq.dequeue();
                break;

            case 3:
                cq.display();
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