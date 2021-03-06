#ifndef __SETTINGS_H__
#define __SETTINGS_H__

#include <string.h>
#include <stdint.h>
#include <stdbool.h>

/*__SETTINGS_H_HEADERS__*/
/* -------------------------------------------------------------------------- */

/*__SETTINGS_H_ENUMS__*/
/* -------------------------------------------------------------------------- */

/*__SETTINGS_H_STRUCTS__*/
/* -------------------------------------------------------------------------- */

/*__SETTINGS_H_SETTINGS_STRUCT__*/
/* -------------------------------------------------------------------------- */

typedef struct {
    void (*read)(const uint32_t offset, void* data, const uint32_t data_size);
    void (*write)(const uint32_t offset, const void* data, const uint32_t data_size);
    void (*erase)(void);
    void (*save_request_cb)(void);
    void (*default_init_cb)(settings_t *settings);
    size_t page_size;
} settings_io_t;

/* -------------------------------------------------------------------------- */

void settings_init(settings_io_t *io);
void settings_reload(void);
void settings_save(void);
void settings_print(void);

/*__SETTINGS_H_PROTOTUPES__*/

#endif //__SETTINGS_H__
