#include <iostream>

using std::cout; // cout will be the same as std::cout
using std::endl; // endl will be the same as std::endl
using std::cin;

void printing() {
    std::cout << "Hello, World!";
    std::cout << "Hello, World!" << std::endl;
    cout << "Hello, World!" << endl; // std is not required
    cout << "Integer: " << 3 << " Floating-point: " << 4.5 << endl;
    //system("pause"); //to see the print if you return something and you can't see it
}


void asking() {
    int i;
    cout << "Input an integer: ";
    cin >> i; // a 'using std::cin' at the beginning is assume
}


void ex4() {
    //unsigned int a = 23;
    int a = 23;
    int b = -5;

    cout << "a: " << a << " b: " << b << endl;

    if (a < b) { //error: different types compare (unsigned/signed)
        cout << "a less than b" << endl;
    }
}


void set23(int number) {
    number = 23;
}


void ex5() {
    int i = 10;

    set23(i);
    cout << "i now contains: " << i << endl;
}


void add(int a, int b, int& suma) { //passing reference by putting &
    suma = a + b; //modifies the variable suma by taking the address
}


int add2(int a, int b) { //passing value
    int suma;
    suma = a + b;
    return suma;
}


void example_suma() {
    int s; int a = 5; int b = 3; int suma=0;
    cout << "Suma: " << suma << endl;

    s = add2(a, b);
    add(a, b, suma);
    cout << "S: " << s << endl;
    cout << "Suma: " << suma << endl;
}


void ex6() {
    int v[4]; 
    v[0] = 2131; // first element
    v[3] = 112;  // last element

    int p[] = { 300, 123, 12 }; // 3-element array
}


void ex7() {
    char a[] = "abc"; // Character array with these four values:
                        // str[0]='a' str[1]='b' str[2]='c' str[3]=\0

    const unsigned int maxChars = 100; // const is used to define constants
    char str[maxChars];
    cin.getline(str, maxChars); // Reads at most 99 characters from console,
                                // or until return is pressed. The characters are
                                // stored in str, and \0 is added as the last
                                // element of the array
}


void ex9() {
    int* pI = nullptr;   // pI is a pointer to int
    float* pF = nullptr; // pF is a pointer to float
    int* a, b;   // a is a pointer to an int, b is an int (not a pointer)
    int* c, * d; // both c and d are pointers to int. Not recommended

    int* p;          // p is a pointer to an int
    int number = 35; // number is an int

    cout << "number: " << number << endl;

    p = &number; // copy to p the address of number. p now points to number
    *p = 555;    // write 555 in the address pointed by p, i.e., in number

    cout << "number: " << number << endl;
    cout << "*p: " << *p << endl;
    number = 101;
    cout << "number: " << number << endl;
    cout << "*p: " << *p << endl;


    //int* r;     // p is a pointer to an int
    //*p = -3400; // ERROR: It is unknown where p points (not initialized, so we don't known at what is pointing, it may have any address)

    void* j; // j is a pointer to anything. void is any type
    int i = 23;
    float f = 55.2f;
    j = &i;
    int i2 = *((int*)j);
    // void* (pointer to anything), and a casting is made to an int*
    //the asterisk at the left in *((int*) p) means that ((int*) p) must be dereferenced,
    //that is, going to the address stored in p, assuming that there is an integer there and obtaining the value of that integer
    j = &f;
    float f2 = *((float*)j);
}

void print_vector(int [], int ); //this is a prototype
void convert_negative(int vector[], int length);

// Write a program that defines two vectors with 6 integers. Initialize each of
// them with six numbers, half of them positive and half of them negative. The 
// program must have a function which receives a vector of integers and its length
// and sets to zero the elements with negative values. The main program must call 
// this function for both vectors. The values in both vectors must be printed before
// and after modifying them.
void ex10_1() {
    int length = 6;
    int v1[] = {1,2,3,-1,-2,-3};
    int v2[] = {4,5,6,-4,-5,-6};
    //BEFORE
    cout << "v1: " << std::endl;
    print_vector(v1, length);

    cout << "v2: " << std::endl;
    print_vector(v2, length);

    convert_negative(v1, length);
    convert_negative(v2, length);
    //AFTER
    cout << "v1: " << std::endl;
    print_vector(v1, length);

    cout << "v2: " << std::endl;
    print_vector(v2, length);

}


void convert_negative(int vector[], int length) {
    for (int i = 0; i < length; i++) {
        if (vector[i] < 0) {
            vector[i] = 0;
        }
    }
}


void print_vector(int vector[], int length) {
    for (int i = 0; i < length; i++) {
        cout << vector[i] << " ";
    }
    cout << std::endl;
}


void count_letters(char w[]) {
    int len = strlen(w);
    int vowels = 0;
    int consonants = 0;
    for (int i = 0; i < len; i++) {
        if (w[i] == 'a' or w[i] == 'e' or w[i] == 'i' or w[i] == 'o' or w[i] == 'u') { //'\0' 0 -- it's added to the end of every string a 0 to indicate the end
            vowels++;
        }
        else {
            consonants++;
        }
    }
    cout << "Vowels: "<< vowels;
    cout << "\nConsonants: " << consonants;
}

// Write a program that defines two strings and prints the number of vowels and the 
// number of consonants that they have. The program must use a function for computing
// these values for any string.
void ex10_2() {
    char w1[] = "abcdefghij";
    char w2[] = "klmnopqrstuvwxyz";

    cout << "Word 1: \n";
    count_letters(w1);
    cout << "\nWord 2: \n";
    count_letters(w2);
}



int main() {
    //printing();
    //asking();
    //ex4();
    //example_suma();
    //ex5();
    //ex7();
    //ex9();
    //ex10_1();
    ex10_2();
    return 0;
}