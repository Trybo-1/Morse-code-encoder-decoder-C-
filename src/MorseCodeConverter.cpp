
#include "MorseCodeConverter.h"
#include <vector>
#include <sstream>

using namespace std;

MorseCodeConverter::MorseCodeConverter()
{
    message = "";
    morseCode = "";
}
string MorseCodeConverter::Encode(string msg){
    message = ToUpper(msg); //Make the message upper case
    //Begin encoding message
    for(unsigned int i = 0; i < message.length(); i++){
        int index = -1; //Stores the index of the character in the text array oto be correlated to the morse array
        char temp = message.at(i); //Get the character out of the string
        //Search the text array for the index of the character
        for(int j = 0; j < 36; j++){
            if(text[j].at(0) == temp){ //Compare every character in text to the temp character
                index = j;
            }
        }
        if(index != -1){ //Make sure we have a valid character
            morseCode += morse[index] + " "; //Convert the character to morse code
        }
    }
    return morseCode;
}
string MorseCodeConverter::Decode(string mc){
    morseCode = mc;
    //Split into substrings
    vector<string> tokens;
    string token = "";
    istringstream tokenStream(morseCode);
    while (getline(tokenStream, token, ' ')) //Divide the morseCode up at ' ' (space)
    {
        tokens.push_back(token); //Add each substring to the vector
    }
    for(string element: tokens){ //Iterate through the vector (using a for each loop)
        int index = -1;
        for(int i = 0; i < 36; i++){ //Loop through all of the elements in morse to compare to the element
            if(!element.compare(morse[i])){ //Compare every set of characters in morse to the element characters
                index = i;
            }
        }
        if(index != -1){ //Make sure we have a valid character
            message += text[index]; //Convert to alpha numeric characters
        }
    }
    return message;
}

//Accessors and Mutators
string MorseCodeConverter::getMessage(){
    return message;
}
string MorseCodeConverter::getMorseCode(){
    return morseCode;
}
void MorseCodeConverter::setMessage(string msg){
    message = msg;
}
void MorseCodeConverter::setMorseCode(string mc){
    morseCode = mc;
}
string MorseCodeConverter::ToUpper(string msg){
    string temp = "";
    for(unsigned int i = 0; i < msg.length(); i++){
        temp += toupper(msg[i]); //Convert lower case characters to upper case
    }
    return temp;
}
