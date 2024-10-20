# Semi-Autonomous Iron Delivery Bot

## Overview

This project involves the development of a semi-autonomous iron delivery bot that navigates using sensor inputs. The bot detects obstacles using ultrasonic and infrared (IR) sensors and changes direction accordingly. It is also controlled via a Bluetooth app, which I created using the MIT App Inventor platform. The bot's body is custom-made by laser cutting acrylic sheets into small pieces, which are then assembled to form the structure.

## Features

- **Obstacle Detection**: The bot uses ultrasonic and IR sensors to detect obstacles in its path.
- **Direction Change**: When an obstacle is detected, the bot automatically adjusts its course to avoid the obstruction.
- **Bluetooth Control**: The bot can also be manually controlled using a Bluetooth app, which provides a simple interface for movement.
- **Laser-Cut Acrylic Body**: The entire body of the bot is custom-designed using laser-cut acrylic sheets to ensure efficient component placement and mobility.

## Components Used

- **Ultrasonic Sensor**: Used to measure the distance to obstacles and trigger direction changes.
- **IR Sensor**: Detects proximity and further aids in obstacle avoidance.
- **Bluetooth Module**: Allows communication between the bot and the smartphone app.
- **Motors and Wheels**: For movement and directional control.
- **Laser-Cut Acrylic Body**: Custom-designed body to house all components securely.
- **Simple Bluetooth App**: Developed using [MIT App Inventor](http://appinventor.mit.edu/) to provide manual control over the bot's movements.

## How It Works

1. **Autonomous Mode**: 
   - The bot constantly scans its surroundings using the ultrasonic and IR sensors.
   - Upon detecting an obstacle, it calculates a new path to avoid the obstruction and continues towards the delivery target.
   
2. **Manual Mode**: 
   - Using the Bluetooth app, users can manually control the bot's movement (forward, backward, left, and right).
   - The app also displays the bot's distance from obstacles in real-time.

## 3D Design

The bot's body design is documented in the `Virtual-Implementation.md` file, which details the structure and assembly of the laser-cut acrylic components to accommodate all necessary sensors and motors.

## Installation & Setup

1. **Hardware Setup**:
   - Assemble the bot using the laser-cut acrylic parts and mount the ultrasonic and IR sensors at the front.
   - Connect the Bluetooth module and motors according to the wiring diagram provided in the `hardware/` folder.

2. **Software Setup**:
   - Upload the Arduino code located in the `arduino_code.ino` file to the bot's microcontroller.
   - Install the Bluetooth app on your Android device from the APK provided as `Control4motors(1).apk`file .

3. **Bluetooth Pairing**:
   - Pair your phone with the bot's Bluetooth module.
   - Use the app to switch between manual and autonomous mode.

## Future Enhancements

- **GPS Integration**: Adding GPS functionality for fully autonomous long-distance navigation.
- **Improved AI**: Using machine learning models to improve obstacle avoidance and path planning.
- **Mobile App Features**: Enhance the app with additional features like speed control and real-time sensor data logging.



## Contact

For any queries or contributions, feel free to reach out to me through GitHub.




