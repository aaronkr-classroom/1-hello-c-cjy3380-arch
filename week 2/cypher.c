#include <stdio.h>
#include<string.h>

void cypher(char* msg, int sft) {
	char ch;
	int i;

	for (i = 0; msg[i] != '\0'; ++i) {
		ch = msg[i];
		if (ch > 'A' && ch <= 'Z') {
			ch = ch + sft;

			if (ch > 'Z') {
				ch = ch - 'Z';
			}

			else if (ch < 'A') {
				ch = ch + 'Z' - 'A' + 1;
			}
			msg[i] = ch;
		}

		if (ch > 'a' && ch <= 'z') {
			ch = ch + sft;

			if (ch > 'z') {
				ch = ch - 'z';
			}

			else if (ch < 'a') {
				ch = ch + 'z' - 'a' + 1;
			}
			msg[i] = ch;
		}
	}
}

int main(void) {
	char message[100];
	printf("Enter a message: ");
	fgets(message, sizeof(message), stdin);

	int shift;
	printf("Enter shift value: ");
	scanf_s("%d", &shift);

	cypher(message, shift);

	printf("Encrypted!: %s", message);

	return 0;
}
