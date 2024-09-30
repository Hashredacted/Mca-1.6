#include <iostream>
using namespace std;

int main() {
    char str1[] = "Hello ";
    char str2[] = "World!";

    // Calculate the total length of the concatenated string
    int len1 = 0, len2 = 0;
    while (str1[len1] != '\0') len1++;
    while (str2[len2] != '\0') len2++;

    // Create a new char array to store the result
    char* result = new char[len1 + len2 + 1]; // +1 for null terminator

    // Use pointers to copy the strings
    char* ptr = result;
    for (int i = 0; i < len1; i++) {
        *ptr = str1[i];
        ptr++;
    }
    for (int i = 0; i < len2; i++) {
        *ptr = str2[i];
        ptr++;
    }
    *ptr = '\0'; // Add null terminator

    // Print the result
	cout << result << std::endl;

    // Deallocate memory
    delete[] result;

    return 0;
}
