#include <stdio.h>

int main() {
	
	int happy = 0;
	int keepgoing = 0;

	do {
		printf("On a scale from 1 to 10, how are you feeling?:");
		scanf("%i", &happy);

		if (happy <= 3) {
			printf("\nOh hey im sorry, maybe have a beer? Well that might not work but better than nothing right?\n");
		}
		else if (happy <= 5) {
			printf("\nNot feeling too hot huh? Maybe go for a walk? Idk im a computer\n");
		}
		else if (happy <= 7) {
			printf("\nFeeling average or slightly above huh? Well just keep going killer\n");
		}
		else if (happy <=9) {
			printf("\nHey feeling pretty good huh? Love to hear it, oh hey dont forget about that nose hair\n");
		}
		else {
			printf("\nLook at you feeling all amazing and stuff, glad youre not letting what they say about you get you down!\n");
		}
		
		printf("\nWanna try again? (Type 1 for yes and 0 for no):");
		scanf("%i", &keepgoing);

		while (keepgoing != 1 && keepgoing != 0) {
			printf("\nHey I said 1 or 0, try again: ");
			scanf("%i", &keepgoing);
		}

		printf("\n");

	} while (keepgoing == 1);

	printf("Hey thanks for chatting, see ya later!\n");

	return 0;
}

