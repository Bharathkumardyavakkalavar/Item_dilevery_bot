# Semi-Autonomous Iron Delivery Bot

## Overview

This project involves the development of a semi-autonomous iron delivery bot that navigates using sensor inputs. The bot detects obstacles using ultrasonic and infrared (IR) sensors and changes direction accordingly. It is also controlled via a Bluetooth app, which I created using the MIT App Inventor platform. The bot's body is fully 3D designed, giving it a custom and functional structure.

## Features

- **Obstacle Detection**: The bot uses ultrasonic and IR sensors to detect obstacles in its path.
- **Direction Change**: When an obstacle is detected, the bot automatically adjusts its course to avoid the obstruction.
- **Bluetooth Control**: The bot can also be manually controlled using a Bluetooth app, which provides a simple interface for movement.
- **3D Designed Body**: The entire body of the bot is custom-designed using 3D modeling software to ensure efficient component placement and mobility.

## Components Used

- **Ultrasonic Sensor**: Used to measure the distance to obstacles and trigger direction changes.
- **IR Sensor**: Detects proximity and further aids in obstacle avoidance.
- **Bluetooth Module**: Allows communication between the bot and the smartphone app.
- **Motors and Wheels**: For movement and directional control.
- **3D cute Body**: Custom-designed body to house all components securely.
- **Simple Bluetooth App**: Developed using [MIT App Inventor](http://appinventor.mit.edu/) to provide manual control over the bot's movements.

## How It Works

1. **Autonomous Mode**: 
   - The bot constantly scans its surroundings using the ultrasonic and IR sensors.
   - Upon detecting an obstacle, it calculates a new path to avoid the obstruction and continues towards the delivery target.
   
2. **Manual Mode**: 
   - Using the Bluetooth app, users can manually control the bot's movement (forward, backward, left, and right).
   - The app also displays the bot's distance from obstacles in real-time.

## 3D Design

The bot's body is designed in AutoDesk software, which was then 3D printed to accommodate all components. The design ensures that the sensors are properly positioned for optimal performance and that the wheels have adequate ground clearance for movement.

## Installation & Setup

1. **Hardware Setup**:
   - Assemble the bot using the 3D-printed parts and mount the ultrasonic and IR sensors at the front.
   - Connect the Bluetooth module and motors according to the wiring diagram provided in the `hardware/` folder.

2. **Software Setup**:
   - Upload the Arduino code in the `code/` directory to the bot's microcontroller.
   - Install the Bluetooth app on your Android device from the APK provided in the `app/` folder.

3. **Bluetooth Pairing**:
   - Pair your phone with the bot's Bluetooth module.
   - Use the app to switch between manual and autonomous mode.

## Future Enhancements

- **GPS Integration**: Adding GPS functionality for fully autonomous long-distance navigation.
- **Improved AI**: Using machine learning models to improve obstacle avoidance and path planning.
- **Mobile App Features**: Enhance the app with additional features like speed control and real-time sensor data logging.



