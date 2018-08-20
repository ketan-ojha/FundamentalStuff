#include <iostream>
#include <new>
using namespace std;

int TOP=-1;
void insert(int arr[],int size)
{   
    int val;
    if(TOP==size-1)
    {
        cout<<"OVERFLOW: stack is full"<<endl;
    }
    else
    {
        TOP++;
        cout<<"Enter Value: ";
        cin>>val;
        arr[TOP]=val;
    }
}
void del(int arr[],int size)
{   
    if(TOP==-1)
    {
        cout<<"UNDERFLOW: Stack Empty!"<<endl;
    }
    else
    {
        TOP--;
    }

}
void display(int arr[], int size)
{   
    if(TOP==-1)
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
        for (int i = 0; i < TOP + 1; i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    
}
int main()
{   
    int size,option;
    cout<<"Enter the Size of stack: ";
    cin >> size;
   
    //    int arr[20];

    int *arr = new int[size];
    while(1)
    {
        cout << "\n============MENU============" << endl;
        cout << "1)Insert\n2)Delete\n3)Display\n4)EXIT\n";
        cin >> option;
        switch (option)
        {
        case 1:
            insert(arr, size);
            break;
        case 2:
            del(arr, size);
            break;
        case 3:
            display(arr, size);
            break;
        case 4:
            return (1);
            break;
        default:
            cout << "Enter Valid Option.";
            break;
        }
    }
    
    return 0;
}
