#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // maximum size of the list

struct List {
    int arr[MAX_SIZE];
    int size;
};

void initialize(List &list) {
    list.size = 0;
}

bool isFull(List &list) {
    return list.size == MAX_SIZE;
}

bool isEmpty(List &list) {
    return list.size == 0;
}

int search(List &list, int value) {
    for (int i = 0; i < list.size; i++) {
        if (list.arr[i] == value) {
            return i;
        }
    }
    return -1;
}

void add(List &list, int value) {
    if (isFull(list)) {
        cout << "List is full." << endl;
        return;
    }
    list.arr[list.size] = value;
    list.size++;
}

void remove(List &list, int value) {
    int index = search(list, value);
    if (index == -1) {
        cout << "Value not found." << endl;
        return;
    }
    for (int i = index; i < list.size - 1; i++) {
        list.arr[i] = list.arr[i + 1];
    }
    list.size--;
}

int main() {
    List myList;
    initialize(myList);
    add(myList, 1);
    add(myList, 2);
    add(myList, 3);
    cout << search(myList, 2) << endl; // prints 1
    remove(myList, 2);
    cout << search(myList, 2) << endl; // prints -1
    return 0;
}

