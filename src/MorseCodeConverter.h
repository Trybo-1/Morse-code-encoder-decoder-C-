
#ifndef MORSECODECONVERTER_H
#define MORSECODECONVERTER_H
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;

class MorseCodeConverter
{
    public:
        //Constructor
        MorseCodeConverter();
        //Function to encode a message into morse code
        string Encode(string msg);
        //Function to decode morse code into a message
        string Decode(string mc);

        //Accessors and Mutators
        string getMessage();
        string getMorseCode();
        void setMessage(string msg);
        void setMorseCode(string mc);

    private:
        //Innter state for message
        string message;
        //Inner state for morse code
        string morseCode;
        //An array representing all of the alpha numeric characters that can be converted to morse code
        string text[36] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M",
                       "N", "O", "P", "Q", "R", "S", "T", "U", "V", "X", "Y", "W", "Z",
                       "1", "2", "3", "4", "5", "6", "7", "8", "9", "0"};
        //Morse code corresponding to the letters in text
        string morse[36] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..",
                        ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.",
                        "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", ".----",
                        "..---", "...--", "....-", ".....", "-....", "--...", "---..",
                        "----.", "-----",};
        //Converts all characters to upper case
        string ToUpper(string msg);
};

#endif // MORSECODECONVERTER_H
