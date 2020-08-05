#pragma once

#include <vector>
#include <iostream>
#include <iomanip>

std::vector<int> randomList(int size, int range) {

    std::vector<int> list;

    srand(time(NULL));

    for (int i = 0; i < size; i++) {

        list.push_back(rand() % range + 1);

    }

    return list;
}

void printList(std::vector<int> v) {

    for (int i = 0; i < v.size(); i = i + 15) {

        for (int j = 0; j < 15; j++) {

            std::cout << v[i + j] << std::setw(6);

        }

        std::cout << "\n";
    }
}

#include "search.cpp"
int linearSearch(std::vector<int> input, int searchNum);
int binarySearch(std::vector<int> input, int numElems, int value);

#include "sort.cpp"
void bubbleSort(std::vector<int>& v);
void selectionSort(std::vector<int>& v);