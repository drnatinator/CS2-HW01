//Nate Williams

using namespace std;
#include <iostream>
#include <ctime>
#include <string>

void ex02();
void ex03();
void ex04();
void ex05();
int doubler(int input);
int add(int number1, int number2);
int plus1(int input);
void exarray(int input[], int size);
void exarray2(int input[], int guess);

int main() {
	int pause;
	srand(time(NULL)); //initializes the RNG
	
	ex02(); //calls ex02
	ex03(); //calls ex03
	ex04(); //calls ex04
	ex05(); //calls ex05
	cin >> pause;

}

void ex02() {
	bool hasPassedTest = true;
	int x = rand() % 100 + 1, y = rand() % 100 + 1, numberOfShares, boxW, bookW;
	if (x >= y)
		cout << "\nx is greater than or equal to y\n";
	else
		cout << "\nx is not greater than or equal to y\n";
	cout << "Please input a number of shares:  ";
	cin >> numberOfShares;
	if (numberOfShares < 100)
		cout << "\nThere are fewer than 100 shares\n";
	else
		cout << "\nThere are more than 100 shares\n";
	cout << "Please enter a box width and a book width: ";
	cin >> boxW >> bookW;
	if ((boxW % bookW) == 0)
		cout << "\nThe books will fit nicely in the box\n";
	else
		cout << "\nThe books will not fit nicely in the box\n";

}

void ex03() {
	double area;
	char YorN, tab;
	string mailingAddress = "", empty;
	cout << "Please input the area of a square:  "; //prompts user to input the area of a square
	cin >> area;
	cout << "\nThe length of the diagonal of the square is  " << sqrt(2 * area) << endl; //calclates and outputs the length of the diagonal
	cout << "\nInput a y or n for yesor no:  ";
	cin >> YorN; //accepts either a y or an n
	if (YorN == 121) //uses the ASCII value for y; if this is not entered, the next line assume that it was an n
		cout << "yes";
	else
		cout << "no";
	tab = 9; //9 is the decimal ASCII value for tab
	cout << "\nPlease input your mailing address:  \n";
	getline(cin, mailingAddress); //this is here twice because the first time simply clears the buffer
	getline(cin, mailingAddress);
	std::string s1; //initializes string empty to the empty string
	cout << endl << endl;

	
}

void ex04() {
	cout << "Please input a number between 1 and 10:\n"; //asks for input
	int input=0, check=0, sum=0, output=0, rand1, rand2; //initialize the variables used in ex04

	
	while (check == 0) { //runs the loop until the user inputs a valid number
		cin >> input;
		
			
		if ((input >= 1) && (input <= 10)) { //if the user inputs a valid number, this ends the loop
			check++;
		}
		else
			cout << "Error: Please input a valid number\n";
		

		
		}
	while (check <= input) { // sums numbers up to the threshold
		sum += pow(check, 3); //raises numbers to the power of three and sums them
		check++;
	}
		cout << sum << endl; //outputs the result of the above
		check = 0;
		do { 
			cout << "*";
			check++;
		} while (check <= input-1); //outputs the number of stars that the user input
		cout << endl;
		for (check = 0; check <= 40; check++) { //loop terminates after check reaches 40
			if (check % 2 == 0) // checks to see if check is even
				cout << check << endl; //if check was even, outputs its value
		}
		output = doubler(input); //calls doubler
		cout << endl << endl << output << endl << endl;
		rand1 = rand() % 100 + 1;  //number between 1 and 100
		rand2 = rand() % 100 + 1;  //number between 1 and 100
		output = add(rand1, rand2); //calls add
		cout << output;
		output = plus1(input); //calls function, plus1
		cout << endl << endl << output << endl;

}

void ex05() {
	cout << "Please input five integers:\n"; //asks user for input
	int input[5]; //array for the user to input numbers
	int guess;
	for (int i = 0; i <= 4; i++)
		cin >> input[i];//takes the 5 inputs
	cout << endl << input[0] + input[1] + input[2] + input[3] + input[4]; // calculates the sum of the 5 inputs
	cout << endl << input[0] * input[1] * input[2] * input[3] * input[4]; // calculates the product of the 5 inputs
	exarray(input, 5);
	cout << "\nplease input one number:\n"; //prompts the user for their guess
	cin >> guess;
	exarray2(input, guess); //calls the function exarray2, which checks to see if the user's guess is in the array
	cout << endl;
}

int doubler(int input) { //doubles the number that is input
	int output = 2 * input;
	return output;


}

int add(int number1, int number2) { //adds the two inputs and returns the sum
	int output = number1 + number2;
	return output;
}

int plus1(int input) { // adds 1 to the input value, and returns the new value
	input++;
	return input;
}

void exarray(int input[], int size) {
	cout << endl << input[0] << endl << input[1] << endl << input[2] << endl << input[3] << endl << input[4]; //outputs the five slots of the array

}

void exarray2(int input[], int guess) { //checks to see if the user's input is in th array
	int check = 0;
	for (int i = 0; i <= 4; i++) { //increments through the five slots in the array
		if (guess == input[i])  // if the user's guess matches this slot, it increments check
			check++;
	}
	if (check != 0) //if check is greater than zero, outputs the message saying that the user's guess was in the array.
		cout << "\nThat number is in the array!\n";
	else
		cout << "\nThat number is not in the array.\n";
}
