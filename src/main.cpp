// Author: Mr. BR. Greaves
#include <iostream>
#include <string>
#include "MorseCodeConverter.h"

using namespace std;

int main()
{
    string message= ""; //Stores the message to be encoded/decoded
    string result = "";  //Stores the result of encoding/decoding
    string encode = "";  //Storee the options asked to the user
    MorseCodeConverter converter;

    cout << "Would you like to encode message (Y) or decode (N)?";
    cin >> encode;


    if(!encode.compare("Y")){
        //Encoding into Morse Code
        cout << "Please enter message to encode:";
        cin.ignore(); //Clears the new line character out of input buffer so we can enter a whole line
        getline(std::cin, message);
        //Encode
        result = converter.Encode(message); //Encode the message using the MorseCodeConverter
        cout << "Encoded Message:" << endl
        << "_________________________________" << endl
        << result << endl
        << "_________________________________";
    }
    else{
        //Decoding Morse Code into Plain Text
        cout << "Please enter message to decode (use spaces in between Morse Code letters):";
        cin.ignore(); //Clears the new line character out of input buffer so we can enter a whole line
        getline(std::cin, message);
        //Decode
        result = converter.Decode(message); //Decode the message using the MorseCodeConverter
        cout << "Decoded Message:" << endl
        << "_________________________________" << endl
        << result << endl
        << "_________________________________";
    }
    return 0;
}
