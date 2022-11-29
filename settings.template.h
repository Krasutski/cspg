#pragma once

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

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
    void (*read)(const size_t offset, void* data, const size_t size);
    void (*write)(const size_t offset, const void* data, const size_t size);
    void (*erase)(void);
    void (*save_request_cb)(void);
    void (*default_init_cb)(settings_t *settings);
    size_t page_size;
} settings_io_t;

/* -------------------------------------------------------------------------- */

void settings_init(const settings_io_t *io);
void settings_reload(void);
void settings_save(void);
void settings_print(void);

/*__SETTINGS_H_PROTOTYPES__*/
#ifdef __cplusplus
}
#endif /* __cplusplus */
