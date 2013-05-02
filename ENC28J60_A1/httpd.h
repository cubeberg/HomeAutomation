#ifndef HTTPD_H
#define HTTPD_H

#include <stdint.h>
#include <stdbool.h>

#define REQUEST_READ	1
#define REQUEST_WRITE	2
#define REQUEST_CONFIG	3
#define REQUEST_FILE	4

#define REQUEST_WRITE_OK	0
#define REQUEST_WRITE_ERR	1

struct httpd_state {
  uint8_t	idle_count;
  uint8_t	data_count;
  uint8_t	state;
  uint16_t		count;
  uint8_t	request_type;
  const char	*xmit_buf;
  uint16_t	xmit_buf_size;
  uint16_t	offset;
  bool		done;
};

void httpd_appcall(void);
void httpd_init(void);

#endif
