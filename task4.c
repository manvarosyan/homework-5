#include <stdio.h>
#include <stdlib.h>

int main() {
	char **arr;
	int i;

	arr = (char**) malloc(3 *sizeof(char *));
	if (arr == NULL){
        	printf("malloc failed");
	        return 1;
	}
        for (i = 0; i < 3; i++) {
                arr[i] = (char *)malloc(50 * sizeof(char));
                if (arr[i] == NULL) {
                        printf("Memory allocation for string %d failed!\n", i + 1);
                        return 1;
                }
        }

	printf("Enter 3 strings: ");
        for (i = 0; i < 3; i++) {
               scanf("%49s", arr[i]);
        }

	printf("Your strings: ");
        for (i = 0; i < 3; i++) {
		printf("%s ", arr[i]);
	}
	printf("\n");
	

	arr = (char **) realloc(arr, 5 * sizeof(char *));
	if (arr == NULL) {
		printf("realloc failed");
		return 1;
	}

	for (i = 3; i < 5; i++) {
		arr[i] = (char *) malloc(50 * sizeof(char));
		if (arr[i] == NULL) {
			printf("malloc failed");
			return 1;
		}
	}

	printf("Enter 2 more strings: ");
	for (int i = 3; i < 5; i++) {
		scanf("%49s", arr[i]);
	}

	printf("All strings: ");
	for (i = 0; i < 5; i++) {
		printf("%s ", arr[i]);
	}
	printf("\n");

	for (i = 0; i < 5; i++) {
		free(arr[i]);
	}

	free(arr);

	return 0;
}


