#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& v) {

    //Testing condition
    bool unsorted = true;

    //Simple loop
    while(unsorted) {

        //First assume that vector is already sorted
        unsorted = false;

        //go through entire vector
        for (int i = 0; i < v.size()-1; i++) {

            //If any index of the vector is greater than
            //the value after it, switch their positions
            //then turn the loop back on with a true 
            //statement to continue to sort
            if (v[i] > v[i + 1]) {
                std::swap(v[i], v[i + 1]);
                unsorted = true;
            
            }
            //When if condition is not met, the list is 
            //sorted and the loop will not iterate, 
            //breaking out and returning a sorted vector
        }
    }
}

void selectionSort(std::vector<int>& v) {

    int minIndex, minValue;


    for (int i = 0 ; i < v.size(); i++) {

        /* This treats every index of the vector
        as if it is the 0th element and as if it
        is also the smallest (until disproven) */
        minIndex = i;
        minValue = v[i];

        /*This will look at every element 
        after our "0th" element*/
        for (int j = i + 1; j < v.size(); j++) {

            /*If we happen to find an element that we
            is smaller than our "0th" element, then
            we know assume that that element is the 
            smallest and continue the search from there*/
            if (v[j] < minValue) {

                minValue = v[j];
                minIndex = j;

            }
        }
        /*After we have gone through the entire vector,
        it is time to actually swap whatever smallest
        element we have with our fake "0th" element*/
        std::swap(v[minIndex], v[i]);

        /*We are now in the larger outer loop and assume
        the next element is the "0th" element and continue
        to search for an element smaller than our "0th".
        This works because we know that all element behind
        the fake "0th" MUST be smaller than out "0th"*/
    } 
}