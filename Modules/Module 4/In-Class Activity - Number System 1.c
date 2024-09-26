#include <stdio.h>
#include <string.h>

int pwr(int num, int power) {
    if (power == 0) return 1;
    int total = num;
    for (int i = 1; i < power; i++) {
        total *= num;
    }

    return total;
}

int randomNumber = 1676;
char randomBinary[] = "1110100010";
char randomHex[] = "1F4";

int binary[32];
void decimalToBinary(int num) {
    int i = 0;
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int binaryToDecimal(char binary[]) {
    int sum = 0;
    int length = strlen(binary);
    for (int i = 0; i < length; i++) {
        if (binary[i] == '1') {
            sum += pwr(2, length - 1 - i);
        }
    }
    return sum;
}

int hexToDecimal(char hex[]) {
    int total = 0;
    for (int i = 0; i < strlen(hex); i++) {
        switch (hex[i]) {
            case 'A':
                total += 10 * pwr(16, strlen(hex) - i - 1);
                break;
            case 'B':
                total += 11 * pwr(16, strlen(hex) - i - 1);
                break;
            case 'C':
                total += 12 * pwr(16, strlen(hex) - i - 1);
                break;
            case 'D':
                total += 13 * pwr(16, strlen(hex) - i - 1);
                break;
            case 'E':
                total += 14 * pwr(16, strlen(hex) - i - 1);
                break;
            case 'F':
                total += 15 * pwr(16, strlen(hex) - i - 1);
                break;
            default:
                total += (hex[i] - 48) * pwr(16, strlen(hex) - i - 1);
                break;
        }
    }
    return total;
}


int main(void) {
    printf("%d Converted to Hexadecimal and Binary is: \n", randomNumber);
    printf("Hexadecimal : %X\n", randomNumber);
    printf("Binary : "); decimalToBinary(randomNumber);
    printf("\n\n");
    printf("%s Converted to decimal and hexadecimal is:\n", randomBinary);
    printf("Decimal : %d\n", binaryToDecimal(randomBinary));
    printf("Hexadecimal : %X\n", binaryToDecimal(randomBinary));
    printf("\n");
    printf("%s Converted to decimal and binary is:\n", randomHex);
    printf("Decimal : %d\n", hexToDecimal(randomHex));
    printf("Binary : "); decimalToBinary(hexToDecimal(randomHex));
    printf("\n");
    return 0;
}
