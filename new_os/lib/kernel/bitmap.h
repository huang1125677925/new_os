#ifndef __LIB_KERNEL_BITMAP_H
#define __LIB_KERNEL_BITMAP_H
#include "global.h"
#define BITMAP_MASK 1
struct bitmap
{
    /* 
    遍历位图时，整体上以字节为单位，细节上以位为单位，
    此处位图的指针必须时单字节
    */
    uint32_t btmp_bytes_len;
    uint8_t* bits;
};

void bitmap_int(struct bitmap* btmp);
bool bitmap_scan_test(struct bitmap* btmp, uint32_t bit_idx);
int bitmap_scan(struct bitmap* btmp, uint32_t cnt);
void bitmap_set(struct bitmap* btmp, uint32_t bit_idx, int8_t value);
#endif


