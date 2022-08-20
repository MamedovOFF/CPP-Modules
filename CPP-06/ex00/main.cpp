#include "Conversion.hpp"

int main (int argc, char **argv) {
    if (argc == 2) {
        Conversion convert(argv[1]);
    }
    return 1;
}