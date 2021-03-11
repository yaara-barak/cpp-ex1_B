#include "snowman.hpp"
#include <iostream>
#include <array>
using namespace std;

namespace ariel{

 string snowman(long o){
  string string_input= to_string(o);//convert the input to string 
  string result;
  
  //to use string as a number we need to substract 48 from the string letter according to ASCII code + substract -1 for the count 1-8 and not 0-7
  const int CONVERT_TO_INTEGET =49;
  
  const int HAT_INDEX=0;
  const int NOSE_INDEX=1;
  const int LEFT_EYE_INDEX=2;
  const int RIGHT_EYE_INDEX=3;
  const int LEFT_HAND_INDEX=4;
  const int RIGHT_HAND_INDEX=5;
  const int TONOS_INDEX=6;
  const int BASE_INDEX=7;
  const int INPUT_LENGTH=8;


   if (string_input.length()!=INPUT_LENGTH){//if the number of digit us illeagal
    throw out_of_range("illeagal number of digits");}

   for (int i=0;i<INPUT_LENGTH;i++){//if the numbers are illeagal
     if (string_input[i]> '4' || string_input[i]< '1'){
      throw out_of_range("illeagal numberes");}
   } 

  //bild a strings arrays 
  const array <string, 4> hat {"\n       \n _===_ \n","\n  ___  \n ..... \n","\n   _   \n  /_\\  \n","\n  ___  \n (_*_) \n"};
  const array <string, 4> nose {",",".","_"," "};
  const array <string, 4> eye {".","o","O","-"};
  const array <string, 4> left_arm {"<","\\","/",""};
  const array <string, 4> right_arm {">","/","\\",""};
  const array <string, 4> toros {" : ","] [","> <","   "};
  const array <string, 4> base {" : ","\" \"","___","   "};

  //bild the snowman
   
    //add hat
    result+=hat.at(string_input[HAT_INDEX]-CONVERT_TO_INTEGET);

    if(string_input[LEFT_HAND_INDEX]=='2'){
       result= result+"\\";//if there is left arm up add arm
      }else{
        result+=" ";}
    
    //add eyes and nose
    result= result+ "("+ eye.at(string_input[LEFT_EYE_INDEX]-CONVERT_TO_INTEGET)+
         nose.at(string_input[NOSE_INDEX]-CONVERT_TO_INTEGET)+eye.at(string_input[RIGHT_EYE_INDEX]-CONVERT_TO_INTEGET) +")";
    
    if (string_input[RIGHT_HAND_INDEX]=='2'){
      result= result+"/";//if there is right arm up add arm
      }else{
        result+=" ";}  
    
    //end head
    result+="\n";

    if(string_input[LEFT_HAND_INDEX]=='2'){
      result+=" ";//if there is left arm up
      //add left hand
      }else {
        result+=left_arm.at(string_input[LEFT_HAND_INDEX]-CONVERT_TO_INTEGET);}

    if(string_input[LEFT_HAND_INDEX]=='2'||string_input[LEFT_HAND_INDEX]!='4'){//if there is no arms in the toros part 
      result=result+ "("+toros.at(string_input[TONOS_INDEX]-CONVERT_TO_INTEGET)+")";//add gaps
      //add toros
      }else {
        result=result+ " ("+toros.at(string_input[TONOS_INDEX]-CONVERT_TO_INTEGET)+") ";}

    if(string_input[RIGHT_HAND_INDEX]=='2'){
     result= result+" ";//if there is right arm up
      //add right hand 
      }else {
        result+=right_arm.at(string_input[RIGHT_HAND_INDEX]-CONVERT_TO_INTEGET);}  

    //and toros
    result+="\n"; 

  
    //add base
    result+=" ("+base.at(string_input[BASE_INDEX]-CONVERT_TO_INTEGET)+") ";

    return result; //return the snowman string
   }
}