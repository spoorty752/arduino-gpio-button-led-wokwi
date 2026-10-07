#define LED 13
#define BUTTON 2

void setup()
{
    pinMode(LED, OUTPUT);
    pinMode(BUTTON, INPUT_PULLUP);
}

void loop()
{
    int buttonState = digitalRead(BUTTON);

    if (buttonState == LOW)
    {
        digitalWrite(LED, HIGH);
        delay(1000);

        digitalWrite(LED, LOW);
        delay(1000);
    }
    else
    {
        digitalWrite(LED, LOW);
    }
}

