#include <iostream>
#include <vector>

//Does a linear search for a number in a vector
int linearSearch(std::vector<int> input, int searchNum) {

    for (int i = 0; i <= input.size(); i++) {

        if (searchNum == input[i]) {

            return i + 1;

        }
    }
}

int binarySearch(std::vector<int> v, int value) {

    int first = 0,
        middle,
        last = v.size(),
        position = -1;
    bool found = false;

    while (!found && first <= last) {

        middle = (first + last) / 2;

        std::cout << middle << " ";

        if (v[middle] == value) {

            found = true;
            position = middle;

        } else if (v[middle] > value) {
            
            last = middle - 1;

        } else {

            first = middle + 1;

        }
    }
    return position;
}