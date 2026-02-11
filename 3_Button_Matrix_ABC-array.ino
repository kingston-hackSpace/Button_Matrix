// Define the number of rows and columns in the matrix
const int numRows = 2;
const int numCols = 3;

// Pins
const int rowPins[numRows] = {2, 3};
const int colPins[numCols] = {4, 5, 6};

// Store button labels
char buttonLabels[numRows][numCols] = {
  {'A', 'B', 'C'},
  {'D', 'E', 'F'}
};

int prevButtonState[numRows][numCols];

void setup() {
  Serial.begin(9600);

  for (int i = 0; i < numRows; i++) {
    pinMode(rowPins[i], OUTPUT);
    digitalWrite(rowPins[i], HIGH);
  }

  for (int i = 0; i < numCols; i++) {
    pinMode(colPins[i], INPUT_PULLUP);
  }
}

void loop() {
  for (int row = 0; row < numRows; row++) {
    digitalWrite(rowPins[row], LOW);

    for (int col = 0; col < numCols; col++) {
      int currentState = digitalRead(colPins[col]);

      // Detect falling edge (press)
      if (currentState == LOW && prevButtonState[row][col] == HIGH) {
        Serial.print("This is ");
        Serial.println(buttonLabels[row][col]);
      }

      prevButtonState[row][col] = currentState;
    }

    digitalWrite(rowPins[row], HIGH);
  }

  delay(50);  // debounce
}
