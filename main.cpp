#include <iostream>
#include <string>

using namespace std;

int CalculateSum(int* arr, int arrayLength) {
	int sum = 0;

	for (int i = 0; i < arrayLength; i++) {
		sum += arr[i];
	}

	return sum;
}

float CalculateAverage(int* arr, int arrayLength) {
	float average = (float)CalculateSum(arr, arrayLength) / arrayLength;

	return average;
}

void Sorting(int* arr, int arrayLength, int type) {
	int i, j, remember;

	for (i = 1; i < arrayLength; i++)
	{
		remember = arr[j = i];
		if (type == 1) {
			while (--j >= 0 && remember < arr[j]) {
				arr[j + 1] = arr[j];
			}
		}
		else if (type == 2) {
			while (--j >= 0 && remember > arr[j]) {
				arr[j + 1] = arr[j];
			}
		}

		arr[j+1] = remember;
	}
}


int main() {

	int input[5];
	int sortingType;

	cout << "Please enter 5 numbers: ";

	for (int i = 0; i < 5; i++) {
		cin >> input[i];
	}

	cout << "Please select the sorting method (Ascending order: 1, Descending order: 2): ";
	cin >> sortingType;

	float average = CalculateAverage(input, 5);
	int sum = CalculateSum(input, 5);
	Sorting(input, 5, sortingType);

	cout << "Sum: " << sum << endl;
	cout << "Average: " << average << endl;
	cout << "Sorting Result: ";

	for (int i = 0; i < 5; i++) {
		cout << input[i] << " ";
	}

	return 0;
}