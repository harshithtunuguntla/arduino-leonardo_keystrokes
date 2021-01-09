# Sending keystrokes using Arduino Leonardo
This project is about sending keystrokes to computer using arduino leonardo via USB cable. This project uses an ultrasonic sensor to detect the entry of any person into the room and sends the signal to shift the tabs in the computer(Keystrokes used : ALT + TAB)

 ***Note :** Arduino Leonardo can be used for many other purposes (Keystroking, Controlling mouse movements, spamming text via keystroking etc..)*

## Components Required 

* Arduino Leonardo

* Ultrasonic Sensor

* Jumper Wires

## Prerequisites

* [Download Arduino IDE Software](https://www.arduino.cc/en/software)

* After succesful download install keyboard library as follows

     *click on Tools -> Manage Libraries...*

<p align="center">
  <img width="460" height="300" src="https://user-images.githubusercontent.com/53993341/104085324-7787bb00-5274-11eb-8094-f75042825938.jpg">
</p>


   *Search for keyboard*

<p align="center">
  <img width="1000" height="100" src="https://user-images.githubusercontent.com/53993341/104085328-82425000-5274-11eb-9a23-eaa6ae56ad32.jpg">
</p>


   *Select latest version and install*
<p align="center">
  <img width="560" height="400" src="https://user-images.githubusercontent.com/53993341/104085327-81a9b980-5274-11eb-8cd3-9c70f69a068d.jpg">
</p>





## Connections

* Connect Vin and GND pins of ultrasonic sensor to 5V and GND pins on arduino leonardo

* Connect Echo Pin, Trig Pin of ultrasonic sensor to pin 2, 3 on arduino leonardo respectively

<p align="center">
  <img width="460" height="300" src="https://user-images.githubusercontent.com/53993341/104085326-81112300-5274-11eb-9b0e-f51b61739e26.jpg">
</p>

   *Note : Please assume the board displayed as arduino leonardo*

## Code and Upload

Before uploading code select tools and select arduino leonardo board from Board and select port for arduino leonardo.
Now write and upload the code.

## References

For more Keyboard modifiers refer : [Keyboard Modifiers](https://www.arduino.cc/en/Reference/KeyboardModifiers)
