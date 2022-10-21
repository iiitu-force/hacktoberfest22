// Recursive C++ program to count the total
// number of vowels using recursion
#include<iostream>
using namespace std;

// Function to check the Vowel
bool isVowel(char ch)
{
	ch = toupper(ch);
	return (ch=='A' || ch=='E' || ch=='I' ||
						ch=='O' || ch=='U');
}

// to count total number of vowel from 0 to n
int countVovels(string str, int n)
{
	if (n == 1)
		return isVowel(str[n-1]);

	return countVovels(str, n-1) + isVowel(str[n-1]);
}

// Main Calling Function
int main()
{
	// string object
	string str = "data structures lab";
   

	// Total numbers of Vowel
	cout << countVovels(str, str.length()) << endl;
	return 0;
}
