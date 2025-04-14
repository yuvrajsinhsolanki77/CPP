#include <iostream>
using namespace std;

class Queue
{
private:

    int *arr;
    int capacity;
    int front;
    int rear;
    int count;

public:

    Queue(int capacity)
    {
        this->capacity=capacity;
        this->arr = new int[capacity];
        this->front=-1;
        this->rear = -1;
        this-> count = 0;        
    }

    ~Queue()
    {
        delete[] arr;
    }

    void enqueue(int element)
    {
        if (this->rear == this->capacity-1)
        {
            cout << "Queue is full..."<< endl;
        }

        else if (this->front == -1 && this->rear == -1)
        {
            this->front = 0;
            this->rear =0;
            this->arr[this->rear] = element;
            count++;
        }

        else 
        {
            rear++;
            this->arr[this->rear] = element;
            count++;
        }
        
        
    }

    void dequeue()
    {
        if (this->front == -1 && this->rear == -1)
        {
            cout << "Queue is already empty..."<<endl;
        }

        else if (this->front == this->rear)
        {
            this->front = -1;
            count--;
        }
        else
        {
            front++;
            count--;
        }
        
        
    }

    void get_front()
    {
        if (this->front == -1 && this->rear == -1)
        {
            cout << "Queue is empty..."<<endl;
        }
        else
        {
            cout << this->arr[this->front] << endl;
        }
        
    }

    void get_rear()
    {
        if (this->front == -1 && this->rear == -1)
        {
            cout << "Queue is empty..."<<endl;
        }
        else
        {
            cout << this->arr[this->rear] << endl;
        }
    }

    void display()
    {
        if (this->front == -1 && this->rear == -1)
        {
            cout << "Queue is empty..."<<endl;
        }
        else
        {
            for (int i = this->front; i <= this->rear; i++)
            {
            cout << this->arr[i] << endl;
            }
            
        }
    }

    void isEmpty()
    {
        if (this->front == -1 && this->rear == -1)
        {
            cout << "True"<<endl;
        }
        else
        {
            cout << "False" << endl;
        }
        
    }

    void isFull()
    {
        if (this->rear == this->capacity-1)
        {
            cout << "True"<<endl;
        }
        else
        {
            cout << "False" << endl;
        }
    }

    void size()
    {
        cout << "Size is: " << count << endl;
    }




};

int main()
{
    int value;
    cout << "Enter Capacity of Stack: ";
    cin >> value;
    Queue queue(value);
    int capacity;
    int element;
    int choice;


    do
    {
        cout << "-----------------------------------------------"<<endl;
        cout << "Press 0 to exit" << endl;
        cout << "Press 1 for Enqueue operation" << endl;
        cout << "Press 2 for Dequeue operation" << endl;
        cout << "Press 3 for Front operation" << endl;
        cout << "Press 4 for Rear operation" << endl;
        cout << "Press 5 for Display operation" << endl;
        cout << "Press 6 for isEmply operation" << endl;
        cout << "Press 7 for isFull operation" << endl;
        cout << "Press 8 for size operation" << endl;
        cout << "-----------------------------------------------"<<endl;
        

        cout << "Enter choice: "<<endl;
        cin>> choice;

        switch (choice)
        {
        case 0:
            break;

        case 1:
            cout << "Enter element: "<< endl;
            cin>> element;
            queue.enqueue(element);
            break;

        case 2:
            queue.dequeue();
            cout<<"element removed sucessfully!"<<endl;
            break;

        case 3:
            queue.get_front();
            break;

        case 4:
            queue.get_rear();
            break;

        case 5:
            queue.display();
            break;

        case 6:
            queue.isEmpty();
            break;

        case 7:
             queue.isFull();
            break;

        case 8:
            queue.size();
            break;
                    
        default:
            cout<<"INVALID!"<<endl;
        }
    } while (choice != 0);
    
    
    
    return 0;
}