#define RED_LED     8
#define YELLOW_LED  9
#define GREEN_LED   10

// Traffic light states
enum TrafficState {
  RED,
  RED_YELLOW,
  GREEN,
  YELLOW
};

TrafficState currentState = RED;

void setup() {
  pinMode(RED_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
}

void loop() {
  switch (currentState) {

    case RED:
      digitalWrite(RED_LED, HIGH);
      digitalWrite(YELLOW_LED, LOW);
      digitalWrite(GREEN_LED, LOW);
      delay(5000);
      currentState = RED_YELLOW;
      break;

    case RED_YELLOW:
      digitalWrite(RED_LED, HIGH);
      digitalWrite(YELLOW_LED, HIGH);
      digitalWrite(GREEN_LED, LOW);
      delay(2000);
      currentState = GREEN;
      break;

    case GREEN:
      digitalWrite(RED_LED, LOW);
      digitalWrite(YELLOW_LED, LOW);
      digitalWrite(GREEN_LED, HIGH);
      delay(5000);
      currentState = YELLOW;
      break;

    case YELLOW:
      digitalWrite(RED_LED, LOW);
      digitalWrite(YELLOW_LED, HIGH);
      digitalWrite(GREEN_LED, LOW);
      delay(2000);
      currentState = RED;
      break;
  }
}
