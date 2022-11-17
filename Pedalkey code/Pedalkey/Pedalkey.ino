#include <MIDI.h>

MIDI_CREATE_DEFAULT_INSTANCE();

int buttonApin = 2;  //footswitch A
int buttonBpin = 3;   //footswitch B
int buttonCpin = 22;   //footswitch C
int buttonDpin = 23;
int buttonEpin = 24;
int buttonFpin = 25;
int buttonGpin = 26;
int buttonHpin = 27;
int buttonIpin = 28;
int buttonJpin = 29;
int buttonKpin = 30;
int buttonLpin = 31;
int buttonMpin = 32;
int buttonNpin = 33;
int buttonOpin = 34;

int octave = 0;
int interval=12;

int key1 = 48 + (octave * interval);
int key2 = 49 + (octave * interval);
int key3 = 50 + (octave * interval);
int key4 = 51 + (octave * interval);
int key5 = 52 + (octave * interval);
int key6 = 53 + (octave * interval);
int key7 = 54 + (octave * interval);
int key8 = 55 + (octave * interval);
int key9 = 56 + (octave * interval);
int key10 = 57 + (octave * interval);
int key11 = 58 + (octave * interval);
int key12 = 59 + (octave * interval);
int key13 = 60 + (octave * interval);




void setup() {
  // put your setup code here, to run once:
MIDI.begin (); // MIDI START

pinMode(buttonApin, INPUT_PULLUP);
pinMode(buttonBpin, INPUT_PULLUP);
pinMode(buttonCpin, INPUT_PULLUP);
pinMode(buttonDpin, INPUT_PULLUP);
pinMode(buttonEpin, INPUT_PULLUP);
pinMode(buttonFpin, INPUT_PULLUP);
pinMode(buttonGpin, INPUT_PULLUP);
pinMode(buttonHpin, INPUT_PULLUP);
pinMode(buttonIpin, INPUT_PULLUP);
pinMode(buttonJpin, INPUT_PULLUP);
pinMode(buttonKpin, INPUT_PULLUP);
pinMode(buttonLpin, INPUT_PULLUP);
pinMode(buttonMpin, INPUT_PULLUP);
pinMode(buttonNpin, INPUT_PULLUP);
pinMode(buttonOpin, INPUT_PULLUP);


Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:

static bool buttonAvalueOld = HIGH;
static bool buttonBvalueOld = HIGH;
static bool buttonCvalueOld = HIGH;
static bool buttonDvalueOld = HIGH;
static bool buttonEvalueOld = HIGH;
static bool buttonFvalueOld = HIGH;
static bool buttonGvalueOld = HIGH;
static bool buttonHvalueOld = HIGH;
static bool buttonIvalueOld = HIGH;
static bool buttonJvalueOld = HIGH;
static bool buttonKvalueOld = HIGH;
static bool buttonLvalueOld = HIGH;
static bool buttonMvalueOld = HIGH;
static bool buttonNvalueOld = HIGH;
static bool buttonOvalueOld = HIGH;

key1 = 48 + (octave * interval);
key2 = 49 + (octave * interval);
key3 = 50 + (octave * interval);
key4 = 51 + (octave * interval);
key5 = 52 + (octave * interval);
key6 = 53 + (octave * interval);
key7 = 54 + (octave * interval);
key8 = 55 + (octave * interval);
key9 = 56 + (octave * interval);
key10 = 57 + (octave * interval);
key11 = 58 + (octave * interval);
key12 = 59 + (octave * interval);
key13 = 60 + (octave * interval);

//footswitches
bool buttonAvalueNew = digitalRead(buttonApin);
bool buttonBvalueNew = digitalRead(buttonBpin);
bool buttonCvalueNew = digitalRead(buttonCpin);
bool buttonDvalueNew = digitalRead(buttonDpin);
bool buttonEvalueNew = digitalRead(buttonEpin);
bool buttonFvalueNew = digitalRead(buttonFpin);
bool buttonGvalueNew = digitalRead(buttonGpin);
bool buttonHvalueNew = digitalRead(buttonHpin);
bool buttonIvalueNew = digitalRead(buttonIpin);
bool buttonJvalueNew = digitalRead(buttonJpin);
bool buttonKvalueNew = digitalRead(buttonKpin);
bool buttonLvalueNew = digitalRead(buttonLpin);
bool buttonMvalueNew = digitalRead(buttonMpin);
bool buttonNvalueNew = digitalRead(buttonNpin);
bool buttonOvalueNew = digitalRead(buttonOpin);

      
      
     if (octave > -3){
      if (buttonAvalueNew == LOW){
      Serial.print("ai me pico");
      octave = octave - 1;
      Serial.print(octave);
      while(digitalRead(buttonApin) == LOW){
      }
      }
    }
    else {
     if (octave = -3){
      octave = -3;
     }
    }
    



    
      if (octave < 3){
      if (buttonBvalueNew == LOW){
      Serial.print("ai me pico");
      octave = octave + 1;
      Serial.print(octave);
      while(digitalRead(buttonBpin) == LOW){
      }
      }
    }
    else {
     if (octave = 3){
      octave = 3;
     }
    }
      
      
      
      
      
      if (buttonCvalueNew != buttonCvalueOld){
      if (buttonCvalueNew == LOW){
      MIDI.sendNoteOn(key13, 127, 1);
      //Serial.println("Note F On");
      }
      else {
      MIDI.sendNoteOff(key13, 0, 1);
      //Serial.println("Note F Off");
      }
      buttonCvalueOld = buttonCvalueNew;
    }
    
      if (buttonDvalueNew != buttonDvalueOld){
      if (buttonDvalueNew == LOW){
      MIDI.sendNoteOn(key3, 127, 1);
      //Serial.println("Note G On");
      }
      else {
      MIDI.sendNoteOff(key3, 0, 1);
      //Serial.println("Note G Off");
      }
      buttonDvalueOld = buttonDvalueNew;
    }
    
      if (buttonEvalueNew != buttonEvalueOld){
      if (buttonEvalueNew == LOW){
      MIDI.sendNoteOn(key8, 127, 1);
      //Serial.println("Note A On");
      }
      else {
      MIDI.sendNoteOff(key8, 0, 1);
     // Serial.println("Note A Off");
      }
      buttonEvalueOld = buttonEvalueNew;
    }
      
      if (buttonFvalueNew != buttonFvalueOld){
      if (buttonFvalueNew == LOW){
      MIDI.sendNoteOn(key6, 127, 1);
      //Serial.println("Note A On");
      }
      else {
      MIDI.sendNoteOff(key6, 0, 1);
     // Serial.println("Note A Off");
      }
      buttonFvalueOld = buttonFvalueNew;
    }

      if (buttonGvalueNew != buttonGvalueOld){
      if (buttonGvalueNew == LOW){
      MIDI.sendNoteOn(key1, 127, 1);
      //Serial.println("Note A On");
      }
      else {
      MIDI.sendNoteOff(key1, 0, 1);
     // Serial.println("Note A Off");
      }
      buttonGvalueOld = buttonGvalueNew;
    }

      if (buttonHvalueNew != buttonHvalueOld){
      if (buttonHvalueNew == LOW){
      MIDI.sendNoteOn(key5, 127, 1);
      //Serial.println("Note A On");
      }
      else {
      MIDI.sendNoteOff(key5, 0, 1);
     // Serial.println("Note A Off");
      }
      buttonHvalueOld = buttonHvalueNew;
    }
   
      if (buttonIvalueNew != buttonIvalueOld){
      if (buttonIvalueNew == LOW){
      MIDI.sendNoteOn(key10, 127, 1);
      //Serial.println("Note A On");
      }
      else {
      MIDI.sendNoteOff(key10, 0, 1);
     // Serial.println("Note A Off");
      }
      buttonIvalueOld = buttonIvalueNew;
    }
     
      if (buttonJvalueNew != buttonJvalueOld){
      if (buttonJvalueNew == LOW){
      MIDI.sendNoteOn(key12, 127, 1);
      //Serial.println("Note A On");
      }
      else {
      MIDI.sendNoteOff(key12, 0, 1);
     // Serial.println("Note A Off");
      }
      buttonJvalueOld = buttonJvalueNew;
    }

      if (buttonKvalueNew != buttonKvalueOld){
      if (buttonKvalueNew == LOW){
      MIDI.sendNoteOn(key2, 127, 1);
      //Serial.println("Note A On");
      }
      else {
      MIDI.sendNoteOff(key2, 0, 1);
     // Serial.println("Note A Off");
      }
      buttonKvalueOld = buttonKvalueNew;
    }

      if (buttonLvalueNew != buttonLvalueOld){
      if (buttonLvalueNew == LOW){
      MIDI.sendNoteOn(key4, 127, 1);
      //Serial.println("Note A On");
      }
      else {
      MIDI.sendNoteOff(key4, 0, 1);
     // Serial.println("Note A Off");
      }
      buttonLvalueOld = buttonLvalueNew;
    }

      if (buttonMvalueNew != buttonMvalueOld){
      if (buttonMvalueNew == LOW){
      MIDI.sendNoteOn(key7, 127, 1);
      //Serial.println("Note A On");
      }
      else {
      MIDI.sendNoteOff(key7, 0, 1);
     // Serial.println("Note A Off");
      }
      buttonMvalueOld = buttonMvalueNew;
    }

      if (buttonNvalueNew != buttonNvalueOld){
      if (buttonNvalueNew == LOW){
      MIDI.sendNoteOn(key9, 127, 1);
      //Serial.println("Note A On");
      }
      else {
      MIDI.sendNoteOff(key9, 0, 1);
     // Serial.println("Note A Off");
      }
      buttonNvalueOld = buttonNvalueNew;
    }

      if (buttonOvalueNew != buttonOvalueOld){
      if (buttonOvalueNew == LOW){
      MIDI.sendNoteOn(key11, 127, 1);
      //Serial.println("Note A On");
      }
      else {
      MIDI.sendNoteOff(key11, 0, 1);
     // Serial.println("Note A Off");
      }
      buttonOvalueOld = buttonOvalueNew;
    }



delay(50);
}
