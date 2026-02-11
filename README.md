# Button Matrix with Arduino

### About buttons

If you are new using buttons with Arduino, start following [this tutorial](https://github.com/kingston-hackSpace/Push-button).

It will help you understand for further development. 

-------------------
# TUTORIAL

In this tutorial you will learn how to build a button matrix to trigger events with Arduino.

----
### HARDWARE

- Arduino UNO

- breadboard medium size (x2)

- buttons (x6)

- diodes 1N4007 (x6)

----
### WIRING

Caution! 

Diodes have polarity, meaning that their leads should be correctly connected. 
Please see [this image](https://github.com/kingston-hackSpace/Button_Matrix/blob/main/Diode.png) to wire your circuit correctly. 

See wiring diagram [here]

----
### CODE and INSTRUCTIONS

Explore the following code examples in the order provided below.

Upload the code to your Arduino board and test the buttons. Check the Serial Monitor. 

[EXAMPLE 1 : Simple Button - Matrix](https://github.com/kingston-hackSpace/Button_Matrix/blob/main/1_Simple_Button_Matrix.ino)
In this code, you will learn how to read button collums and rows.

[EXAMPLE 2 : Button Matrix ABC](https://github.com/kingston-hackSpace/Button_Matrix/blob/main/2_Button_Matrix_ABC.ino)
In this code, you will change the printing result from collums and rows to Letters. 

[EXAMPLE 3 : Button Matrix ABC-array](https://github.com/kingston-hackSpace/Button_Matrix/blob/main/3_Button_Matrix_ABC-array.ino)
This code improves the previous code (more efficient)


----
### How a Button Matrix Works

- Rows are scanned one at a time

- Columns are read as inputs

- This reduces pin usage

---
### Why We Use Diodes in a Button Matrix

When multiple buttons are pressed at the same time in a matrix, unwanted electrical paths can appear between rows and columns.
This problem is called ghosting.

Ghosting can make the Arduino detect:

- A button that was not pressed

- Multiple buttons when only two were pressed

- Incorrect row–column combinations

**What the diode does:**

A diode allows current to flow in only one direction.

By placing a diode in series with each button:

- Current cannot flow backwards through the matrix

- Rows stay electrically isolated from each other

- Only the intended row–column connection is detected

- This ensures that pressing multiple buttons does not create false signals.

*Important*: Diodes have polarity. They must be connected according to the wiring diagram.



----
# PENDING

(Arduino Uno may run out of pins/processing capacity if you add motors or LEDs. Use another board)

HOW TO TRIGGER AN LED MATRIX WITH OUR BUTTON MATRIX (pending)

HOW TO TRIGGER A SERVO MATRIX WITH OUR BUTTON MATRIX (pending)

