#               <p align='center'>Sending keystrokes using Arduino Leonardo</p>
This project is about sending keystrokes to computer using arduino leonardo via USB cable. This project uses an ultrasonic sensor to detect the entry of any person into the room and sends the signal to shift the tabs in the computer(Keystrokes used : ALT + TAB)

 ***Note :** Arduino Leonardo can be used for many other purposes (Keystroking, Controlling mouse movements, spamming text via keystroking etc..)*

## Components Required 

* Arduino Leonardo

* Ultrasonic Sensor

* Jumper Wires

## Prerequisites

* [Download Arduino IDE Software](https://www.arduino.cc/en/software)

* After succesful download install keyboard library as follows

<p align="center"><i><b>click on Tools -> Manage Libraries...</b></i></p>

<p align="center">
  <img width="460" height="300" src="https://user-images.githubusercontent.com/53993341/104085324-7787bb00-5274-11eb-8094-f75042825938.jpg">
</p>


<p align="center"><i><b>Search for keyboard</i></b></p>

<p align="center">
  <img width="1000" height="100" src="https://user-images.githubusercontent.com/53993341/104085328-82425000-5274-11eb-9a23-eaa6ae56ad32.jpg">
</p>


<p align="center"><b><i>Select latest version and install</i></b></p>
<p align="center">
  <img width="760" height="300" src="https://user-images.githubusercontent.com/53993341/104085327-81a9b980-5274-11eb-8cd3-9c70f69a068d.jpg">
</p>




## Connections

* Connect Vin and GND pins of ultrasonic sensor to 5V and GND pins on arduino leonardo

* Connect Echo Pin, Trig Pin of ultrasonic sensor to pin 2, 3 on arduino leonardo respectively

<p align="center"><b><i>Note : Please assume the board displayed as arduino leonardo</b></i></p>
  
<p align="center">
  <img width="460" height="300" src="https://user-images.githubusercontent.com/53993341/104085326-81112300-5274-11eb-9b0e-f51b61739e26.jpg">
</p>



## Code and Upload

Before uploading code few changes need to be done

<p align="center"><b><i>Select tools and choose arduino leonardo board from Board</b></i></p>


<p align="center">
  <img width="460" height="300" src="https://user-images.githubusercontent.com/53993341/104086084-a6089480-527a-11eb-8516-0d8aa9c74838.jpg">
</p>


<p align="center"><b><i>Select port for arduino leonardo</b></i></p>


<p align="center">
  <img width="460" height="300" src="https://user-images.githubusercontent.com/53993341/104085995-e3205700-5279-11eb-8087-f4a6b897e7a0.jpg">
</p>

<p align="center"><b><i>Note : Port number may not be same</i></b></p>

Now connect the board to PC using USB cable and upload the code using Ctrl + U command or from the upload button on the top.

## References

You can change the keystrokes which are sent to keyboard. For more Keyboard modifiers refer [Arduino Keyboard Modifiers](https://www.arduino.cc/en/Reference/KeyboardModifiers)
