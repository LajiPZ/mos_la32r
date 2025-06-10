#ifndef __SD_H__
#define __SD_H__


typedef struct {
    uint32_t paddr;
    uint16_t length;
    uint16_t attribute;
} adma2_desc_entry;

#define SDREG(reg) (*((volatile uint16_t *)(KSEG1 + reg)))
void sd_init();
void sd_send_cmd(int index, uint16_t argh, uint16_t argl, int *res);

#endif 