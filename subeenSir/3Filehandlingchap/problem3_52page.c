#include <stdio.h>

int main() {
    FILE *input_files[3], *output_file;
    char *file_names[] = {"math.txt", "bangla.txt", "english.txt"};
    char *output_file_name = "total_scores.txt";

    int roll, score, total_scores[10] = {0}; // Array to store total scores for each roll
    char line[80]; // Buffer to read each line

    // Open input files
    for (int i = 0; i < 3; i++) {
        input_files[i] = fopen(file_names[i], "r");
        if (input_files[i] == NULL) {
            printf("Error opening file: %s\n", file_names[i]);
            return 1;
        }
    }

    // Read each file line by line and sum scores
    for (int i = 0; i < 3; i++) {
        while (fgets(line, sizeof(line), input_files[i]) != NULL) {
            if (sscanf(line, "%d %d", &roll, &score) == 2) {
                total_scores[roll - 1] += score; // Accumulate scores for the roll number
            }
        }
        fclose(input_files[i]); // Close each file after processing
    }

    // Open the output file
    output_file = fopen(output_file_name, "w");
    if (output_file == NULL) {
        printf("Error opening output file: %s\n", output_file_name);
        return 1;
    }

    // Write summed scores to the output file
    fprintf(output_file, "Roll\tTotal Score\n");
    for (int i = 0; i < 10; i++) {
        fprintf(output_file, "%d\t%d\n", i + 1, total_scores[i]);
    }

    fclose(output_file);

    printf("Summed scores have been written to %s\n", output_file_name);
    return 0;
}
