#include <iostream>
#include <vector>
#include "BinaryInsertionSort.h"
#include "Node.h"
#include <cassert>
#include "LinkedList.h"
#include <ctime>
using namespace std;

int main() {
    int seed, length;
    cin >> seed >> length;
    srand(seed);
    LinkList list;

    vector<int> v(length);

    // generate vector of random integers
    for (int i = 0; i < v.size(); i++) {
        v[i] = rand() % 100;
    }

    // binary insertion sort and timer
    clock_t start_vecSort = clock();
    insertionSort(v, v.size());
    clock_t end_vecSort = clock();
    double time_vecSort = double(end_vecSort - start_vecSort) / CLOCKS_PER_SEC;

    // print out sorted list
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    // print time
    cout << endl << "Vector Sort Time: " << time_vecSort << endl << endl;



    // populating linked list
    for (int i = 0; i < length; i++) {
        list.append(rand() % 100);
    }

    // linked list sort and timer
    clock_t start_linkSort = clock();
    list.InsertionSort();
    clock_t end_linkSort = clock();
    double time_linkSort = double(end_linkSort - start_linkSort) / CLOCKS_PER_SEC;

    // print list and time
    list.print();
    cout << "Linked List Sort Time: " << time_linkSort << endl;

}