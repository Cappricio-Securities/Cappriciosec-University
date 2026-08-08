#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.delay(2000);

  DigiKeyboard.print("DigiSpark HID Demo");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.print("This is a harmless USB keyboard automation test.");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.print("Learn. Build. Test. Secure.");
}

void loop() {
  // Nothing to do
}
