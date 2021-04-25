//  LED light to blink your first name in Morse code
// My last name is DUO, and the Morse code should be
// dah-di-dit, break, di-di-dah, break, dah-dah-dah
// -.., break, ..-, break, break, ---

const pin_t MY_LED = D7;

SYSTEM_THREAD(ENABLED);

// The setup() method is called once when the device boots.
void setup()
{
	pinMode(MY_LED, OUTPUT);
}


//the dot this code make the led on for 300 than off for 300
void dot ()
{
    digitalWrite(MY_LED, HIGH);
    delay(500);
    digitalWrite(MY_LED, LOW);
    delay(500);
}

//the dash this code make the led on for 900 than off for 300
void dash () {
    digitalWrite(MY_LED, HIGH);
    delay(1500);
    digitalWrite(MY_LED, LOW);
    delay(500);
}


// the function for letter D
void LD()
{
    dash();
    dot();
    dot();
}

// the function for letter U
void LU()
{
    dot();
    dot();
    dash();
}

// the function for letter O
void LO()
{
    dash();
    dash();
    dash();
}

// the break space between letters
void LBreak ()
{
    delay(1000);
}

// the break space between words
void WBreak()
{
    delay(3000);
}

// The loop() method is called frequently.
void loop()
{
	// output letter D
	LD();
	LBreak();

	// output letter U
	LU();
	LBreak();

	// output letter O
	LO();
	WBreak();
}



