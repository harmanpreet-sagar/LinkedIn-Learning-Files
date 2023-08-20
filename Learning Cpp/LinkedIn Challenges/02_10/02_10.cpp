// * Calculate an Average

// ? Calculate the average in an array of five integers.
// ? Just add the values and divide by 5.
// ? Store your results in a float variable
// ? Print the average on the screen

#include <iostream>

using namespace std;

int main(){
	int nums[5] = {1,23,32,24,337};
	float result; 
    // Write your code here
    result = nums[0] + nums[1] + nums[2] + nums[3] + nums[4];
    result /= 5;
    cout << "The average is " << result << endl;
	return (0);
}
