#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	char wbuf[256] = "Je-Bomin 2020112084, Welcome to Embedded Software Class"; // string to write to device driver
	char rbuf[256]; // string buffer to read from device driver
 
	//Implemented using open, write and read functions
	int fd = open("/dev/DUMMY_DEVICE", O_RDWR); // open device
	if (fd < 0) {
		return -1; // fail open device
	}
	
	//write
	ssize_t write_data = write(fd, wbuf, sizeof(wbuf));
	if (write_data < 0){
		close(fd);
		return -1;
	}
	
	//read
	ssize_t read_data = read(fd, rbuf, sizeof(rbuf));
	if (read_data < 0){
		close(fd);
		return -1;
	}
  	rbuf[read_data] = '\0';
  	
  
	printf("Write data : %s\n", wbuf);
	printf("Read data : %s\n", rbuf);
	
	close(fd); // close device
	
	return 0;
}
