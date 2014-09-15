#if !defined PASSWORD_H
#define PASSWORD_H
#include "ReadFile.h"
#include "Keyboard.h"
#include "ListArray.h"
#include "ListArrayIterator.h"
#include "Text.h"
using namespace CSC2110;
//complete the includes


class Password
{
   private:
      ListArray<String> viable_words;  //the list of words that can still be the password
      ListArray<String> all_words;  //the original list of words
      int len;  //the length of the first word entered is stored to check that all subsequent words have the same length

      //a private helper method to report the number of character matches between two Strings
      int getNumMatches(String* curr_word, String* word_guess);

   public:
	  Password();
	  int bestGuess();

};

#endif