# Arduino Based Smart Glove for Sign Language Translation

## About the Project

This project is a wearable smart glove developed to help in communication using hand gestures.

The glove uses flex sensors attached to the fingers to detect finger bending. When the fingers bend, the sensor values change. These values are read by an Arduino UNO and compared with predefined conditions to identify different gestures.

After recognizing the gesture, the corresponding message is sent wirelessly using an HC-05 Bluetooth module to an Android smartphone. The received message can be viewed using a Bluetooth Terminal application and can also be converted into speech.

## Objectives

- To design a wearable glove for detecting hand gestures.
- To use flex sensors to detect finger bending.
- To recognize predefined gestures using Arduino UNO.
- To send the recognized message wirelessly to an Android smartphone.
- To provide a simple and low-cost communication system.

## Components Used

- Arduino UNO
- Flex Sensors
- 10kΩ Resistors
- HC-05 Bluetooth Module
- Wearable Glove
- Connecting Wires
- 5V Power Supply
- Android Smartphone

## Software Used

- Arduino IDE
- Embedded C/C++
- Bluetooth Terminal App

## How It Works

1. The user performs a particular hand gesture using the glove.
2. The flex sensors detect the bending of the fingers.
3. The change in sensor values is read by the Arduino UNO.
4. Arduino compares the sensor values with predefined conditions.
5. The corresponding message is identified.
6. The message is sent through the HC-05 Bluetooth module.
7. The Android smartphone receives the message through a Bluetooth Terminal application.
8. The received message can be displayed as text or converted into speech.

## System Flow

```text
Hand Gesture
      ↓
Flex Sensors
      ↓
Voltage Divider
      ↓
Arduino UNO
      ↓
Gesture Recognition
      ↓
HC-05 Bluetooth
      ↓
Android Smartphone
      ↓
Bluetooth Terminal App
      ↓
Text / Speech Output

## Gesture Recognition

The system uses five flex sensors connected to the analog pins of the Arduino UNO.

The sensor values were observed during testing and suitable threshold conditions were used in the program for recognizing the predefined gestures.

The current program recognizes the following messages:

- I NEED FOOD
- I NEED WATER
- I NEED WASHROOM
- I NEED WALKING HELP
- I NEED SLEEP

## Circuit and Sensor Interfacing

Each flex sensor is connected with a 10kΩ resistor to form a voltage divider circuit.

When a finger bends, the resistance of the flex sensor changes. This produces a change in voltage, which is read by the analog input of the Arduino.

The five flex sensors are connected to:

A0 → Flex Sensor 1
A1 → Flex Sensor 2
A2 → Flex Sensor 3
A3 → Flex Sensor 4
A4 → Flex Sensor 5
Bluetooth Communication

The HC-05 Bluetooth module is used to send the recognized messages from the Arduino UNO to an Android smartphone.

The Arduino program uses SoftwareSerial for communication with the HC-05.

## Bluetooth Communication
Arduino UNO → HC-05 → Android Smartphone

The Android phone receives the message using a Bluetooth Terminal application.

## Arduino Program :

The Arduino program continuously reads the values from the five flex sensors.

The sensor values are then checked against predefined conditions. When a condition is satisfied, the corresponding message is sent through Bluetooth.

The program also displays the sensor readings and messages in the Serial Monitor during testing.

The Arduino code used for the project is available in this repository.

## Applications
Assistive communication
Sign language based communication
Wearable technology
Human-machine interaction
Healthcare and communication assistance
Communication support in places where sign language interpreters are not available
Advantages
Low-cost system
Portable and wearable
Real-time gesture detection
Wireless communication
Simple operation
Can be further improved with more gestures
Limitations
The system currently recognizes only predefined gestures.
Accuracy depends on proper sensor calibration.
Flex sensor readings can vary for different users.
HC-05 Bluetooth communication has a limited range.
More gestures would require additional programming and testing.
What We Learned

Through this project, we learned how to work with flex sensors and Arduino UNO for detecting hand movements.

We also learned about voltage divider circuits, analog sensor readings, gesture recognition using threshold values, and Bluetooth communication using the HC-05 module.

## Future Improvements
Add more gestures and messages.
Improve the accuracy of gesture recognition.
Make the glove more compact and comfortable.
Develop a dedicated Android application.
Use machine learning for more advanced gesture recognition.
Add accelerometer or gyroscope sensors for recognizing more complex hand movements.
Expand the system to recognize complete words and sentences.

## Project Photos

### Working Model:
<img width="913" height="610" alt="image" src="https://github.com/user-attachments/assets/b65e20eb-c00a-417b-b4e3-4435d57a3a06" />


### Circuit:
<img width="913" height="610" alt="image" src="https://github.com/user-attachments/assets/42cfaa82-8151-42d8-9d20-9ee900a2d4b0" />


### Project Demo:
https://drive.google.com/file/d/1FjKZ0SJms5V2U7cBymjax3CSICSl5dnH/view?usp=drivesdk

## Project Details

Project Name: Arduino Based Smart Glove for Sign Language Translation

Microcontroller: Arduino UNO

Input: Flex Sensors

Wireless Communication: HC-05 Bluetooth

Output Device: Android Smartphone

Programming: Embedded C/C++

Domain: Embedded Systems / Wearable Technology / Assistive Technology
