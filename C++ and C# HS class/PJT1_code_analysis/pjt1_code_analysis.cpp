#include <iostream>// this include statement tells the compiler to put code from the header iostream into the program.  This header file stands for input/output stream.  It will either read characters from a command line or will provide the ability to print to the screen in the console.
using namespace std;//tells compiler to use a group of functions that are part of the standard library 
int main() {//the first function executed in the program
	for(int i=0;i< 8;i ++)//loop stating that (the integer i is equal to 0; run the block of code while i is less than 8; add 1 to i each time the block of code is run)
		if(i%2 == 0) cout<< i+1 << "\t";//if the integer i is divided by 2 and there is a remainder of 0, the compiler will output i plus 1
		else if(i %3 == 0) cout<< i*i << "\t";//if the integer is divided by 3 and there is a remainder of 0, the compiler will output i times i
		else if(i %5 == 0) cout<<2*i - 1 << "\t";//if the integer is divided by 5 and there is a remainder of 0, the compiler will output 2 times i minus 1
		else cout<< i << "\t";//if none of the above condiditions are true the compiler will output i
		cin.get();//alows the user to press enter to exit out of the program
}//closes the block of code
//OUTPUT: 1   1   3   9   5   9   7   7   
//1: when 0 is divided by 2 you get a remainder 0, so 0 plus 1 is 1
//1: none of the condidions are true for 1 so the compiler outputs 1
//3: when 2 is divided by 2 you get a remander 0, so 2 plus 1 is 3
//9: when 3 is divided by 3 you get a remainder 0, so 3 times 3 is 9
//5: when 4 is divided by 2 you get a remainder 0, so 4 plus 1 is 5
//9: when 5 is divided by 5, you get a remainder 0, so 5 times 2 minus 1 is 9
//7: shen 6 is divided by 2 you get a remainder 0, so 6 plus 1 is 7
//7: 7 non of the coditions are true for 7 so the compiler outputs 7
