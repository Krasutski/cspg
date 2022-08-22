# CSPG
C Settings Python Generator


This tool generate C code form JSON template and provice interfaces desribed in JSON file

Interface definition:
```
/*----------------------------------------------------------------------------*/

static void _settings_read(const uint32_t offset, void* data, const uint32_t data_size);
static void _settings_write(const uint32_t offset, const void* data, const uint32_t data_size);
static void _settings_erase(void);
static void _settings_save_request_cb(void);
static void _settings_default_init_cb(settings_t *settings);

/*----------------------------------------------------------------------------*/

static void _settings_read(const uint32_t offset, void* data, const uint32_t data_size) {

}

/*----------------------------------------------------------------------------*/

static void _settings_write(const uint32_t offset_in, const void* data, const uint32_t data_size) {

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