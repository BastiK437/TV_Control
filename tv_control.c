/**********************************************************************
* Project           : Smarthome control
*
* Author            : Bastian Krammer
*
* Date created      : 14_02_2019
*
* Purpose           : library to control my samsung tv
*
**********************************************************************/

//includes
//public libraries
#include <IRremote.h>

//private libraries
#include "tv_control.h"
#include "music_system.h"

//global variables
int int i = 0;
int senden[MAX_IR_LENGTH] = {0};
IRsend irsend;

void fSendIR(const unsigned int* sendVar){
  for (int i = 0; i < 67; i++) {
    senden[i] = pgm_read_word_near(sendVar + i);
  }
  irsend.sendRaw(senden, sizeof(senden) / sizeof(int), 40);
}

void frec() {
  fSendIR(rec);
}

void fleiser() {
  for (int i = 0; counter < 67; counter++) {
    senden[counter] = pgm_read_word_near(leiser + counter);
  }

  while (vcounter > 0) {
    irsend.sendRaw(senden, sizeof(senden) / sizeof(int), 40);
    vcounter--;
    delay(200);
  }
}

void flauter() {
  for (int i = 0; counter < 67; counter++) {
    senden[counter] = pgm_read_word_near(lauter + counter);
  }

  while (vcounter > 0) {
    irsend.sendRaw(senden, sizeof(senden) / sizeof(int), 40);
    vcounter--;
    delay(200);
  }
}

void fsource() {
  for (int i = 0; counter < 67; counter++) {
    senden[counter] = pgm_read_word_near(source + counter);
  }

  irsend.sendRaw(senden, sizeof(senden) / sizeof(int), 40);
}

void fmute() {
  for (int i = 0; counter < 67; counter++) {
    senden[counter] = pgm_read_word_near(mute + counter);
  }

  irsend.sendRaw(senden, sizeof(senden) / sizeof(int), 40);
}

void fguide() {
  for (int i = 0; counter < 67; counter++) {
    senden[counter] = pgm_read_word_near(guide + counter);
  }

  irsend.sendRaw(senden, sizeof(senden) / sizeof(int), 40);
}

void fsmarthub() {
  for (int i = 0; counter < 67; counter++) {
    senden[counter] = pgm_read_word_near(smarthub + counter);
  }

  irsend.sendRaw(senden, sizeof(senden) / sizeof(int), 40);
}


void fhoch() {
  for (counter = 0; counter < 67; counter++) {
    senden[counter] = pgm_read_word_near(hoch + counter);
  }

  irsend.sendRaw(senden, sizeof(senden) / sizeof(int), 40);

}

void frunter() {
  for (counter = 0; counter < 67; counter++) {
    senden[counter] = pgm_read_word_near(runter + counter);
  }
  irsend.sendRaw(senden, sizeof(senden) / sizeof(int), 40);
}

void frechts() {
  for (counter = 0; counter < 67; counter++) {
    senden[counter] = pgm_read_word_near(rechts + counter);
  }

  irsend.sendRaw(senden, sizeof(senden) / sizeof(int), 40);
}

void flinks() {
  for (counter = 0; counter < 67; counter++) {
    senden[counter] = pgm_read_word_near(links + counter);
  }
  irsend.sendRaw(senden, sizeof(senden) / sizeof(int), 40);
}

void ftools() {
  for (counter = 0; counter < 67; counter++) {
    senden[counter] = pgm_read_word_near(tools + counter);
  }

  irsend.sendRaw(senden, sizeof(senden) / sizeof(int), 40);
}

void fenter() {
  for (counter = 0; counter < 67; counter++) {
    senden[counter] = pgm_read_word_near(enter + counter);
  }

  irsend.sendRaw(senden, sizeof(senden) / sizeof(int), 40);

}

void fstop() {
  for (counter = 0; counter < 67; counter++) {
    senden[counter] = pgm_read_word_near(stopp + counter);
  }

  irsend.sendRaw(senden, sizeof(senden) / sizeof(int), 40);

  delay(500);
  flinks();
  delay(500);
  fenter();
}

void fplay() {
  for (counter = 0; counter < 67; counter++) {
    senden[counter] = pgm_read_word_near(play + counter);
  }
  irsend.sendRaw(senden, sizeof(senden) / sizeof(int), 40);
}

void fpause() {
  for (counter = 0; counter < 67; counter++) {
    senden[counter] = pgm_read_word_near(pause + counter);
  }

  irsend.sendRaw(senden, sizeof(senden) / sizeof(int), 40);
}

void freturn() {
  for (counter = 0; counter < 67; counter++) {
    senden[counter] = pgm_read_word_near(sreturn + counter);
  }

  irsend.sendRaw(senden, sizeof(senden) / sizeof(int), 40);
}

void finfo() {
  for (counter = 0; counter < 67; counter++) {
    senden[counter] = pgm_read_word_near(info + counter);
  }

  irsend.sendRaw(senden, sizeof(senden) / sizeof(int), 40);

}

void feins() {
  for (counter = 0; counter < 67; counter++) {
    senden[counter] = pgm_read_word_near(eins + counter);
  }

  irsend.sendRaw(senden, sizeof(senden) / sizeof(int), 40);

  fernseher = 1;
}
void fzwei() {
  for (counter = 0; counter < 67; counter++) {
    senden[counter] = pgm_read_word_near(zwei + counter);
  }


  irsend.sendRaw(senden, sizeof(senden) / sizeof(int), 40);

  fernseher = 1;
}

void fdrei() {
  for (counter = 0; counter < 67; counter++) {
    senden[counter] = pgm_read_word_near(drei + counter);
  }

  irsend.sendRaw(senden, sizeof(senden) / sizeof(int), 40);

  fernseher = 1;
}

void fvier() {
  for (counter = 0; counter < 67; counter++) {
    senden[counter] = pgm_read_word_near(vier + counter);
  }

  irsend.sendRaw(senden, sizeof(senden) / sizeof(int), 40);

  fernseher = 1;
}

void ffuenf() {
  for (counter = 0; counter < 67; counter++) {
    senden[counter] = pgm_read_word_near(fuenf + counter);
  }

  irsend.sendRaw(senden, sizeof(senden) / sizeof(int), 40);

  fernseher = 1;
}

void fsechs() {
  for (counter = 0; counter < 67; counter++) {
    senden[counter] = pgm_read_word_near(sechs + counter);
  }

  irsend.sendRaw(senden, sizeof(senden) / sizeof(int), 40);

  fernseher = 1;
}

void fsieben() {
  for (counter = 0; counter < 67; counter++) {
    senden[counter] = pgm_read_word_near(sieben + counter);
  }

  irsend.sendRaw(senden, sizeof(senden) / sizeof(int), 40);

  fernseher = 1;
}

void facht() {
  for (counter = 0; counter < 67; counter++) {
    senden[counter] = pgm_read_word_near(acht + counter);
  }

  irsend.sendRaw(senden, sizeof(senden) / sizeof(int), 40);

  fernseher = 1;
}

void fneun() {
  for (counter = 0; counter < 67; counter++) {
    senden[counter] = pgm_read_word_near(neun + counter);
  }
  irsend.sendRaw(senden, sizeof(senden) / sizeof(int), 40);

  fernseher = 1;
}

void fnull() {
  for (counter = 0; counter < 67; counter++) {
    senden[counter] = pgm_read_word_near(zero + counter);
  }

  irsend.sendRaw(senden, sizeof(senden) / sizeof(int), 40);

  fernseher = 1;
}

void fon() {
  for (counter = 0; counter < 67; counter++) {
    senden[counter] = pgm_read_word_near(onoff + counter);
  }

  irsend.sendRaw(senden, sizeof(senden) / sizeof(int), 40);
  fernseher = 1;
}

void foff() {
  if (fextt == 1) {
    fint();
    delay(1000);
    fextt = 0;
  }
  for (counter = 0; counter < 67; counter++) {
    senden[counter] = pgm_read_word_near(onoff + counter);
  }
  irsend.sendRaw(senden, sizeof(senden) / sizeof(int), 40);

  fernseher = 0;
}

void flaut() {
  ftools();
  delay(1000);
  if (ps == 0) {
    frunter();
    delay(500);
    fenter();
    delay(500);
    frunter();
    delay(500);
    fenter();
    delay(500);
    freturn();
  }

  if (ps == 1) {
    frunter();
    delay(500);
    frunter();
    delay(500);
    frunter();
    delay(500);
    frunter();
    delay(500);
    fenter();
    delay(500);
    frunter();
    delay(500);
    fenter();
    delay(500);
    freturn();
  }
}

void fext() {
  if (anlage == 0) {
    turnMusicsystemOn();
    delay(1000);
  }
  setVolume(20);
  delay(500);
  setSourceDVD();
  delay(500);
  flaut();

}

void fint() {
  flaut();
  if (anlage == 1) {
    turnMusicsystemOff();
    delay(200);
  }
}