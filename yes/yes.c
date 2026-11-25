#include <unistd.h>

int main(void) {
    while (1) {
        if (write(1, "yes\n", 4) <= 0) {
            break;
        }
    }
    return 0;
}
