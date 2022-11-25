// BitManipulation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

unsigned int bitField = 33;

void BitPrint(int x)
{
    for (int i = 31; i >= 0; i--)
    {
        if (bitField & (1 << i))
        {
            std::cout << "1";
        }
        else
        {
            std::cout << "0";
        }
        if (i % 4 == 0 && i != 31)
        {
            std::cout << " ";
        }
    }
    std::cout << "\n";
}
void print(int x)
{
    BitPrint(bitField);
    std::cout << "\n\nbitField: " << std::dec << bitField << std::endl;
}
void turnOn(int n)
{
    bitField = bitField | 1 << n;
}
void TurnOFF(int n)
{
    bitField = bitField & ~(1 << n);
}
void Toggle(int n)
{
    bitField = bitField ^ 1 << n;
}
void Negate()
{
    bitField = ~bitField;
}
void LeftShift()
{
    bitField = bitField << 1;
}
void RightShift()
{
    bitField = bitField >> 1;
}

int main()
{
    int choice = 0;
    int index = 31;
    
    std::cout << "BIT MANIPULATION" << std::endl;
    std::cout << " " << std::endl;
    std::cout << "---------------------------------\n";
    std::cout << "bitField = " << bitField << std::endl;
    std::cout << "\nBits: ";
    print(index);
    std::cout << "----------------------------------\n";

    while (true)
    {
        std::cout << "\n1: Turn On\n" << "\n2: Turn Off\n" << "\n3: Toggle\n" << "\n4: Negate\n" << "\n5: Left Shift\n" << "\n6: Right Sift\n" << "\n7: Exit\n";

        std::cout << "\n\n Choose Operation: ";
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            std::cout << "\nChoose a bit index (0 - 32): ";
            std::cin >> index;
            turnOn(index);
            std::cout << "\nBits: ";
            print(index);
            break;
        case 2:
            std::cout << ("\nChoose a bit index (0 - 32): ") << std::endl;
            std::cout << "bit index: ";
            std::cin >> index;
            TurnOFF(index);
            std::cout << "Bits: ";
            print(index);
            break;
        case 3:
            std::cout << ("\nChoose a bit index (0 - 32): ") << std::endl;
            std::cout << "bit index: ";
            std::cin >> index;
            Toggle(index);
            std::cout << "Bits: ";
            print(index);
            break;
        case 4:
            std::cout << ("\nChoose a bit index (0 - 32): ") << std::endl;
            std::cout << "bit index: ";
            std::cin >> index;
            Negate();
            std::cout << "Bits: ";
            print(index);
            break;
        case 5:
            std::cout << ("\nChoose a bit index (0 - 32): ") << std::endl;
            std::cout << "bit index: ";
            std::cin >> index;
            LeftShift();
            std::cout << "Bits: ";
            print(index);
            break;
        case 6:
            break;
            std::cout << ("\nChoose a bit index (0 - 32): ") << std::endl;
            std::cout << "bit index: ";
            std::cin >> index;
            RightShift();
            std::cout << "Bits: ";
            print(index);
        case 7:
            std::cout << "Good bye!";
            return 0;
            break;
        default :
            std::cout << "Not a valid option, try again! " << std::endl;
            break;

        }
    }
}
