//  Jed Jenner Comia
//  Prof. Radian
//  Design of Algorithms
//  Programming Assignment #2

//  Implement Shell Sort, Insertion Sort, Selection Sort, and Bubble Sort
//  Compare the performance (using time as a metric) for random arrays, increasing arrays, and decreasing arrays
//  In the bigger picture the inputs are arrays of sizes 100, 1000, 10000, 100000, and 1000000 and each has a version that is randomly generated, increasing, or decreasing.
//  The outputs are sorted lists but the outputs that we care about are the time that it spits out for runtime of each array to be sorted under those conditions


#include <iostream>
#include <vector>
#include <cstdlib>
#include <random>
#include <ctime>
#include <chrono>

using namespace std;
//chrono used to keep time
using namespace std::chrono;

//Prototypes for functions
void shellSort(vector<int>& arr);
void insertionSort(vector<int>& arr);
void selectionSort(vector<int>& arr);
void bubbleSort(vector<int>& arr);
vector<int> generateArr(int n, int type);

int main()
{
    cout << endl;

    srand(time(0));

    //Sizes 10^k where k = 2, 3, 4, 5, and 6
    int sizes[] = {100, 1000, 10000, 100000, 1000000};
    int numSizes = sizeof(sizes) / sizeof(sizes[0]);


    //Implentation of Shell Sort and Arrays
    cout << "\n------------------- Shell Sort -------------------\n";

    for (int i = 0; i < numSizes; i++)    
    {
        //Generates Arrays for Shell Sort
        int size = sizes[i];
        vector<int> randomArray = generateArr(size, 0);
        vector<int> increasingArray = generateArr(size, 1);
        vector<int> decreasingArray = generateArr(size, 2);

        //Time Starts
        auto startTime = high_resolution_clock::now();
        shellSort(randomArray);
        //Time Stops when algorithm ends
        auto stopTime = high_resolution_clock::now();
        //Calculates run time
        auto duration = duration_cast<nanoseconds>(stopTime - startTime);
        //Prints out results of Shell Sort Algorithm
        cout << "Shell Sort on random array of size " << size << ": " << duration.count() << " nanoseconds" << endl;

        //Time Starts
        startTime = high_resolution_clock::now();
        shellSort(increasingArray);
        //Time Stops when algorithm ends
        stopTime = high_resolution_clock::now();
        //Calculates run time
        duration = duration_cast<nanoseconds>(stopTime - startTime);
        //Prints out results of Shell Sort Algorithm
        cout << "Shell Sort on increasing array of size " << size << ": " << duration.count() << " nanoseconds" << endl;

        //Time Starts
        startTime = high_resolution_clock::now();
        shellSort(decreasingArray);
        //Time Stops when algorithm ends
        stopTime = high_resolution_clock::now();
        //Calculates run time
        duration = duration_cast<nanoseconds>(stopTime - startTime);
        //Prints out results of Shell Sort Algorithm
        cout << "Shell Sort on decreasing array of size " << size << ": " << duration.count() << " nanoseconds" << endl;

        cout << endl;
    }
    //Implentation of Insertion Sort and Arrays
    cout << "\n------------------- Insertion Sort -------------------\n";
    for (int i = 0; i < numSizes; i++)    
    {
        //Generates Arrays for Insertion Sort
        int size = sizes[i];
        vector<int> randomArray = generateArr(size, 0);
        vector<int> increasingArray = generateArr(size, 1);
        vector<int> decreasingArray = generateArr(size, 2);

        //Time Starts
        auto startTime = high_resolution_clock::now();
        insertionSort(randomArray);
        //Time Stops when algorithm ends
        auto stopTime = high_resolution_clock::now();
        //Calculates run time
        auto duration = duration_cast<nanoseconds>(stopTime - startTime);
        //Prints out results of Shell Sort Algorithm
        cout << "Insertion Sort on random array of size " << size << ": " << duration.count() << " nanoseconds" << endl;

        //Time Starts
        startTime = high_resolution_clock::now();
        insertionSort(increasingArray);
        //Time Stops when algorithm ends
        stopTime = high_resolution_clock::now();
        //Calculates run time
        duration = duration_cast<nanoseconds>(stopTime - startTime);
        //Prints out results of Shell Sort Algorithm
        cout << "Insertion Sort on increasing array of size " << size << ": " << duration.count() << " nanoseconds" << endl;

        //Time Starts
        startTime = high_resolution_clock::now();
        insertionSort(decreasingArray);
        //Time Stops when algorithm ends
        stopTime = high_resolution_clock::now();
        //Calculates run time
        duration = duration_cast<nanoseconds>(stopTime - startTime);
        //Prints out results of Shell Sort Algorithm
        cout << "Insertion Sort on decreasing array of size " << size << ": " << duration.count() << " nanoseconds" << endl;

        cout << endl;
    }

    //Implentation of Selection Sort and Arrays
    cout << "\n------------------- Selection Sort -------------------\n";
    for (int i = 0; i < numSizes; i++)    
    {
        //Generates Arrays for Selection Sort
        int size = sizes[i];
        vector<int> randomArray = generateArr(size, 0);
        vector<int> increasingArray = generateArr(size, 1);
        vector<int> decreasingArray = generateArr(size, 2);

        //Time Starts
        auto startTime = high_resolution_clock::now();
        selectionSort(randomArray);
        //Time Stops when algorithm ends
        auto stopTime = high_resolution_clock::now();
        //Calculates run time
        auto duration = duration_cast<nanoseconds>(stopTime - startTime);
        //Prints out results of Shell Sort Algorithm
        cout << "Selection Sort on random array of size " << size << ": " << duration.count() << " nanoseconds" << endl;

        //Time Starts
        startTime = high_resolution_clock::now();
        selectionSort(increasingArray);
        //Time Stops when algorithm ends
        stopTime = high_resolution_clock::now();
        //Calculates run time
        duration = duration_cast<nanoseconds>(stopTime - startTime);
        //Prints out results of Shell Sort Algorithm
        cout << "Selection Sort on increasing array of size " << size << ": " << duration.count() << " nanoseconds" << endl;

        //Time Starts
        startTime = high_resolution_clock::now();
        selectionSort(decreasingArray);
        //Time Stops when algorithm ends
        stopTime = high_resolution_clock::now();
        //Calculates run time
        duration = duration_cast<nanoseconds>(stopTime - startTime);
        //Prints out results of Shell Sort Algorithm
        cout << "Selection Sort on decreasing array of size " << size << ": " << duration.count() << " nanoseconds" << endl;

        cout << endl;
    }
    
    //Implentation of Bubble Sort and Arrays
    cout << "\n------------------- Bubble Sort -------------------\n";
    for (int i = 0; i < numSizes; i++)    
    {
        //Generates Arrays for Bubble Sort
        int size = sizes[i];
        vector<int> randomArray = generateArr(size, 0);
        vector<int> increasingArray = generateArr(size, 1);
        vector<int> decreasingArray = generateArr(size, 2);

        //Time Starts
        auto startTime = high_resolution_clock::now();
        bubbleSort(randomArray);
        //Time Stops when algorithm ends
        auto stopTime = high_resolution_clock::now();
        //Calculates run time
        auto duration = duration_cast<nanoseconds>(stopTime - startTime);
        //Prints out results of Shell Sort Algorithm
        cout << "Bubble Sort on random array of size " << size << ": " << duration.count() << " nanoseconds" << endl;

        //Time Starts
        startTime = high_resolution_clock::now();
        bubbleSort(increasingArray);
        //Time Stops when algorithm ends
        stopTime = high_resolution_clock::now();
        //Calculates run time
        duration = duration_cast<nanoseconds>(stopTime - startTime);
        //Prints out results of Shell Sort Algorithm
        cout << "Bubble Sort on increasing array of size " << size << ": " << duration.count() << " nanoseconds" << endl;

        //Time Starts
        startTime = high_resolution_clock::now();
        bubbleSort(decreasingArray);
        //Time Stops when algorithm ends
        stopTime = high_resolution_clock::now();
        //Calculates run time
        duration = duration_cast<nanoseconds>(stopTime - startTime);
        //Prints out results of Shell Sort Algorithm
        cout << "Bubble Sort on decreasing array of size " << size << ": " << duration.count() << " nanoseconds" << endl;

        cout << endl;
    }
    return 0;
}

//takes in vector type int array. when this is complete it does not return anything. This just signals for the timer to end.
// Generic shell sort algorithm

//Name: shellSort()
//Purpose: Sorts array using shell sort algorithm
//Input: An int array
//Output: A sorted int array
void shellSort(vector<int>& arr)
    {
        int n = arr.size();

        for (int gap = n / 2; gap > 0; gap /= 2)
        {
            for (int i = gap; i < n; i++)
            {
                int temp = arr[i];
                int j;
                for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                {
                    arr[j] = arr[j - gap];
                }
                arr[j] = temp;
            }
        }
    }

//takes in vector type int array. when this is complete it does not return anything. This just signals for the timer to end.
//General insertion sort algorithm

//Name: insertionSort()
//Purpose: Sorts array using insertion sort algorithm
//Input: An int array
//Output: A sorted int array
void insertionSort(vector<int>& arr)
    {
        int n = arr.size();

        for (int i = 1; i < n; i++)
        {
            int key = arr[i];
            int j = i - 1;

            while(j >= 0 && arr[j] > key)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }

//takes in vector type int array. when this is complete it does not return anything. This just signals for the timer to end.
// general selection sort algorithm

//Name: selectionSort()
//Purpose: Sorts array using selection sort algorithm
//Input: An int array
//Output: A sorted int array
void selectionSort(vector<int>& arr)
    {
        int n = arr.size();

        for (int i = 0; i < n -1; i++)
        {
            int minIndex = i;

            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] < arr[minIndex])
                {
                    minIndex = j;
                }
            }
            if (minIndex != i)
            {
                swap(arr[i], arr[minIndex]);
            }
        }
    }

//takes in vector type int array. when this is complete it does not return anything. This just signals for the timer to end.
// general bubble sort algorithm

//Name: bubbleSort()
//Purpose: Sorts array using bubble sort algorithm
//Input: An int array
//Output: A sorted int array
 void bubbleSort(vector<int>& arr)
    {
        int n = arr.size();
        bool swapped;

        for (int i = 0; i < n - 1; i++)
        {
            swapped = false;

            for (int j = 0; j < n - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                    swapped = true;
                }
            }
            if (!swapped)
            {
                break;
            }
        }
    }

    //this function takes in the size of the desired array and then generates an array based on the type that it takes in
    // if the input is 0 it makes a random array
    // if the input is 1 it makes an increasing array
    // if the input is neither it makes a decreasing array
    // creates arrays

    //Name: generateArr()
    //Purpose: generates an array given a size and style
    //Input: size and array type
    //Output: An increasing, decreasing, or random array
    vector<int> generateArr(int n, int type)
    {
        vector<int> arr(n);

        if (type == 0)
        {
            for (int i = 0; i < n; i++)
            {
                arr[i] = rand() % n;
            }
        }
        else if (type == 1)
        {
            for (int i = 0; i < n; i++)
            {
                arr[i] = i;
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                arr[i] = n - 1;
            }
        }
        return arr;    
    }