#include <SoftwareSerial.h>
SoftwareSerial BT(10, 11);

String lastMsg = "";

void sendMsg(String msg) {
  if (msg != lastMsg) {
    Serial.println(msg);
    BT.println(msg);
    lastMsg = msg;
  }
}

void setup() {
  Serial.begin(9600);
  BT.begin(9600);
}

void loop() {
  int f1 = analogRead(A0);
  int f2 = analogRead(A1);
  int f3 = analogRead(A2);
  int f4 = analogRead(A3);
  int f5 = analogRead(A4);

  Serial.print("A0: "); Serial.print(f1);
  Serial.print(" A1: "); Serial.print(f2);
  Serial.print(" A2: "); Serial.print(f3);
  Serial.print(" A3: "); Serial.print(f4);
  Serial.print(" A4: "); Serial.println(f5);

  if (f1 < 900) {
    sendMsg("I NEED FOOD");
  }
  else if (f2 < 950) {
    sendMsg("I NEED WATER");
  }
  else if (f3 < 900) {
    sendMsg("I NEED WASHROOM");
  }
  else if (f4 < 910) {
    sendMsg("I NEED WALKING HELP");
  }
  else if (f5 < 930) {
    sendMsg("I NEED SLEEP");
  }
  else {
    sendMsg("NO RESPONSE");
  }

  delay(2000);
}
