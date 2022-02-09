// Array A without B.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void inputArr(int* arr, int size) {
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    }
}
void printArr(int* arr, int size) {
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
}
void SortAnoB(int* A, int m, int* B, int n, int*& C, int& NM) {
    int ii = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (A[i] == B[j]) {
                break;
            }
            else if (j == n - 1) {
                C[ii] = A[i];
                ii++;
            }
        }
    }
    NM = ii;
}
int main()
{
    int n = 1, m = 1;
    cout << "enter m, n" << endl;
    cin >> m >> n;
    int NM = m;
    int* A = new int[m];
    int* B = new int[n];
    int* C = new int[NM];
    inputArr(A, m);
    printArr(A, m);
    cout << endl;
    inputArr(B, n);
    printArr(B, n);
    SortAnoB(A, m, B, n, C, NM);
    cout << endl;
    printArr(C, NM);

    delete[]A;
    delete[]B;
    delete[]C;
}
