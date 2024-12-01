Smart Irrigation System Using Arduino
Project Overview
This repository contains the code and resources for a smart irrigation system built using an Arduino microcontroller. The project automates plant watering by monitoring soil moisture levels and activating a water pump accordingly. It also includes a manual override feature for flexible control, ensuring efficient water management.

Features
Automated Watering: Automatically activates the water pump based on soil moisture readings.
Manual Override: Allows users to manually control the water pump as needed.
Efficient Design: Powered by a 9V inbuilt battery for portability and reliable operation.
Arduino-Based: Leverages Arduino's simplicity and scalability to manage the system.
Optimized Water Usage: Conserves water by delivering it only when necessary.
Components Used
Arduino Uno
Soil Moisture Sensor
Relay Module
Water Pump
Manual Switch
9V Inbuilt Battery
Jumper Wires and Breadboard
Getting Started
Clone the Repository:

bash
Copy code
git clone https://github.com/CyberTycoon/Smart-Irrigation-system-with-Arduino.git
cd smart-irrigation-arduino
Upload the Code:

Open the Arduino IDE, upload the provided code to your Arduino Uno board.
Circuit Connections:

Connect components as shown in the circuit diagram (refer to the documentation or diagram in the repository).
Code Overview
The code in this repository controls the water pump based on the soil moisture sensor's readings.

Key Functions
digitalRead(sensorPin): Monitors soil moisture levels.
digitalWrite(relayPin, HIGH): Activates the water pump when soil is dry.
Manual Switch: Allows users to override automation for manual watering.
Usage Instructions
Power the system using the 9V inbuilt battery.
Monitor the soil moisture levels in real-time.
Use the manual switch for direct control of the pump if required.
Contributing
Contributions are welcome! Feel free to fork the repository, submit issues, or create pull requests for improvements.

License
This project is licensed under the MIT License.

Contact
For queries or collaborations, contact me at [Silasokanla2006@gmail.com].

With this system, you can efficiently manage irrigation, conserve water, and optimize plant health for sustainable agriculture or DIY IoT projects.



