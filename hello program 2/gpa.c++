#include <iostream>

using namespace std;

void getTotalGQ(int numOfStudents, int gq[], int sum_gq[]) {
    // Initialize the sum_gq array with zeros
    for (int i = 0; i < 11; i++) {
        sum_gq[i] = 0;
    }

    // Count the number of students who scored 'x' marks in GQ
    for (int i = 0; i < numOfStudents; i++) {
        sum_gq[gq[i]]++;
    }
}

void getTotalGPA(int numOfStudents, float gpa[], int sum_gpa[]) {
    // Initialize the sum_gpa array with zeros
    for (int i = 0; i < 11; i++) {
        sum_gpa[i] = 0;
    }

    // Count the number of students who scored 'y' marks in GPA
    for (int i = 0; i < numOfStudents; i++) {
        int index = int(gpa[i] * 10); // Multiply by 10 and convert to int to get the index
        sum_gpa[index]++;
    }
}

void getTotalCount(int numOfStudents, int gq[], float gpa[], int count[][5]) {
    // Initialize the count array with zeros
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 5; j++) {
            count[i][j] = 0;
        }
    }

    // Count the number of students who scored 'x' marks in GQ and 'y' marks in GPA
    for (int i = 0; i < numOfStudents; i++) {
        int gqIndex = gq[i];
        int gpaIndex = int(gpa[i] * 10); // Multiply by 10 and convert to int to get the index
        count[gqIndex][gpaIndex]++;
    }

    // Compute the totals for each GQ score
    for (int i = 0; i < 11; i++) {
        int total = 0;
        for (int j = 0; j < 5; j++) {
            total += count[i][j];
        }
        count[i][4] = total;
    }

    // Compute the totals for each GPA score
    for (int j = 0; j < 5; j++) {
        int total = 0;
        for (int i = 0; i < 11; i++) {
            total += count[i][j];
        }
        count[11][j] = total;
    }
}

int main() {
    const int numOfStudents = 54;
    int roll[numOfStudents] = { /* Roll numbers of students */ };
    int gq[numOfStudents] = { /* Marks scored by students in GQ */ };
    float gpa[numOfStudents] = { /* Marks scored by students in GPA */ };

    int sum_gq[11]; // Array to store the total count of students for each GQ score
    int sum_gpa[11]; // Array to store the total count of students for each GPA score
    int count[12][5]; // Array to store the count of students for each combination of GQ and GPA score

    getTotalGQ(numOfStudents, gq, sum_gq);
    getTotalGPA(numOfStudents, gpa, sum_gpa);
    getTotalCount(numOfStudents, gq, gpa, count);

    // Print the results
    cout << "Total count of students for each GQ score:" << endl;
    for (int i = 0; i < 11; i++) {
        cout << "GQ " << i << ": " << sum_gq[i] << endl;
    }

    cout << endl;

    cout << "Total count of students for each GPA score:" << endl;
    for (int i = 0; i < 11; i++) {
        cout << "GPA " << i / 10.0 << ": " << sum_gpa[i] << endl;
    }

    cout << endl;

    cout << "Count of students for each combination of GQ and GPA score:" << endl;
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "GQ " << i << ", GPA " << j / 10.0 << ": " << count[i][j] << endl;
        }
    }

    return 0;
}
