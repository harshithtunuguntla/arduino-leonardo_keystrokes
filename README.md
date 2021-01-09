# arduino-leonardo_keystrokes
This project is about sending keystrokes to keyboard via USB cable connected to arduino leonardo board at the other end

In this project I used ultrasonic sensor to detect the entry of any person into the room and used this signal to shift among the tabs in the computer(Keystrokes used : ALT + TAB)

 ***Note :** Arduino Leonardo can be used for many other purposes (Keystroking, Controlling mouse movements, spamming text via keystroking etc..)*

## Components Required 

-Arduino Leonardo

-Ultrasonic Sensor

-Jumper Wires

## Prerequisites

-Arduino IDE software [Download](https://www.arduino.cc/en/software)

-Install Keyboard Library after succesful download *(Click on tools -> Manage Libraries... -> Search for Keyboard -> Select Latest Version -> Install)*
![Screenshot displaying tools][tools.jpg]
![Screenshot displaying Library Manager][keyboard.jpg]
![Screenshot displaying select version and install][install.jpg]


## Connections

-Connect Vin and GND pins of ultrasonic sensor to 5V and GND pins on arduino leonardo

-Connect Echo Pin, Trig Pin of ultrasonic sensor to pin 2, 3 on arduino leonardo respectively

![Screenshot displaying connections][connections.jpg]
*Note : Please assume the board displayed as arduino leonardo*

## Code and Upload

Before uploading code select tools and select arduino leonardo board from Board and select port for arduino leonardo.
Now write and upload the code.

## References

For more Keyboard modifiers refer : [Keyboard Modifiers](https://www.arduino.cc/en/Reference/KeyboardModifiers)
