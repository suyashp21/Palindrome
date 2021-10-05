/* Suyash Pandit, Palindrome project
October 2021
The user inputs a string, and the program determines
whether it is a palindrome (disregarding punctuation and capitalization)
*/

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
  char str[81];
  char str2[81];
  cin.get(str, 80); // user inputs string to check
  cin.get();
  int counter = 0;

  for (int i = 0; i < strlen(str); i++) {
    if (isdigit(str[i]) || islower(str[i]) || isupper(str[i])) {
      // only include alphanumeric chars, copy to str2
      str2[counter]=str[i]; // place char in next open space
      counter++;
    }
  }
  str2[counter] = '\0'; // add null character to end
  int len = strlen(str2);
  int position = 0;
  int pal = 1;
  
  /* Basic description of my algorithm:
  Start with the first character, compare with last character (accounting for null char at end).
  If they are the same, it may still be a palindrome, so keep going. Otherwise, you can stop.
  Characters will be converted to uppercase, so characters like "u" and "U" are the same.
  If we reach the middle of the cstring without any discrepancies, it is a palindrome.
   */
  
  while (position < (len-1-position)) {
    if (toupper(str2[position]) != toupper(str2[len-1-position])) {
      // not a palindrome, end loop
      pal = 0;
      break;
    }
    position++; // check next position
  }

  if (pal == 1) {
    cout << "Palindrome!" << endl;
  }
  if (pal == 0) {
    cout << "Not a palindrome!" << endl;
  }
  return 0;
}
# Palindrome
