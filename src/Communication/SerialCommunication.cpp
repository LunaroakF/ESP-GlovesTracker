#include "SerialCommunication.h"

bool m_isOpen;

bool SerialCommunication::isOpen() { return m_isOpen; }

void SerialCommunication::start() {
	Serial.begin(SERIAL_BAUD_RATE);
	m_isOpen = true;
}

void SerialCommunication::output(char* data) {
	Serial.print(data);
	Serial.flush();
}

bool SerialCommunication::readData(char* input) {
	byte size = Serial.readBytesUntil('\n', input, 100);
	input[size] = NULL;
	return input != NULL && strlen(input) > 0;
}