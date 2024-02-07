#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <linux/serial.h>

int main() {
    int fd;
    struct termios2 tio;

    // Seri port dosyasını aç
    fd = open("/dev/ttyS0", O_RDWR);
    if (fd == -1) {
        perror("open");
        return 1;
    }

    // Seri port yapılandırma ayarlarını al
    ioctl(fd, TCGETS2, &tio);

    // Baud hızını ayarla
    tio.c_cflag &= ~CBAUD;
    tio.c_cflag |= BOTHER;
    tio.c_ispeed = 9600;
    tio.c_ospeed = 9600;

    // Yapılandırma ayarlarını uygula
    ioctl(fd, TCSETS2, &tio);

    // Seri port dosyasını kapat
    close(fd);

    return 0;
}
