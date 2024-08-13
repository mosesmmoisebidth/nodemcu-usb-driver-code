#include <stdio.h>
#include <libusb-1.0/libusb.h>

int main() {
    libusb_context *ctx = NULL;
    int r;

    printf("Starting libusb initialization...\n");
    r = libusb_init(&ctx);
    if (r < 0) {
        fprintf(stderr, "Failed to initialize libusb. Error: %s\n", libusb_error_name(r));
        return 1;
    }
    
    printf("libusb initialized successfully.\n");

    // Cleanup
    libusb_exit(ctx);

    printf("libusb exited successfully.\n");

    return 0;
}
