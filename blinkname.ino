// ------------
// Blink my name
// ------------

int led = D7; 

void setup() {

	pinMode(led, OUTPUT);

}

void dot() {
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(led, LOW);
    delay(500);
}

void dash() {
    digitalWrite(led, HIGH);
    delay(1500);
    digitalWrite(led, LOW);
    delay(500);
}

void loop() {
    // Dit: 1 unit
	// Dah: 3 units
    // Intra-character space (the gap between dits and dahs within a character): 1 unit
    // Inter-character space (the gap between the characters of a word): 3 units
    // Word space (the gap between two words): 7 units
    
   	// ALEX = .- .-.. . -..-
	
	// A
	dot();
	dash();
	
	delay(1000);
	
	// L
	dot();
	dash();
	dot();
	dot();
	
	delay(1000);
	
	// E
	dot();
	
	delay(1000);
	
	//X
	dash();
	dot();
    dot();
    dash();
    
    // End of word
	delay(3000);

	// And repeat!
}
