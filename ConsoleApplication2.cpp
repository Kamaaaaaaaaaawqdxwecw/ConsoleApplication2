// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
 // This script reads employee data from an input file, calculates their updated salary based on a provided pay increase, 
 // and writes the output to a file.

# Function to calculate updated salary based on current salary and percent pay increase
def calculate_updated_salary(current_salary, pay_increase) :
    return current_salary * (1 + pay_increase / 100)

    # Main function
    def main() :
    input_file = "input_data.txt"   # Input file containing employee data(last name, first name, current salary, percent pay increase)
    output_file = "SalaryOut.txt"    # Output file to store updated salary data

    //Read data from input file
    with open(input_file, 'r') as file :
lines = file.readlines()

//Write updated salary data to output file
with open(output_file, 'w') as file :
for line in lines :
parts = line.strip().split(',')     # Splitting each line into parts based on comma
last_name = parts[0]
first_name = parts[1]
current_salary = float(parts[2])    # Converting current salary to float
pay_increase = float(parts[3].rstrip('%'))   # Converting pay increase to float and removing '%' sign
updated_salary = calculate_updated_salary(current_salary, pay_increase)   # Calculate updated salary
file.write(f"{first_name} {last_name} {updated_salary:.2f}\n")    # Writing output in specified format

if __name__ == "__main__":
main()