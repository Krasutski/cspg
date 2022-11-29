# CSPG
C Settings Python Generator


This tool generate C code form JSON template and provide interfaces described in JSON file


Interface definition:
```
{
    "out_c_file": "./../../src/settings/settings.c",
    "out_h_file": "./../../src/settings/settings.h",
    "in_json_file": "./project.json",
    "settings": [
        {
            "name": "cycling_enable",
            "type": "bool",
            "default": false
        },
        {
            "name": "enable_autogain",
            "type": "bool",
            "default": false
        },
        {
            "name": "file_limit_max_mb",
            "type": "uint16_t",
            "default": 1000
        },
        {
            "name": "file_limit_min_mb",
            "type": "uint16_t",
            "default": 1
        },
        {
            "name": "file_limit_enabled",
            "type": "bool",
            "default": false
        },
        {
            "name": "serial",
            "type": "char",
            "only_read": true,
            "array_size": 16,
            "default": [
                0
            ]
        },
        {
            "name": "timers",
            "type": "sub_struct",
            "default": 0,
            "array_size": 4,
            "get_set_by_item": true,
            "sub_struct_name": "timer_param_t",
            "type_definition": [
                {
                    "name": "year",
                    "type": "uint16_t",
                    "default": 2022
                },
                {
                    "name": "enabled",
                    "type": "bool",
                    "default": false
                }
            ]
        }
    ]
}
```


Interface definition:
```
/*----------------------------------------------------------------------------*/

static void _settings_read(const size_t offset, void* data, const size_t size);
static void _settings_write(const size_t offset, const void* data, const size_t size);
static void _settings_erase(void);
static void _settings_save_request_cb(void);
static void _settings_default_init_cb(settings_t *settings);

/*----------------------------------------------------------------------------*/

static void _settings_read(const size_t offset, void* data, const size_t size) {

}

/*----------------------------------------------------------------------------*/

static void _settings_write(const size_t offset_in, const void* data, const size_t size) {

}

/*----------------------------------------------------------------------------*/

static void _settings_erase(void) {

}

/*----------------------------------------------------------------------------*/

static void _settings_save_request_cb(void) {

}

/*----------------------------------------------------------------------------*/

static void _settings_default_init_cb(settings_t *settings) {

}

/*----------------------------------------------------------------------------*/

const settings_io_t settings_io = {
	.read = _settings_read,
	.write = _settings_write,
	.erase = _settings_erase,
	.save_request_cb = _settings_save_request_cb,
	.default_init_cb = _settings_default_init_cb,
	.page_size =  2048 /*FLASH_PAGE_SIZE*/,
};

/*----------------------------------------------------------------------------*/

void main(void) {
	settings_init(&settings_io);
	
	settings_set_val1(settings_get_val2());
	printf("Get Val1 %d", settings_get_val1());
}

/*----------------------------------------------------------------------------*/
```
Denis Krasutski (Krasutski.denis@gmail.com)