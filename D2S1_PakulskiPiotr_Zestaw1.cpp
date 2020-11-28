#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
// Piotr Pakulski D2 S1 Zestaw 1.
int main()
{
    // 1. Iostream example and operators example.
    int value_1 = 1;
    int value_2 = 5;
    float result;
    cout << "Welcome everyone " << endl << "please find the results:" << endl;
    cout << "1+5=" << value_1 + value_2 << endl;
    cout << "1-5=" << value_1 - value_2 << endl;
    cout << "1*5=" << value_1 * value_2 << endl;
    result = (float)value_1/(float)value_2; // Need to cast to get non zero results.
    cout << "1/5=" << result << endl;

    // 2. Printf and scanf example.
    char first_name[20];
    char last_name[20];
    int age;

    printf("Please provide your first name:\n");
    scanf("%s", first_name);
    printf("Please provide your last name:\n");
    scanf("%s", last_name);
    printf("And your age is:\n");
    scanf("%d", &age);

    printf("\nAnd now your first name is %s and the last name %s and you are %d years old and you love C++\n", first_name, last_name, age);


    // 3. Logic and bit operators.
    int value_3, value_4;
    cout << "Please provide value 3:" << endl;
    cin >> value_3;
    cout << "Please provide value 4:" << endl;
    cin >> value_4;

    if (true) {
        cout << "Checking if TRUE is working fine? yes!" << endl;
    }

    cout << "TRUE anywhere in OR is always TRUE?" << endl;
    if (true || false || false) {
        cout << "Indeed" << endl;
    }

    cout << "AND requires all TRUE?" << endl;
    if (true && false && false) {
        cout << "NO?" << endl;
    }
    else {
        cout << "Indeed" << endl;
    }

    cout << "is " << value_3 << " >= " << value_4 << "?" << endl;
    if (value_3 >= value_4) {
        cout << "Yes it is" << endl;
    }
    else {
        cout << "Unfortunately it is not" << endl;
    }

    // Let's test some bool bit logic now.
    cout << "Are you ready to test bit logic?";
    cin.ignore();
    cin.get();
    // 0000 0000 0000 0011
    short value_bit_1 = 3;
    // 0000 0000 0000 0110
    short value_bit_2 = 6;

    short result_1 = value_bit_1 & value_bit_2;
    // 0000 0000 0000 0011
    // 0000 0000 0000 0110
    // 0000 0000 0000 0010 should be 3 then
    cout << value_bit_1 << " & "<< value_bit_2 <<" bit AND results: " << result_1 << endl;

    short result_2 = value_bit_1 | value_bit_2;
    // 0000 0000 0000 0011
    // 0000 0000 0000 0110
    // 0000 0000 0000 0111 should be 7 then
    cout << value_bit_1 << " | "<< value_bit_2 <<" bit OR results: " << result_2 << endl;

    // 4. Array and for loop.
    int size = 10;
    double some_array[size];
    cout << "Are you ready loop create an array?" << endl;
    cin.get();
    // Now lets fill up the array and print it.
    for (int i = 0; i < size; i++) {
        some_array[i] = i * 2 * i;
        cout << "array index " << i << " is " << some_array[i] << endl;
    }

    cout << "The end, thank you!";

    return 0;
}
