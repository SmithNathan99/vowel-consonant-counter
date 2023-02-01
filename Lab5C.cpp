/* Author:      Nathan Smith (nathansmith11@my.unt.edu)
   Date: 03/02/2022
   Instructor: Dr. Pradhumna Shrestha
   Description: This program will count the number of vowels and consonants in a user-enterd string.
 */

#include<iostream>
#include<string>

using namespace std;
int main()
{
    // declare string
    string str;

    // initialize counters
    int vowel = 0;
    int cons = 0;

    // prompt for input string
    cout << "Enter a string : ";
    getline(cin, str);

    // loop through all characters
    for(int i = 0; i < str.length(); i++)
    {
        // check for upper case vowel
        if(str.at(i) == 'A' || str.at(i) == 'E' || str.at(i) == 'I' || str.at(i) == 'O' || str.at(i) == 'U') {
            vowel++;
	}

        // check for lower case vowel
        else if(str.at(i) == 'a' || str.at(i) == 'e' || str.at(i) == 'i' || str.at(i) == 'o' || str.at(i) == 'u'){
            vowel++;
	}

        // otherwise consonant
        else {
            cons++;
	}

    }
    // print the result
    cout << "Count of vowels : " << vowel << endl;
    cout << "Count of consonants : " << cons << endl;
    return 0;
}
