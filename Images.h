#define gpulogow 50
#define gpulogoh 37
const uint8_t gpulogo[] PROGMEM = 
{0xff,0xff,0xff,0xff,0xff,0x1f,0x00,0xff,0xff,0xff,0xff,0xff,0x3f,0x00,0x07,0x00,0x00,0x00,0x00,0x78,0x00,0x07,0x00,0x00,0x00,0x00,0xf0,0x00,0x07,0x00,0x00,0x00,0x00,0xe0,0x01,0x07,0x00,0x00,0x00,0x00,0xc0,0x03,0x07,0xf8,0x03,0x00,0xfe,0x80,0x03,0x07,0xc6,0x0c,0x80,0x31,0x03,0x03,0x07,0x99,0x14,0x40,0x23,0x05,0x03,0x87,0x30,0x25,0x20,0x24,0x09,0x03,0xc7,0x23,0x65,0xf0,0x48,0x19,0x03,0x47,0x4c,0x65,0x10,0x53,0x19,0x03,0x27,0xf0,0xa6,0x08,0xbc,0x1c,0x03,0x27,0x1f,0x93,0xc8,0xc7,0x24,0x03,0xe7,0x08,0x8f,0x38,0x42,0x23,0x03,0x27,0x0e,0xc2,0x88,0xc3,0x30,0x03,0x27,0x1b,0xbb,0xc8,0xc6,0x2e,0x03,0xa7,0xf9,0x81,0x68,0x7f,0x20,0x03,0xe7,0x54,0x43,0x28,0x55,0x10,0x03,0xc7,0x54,0x7e,0x10,0x95,0x1f,0x03,0xc7,0x90,0x20,0xb0,0x24,0x08,0x03,0x87,0x21,0x31,0xe0,0x44,0x0c,0x03,0x07,0x27,0x1e,0xc0,0x89,0x07,0x03,0x07,0x4c,0x06,0x00,0x9b,0x01,0x03,0x07,0xf0,0x01,0x00,0x7c,0x80,0x03,0x07,0x00,0x00,0x00,0x00,0xc0,0x03,0x07,0x00,0x00,0x00,0x00,0xe0,0x01,0x07,0x00,0x00,0x00,0x00,0xf0,0x00,0xff,0xff,0xff,0xff,0xff,0x7f,0x00,0xff,0xff,0xff,0xff,0xff,0x3f,0x00,0xff,0xff,0xff,0xff,0xff,0x1f,0x00,0x87,0x40,0x02,0xc0,0x60,0x00,0x00,0x87,0x40,0x02,0xc0,0x60,0x00,0x00,0x87,0x40,0x02,0xc0,0x60,0x00,0x00,0x87,0x7f,0xfe,0xff,0x7f,0x00,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00};

//width:43,height:43

#define cpulogow 43
#define cpulogoh 43

// Intel CPU picture
const uint8_t cpulogo[] PROGMEM = 
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc0,0xff,0x03,0x00,0x00,0x00,0xe0,0xff,0x03,0x00,0x00,0x00,0xf0,0xff,0x07,0x00,0x00,0x00,0xe0,0xfe,0x07,0x00,0x00,0x00,0xe0,0xfe,0x07,0x00,0x00,0x00,0xe0,0xff,0x07,0x00,0x00,0x00,0xe0,0xff,0x07,0x00,0x00,0x00,0xe0,0xff,0x07,0x00,0x00,0x00,0xe0,0xff,0x07,0x00,0x00,0x00,0xe0,0x07,0x00,0x00,0x00,0x00,0xe0,0x0f,0x00,0x00,0x00,0x00,0xe0,0xff,0x01,0x00,0x00,0x00,0xe0,0xff,0x01,0x00,0x20,0x00,0xf8,0x03,0x00,0x00,0x20,0x00,0xf8,0x07,0x00,0x00,0x20,0x00,0xfe,0x07,0x00,0x00,0x60,0xc0,0xff,0x1f,0x00,0x00,0x60,0xc0,0xff,0x17,0x00,0x00,0xe0,0xe1,0xff,0x17,0x00,0x00,0xe0,0xff,0xff,0x07,0x00,0x00,0xe0,0xff,0xff,0x07,0x00,0x00,0xe0,0xff,0xff,0x07,0x00,0x00,0xe0,0xff,0xff,0x07,0x00,0x00,0xe0,0xff,0xff,0x01,0x00,0x00,0xc0,0xff,0xff,0x01,0x00,0x00,0x00,0xff,0xff,0x01,0x00,0x00,0x00,0xfc,0xff,0x00,0x00,0x00,0x00,0xf8,0x3f,0x00,0x00,0x00,0x00,0xe0,0x3f,0x00,0x00,0x00,0xf0,0xe3,0x3f,0xff,0x7f,0x00,0x00,0xe2,0x30,0x02,0x40,0x00,0x00,0xe0,0x20,0x00,0x00,0x00,0x00,0x20,0x30,0x00,0x00,0x00,0x00,0x27,0x30,0x00,0x00,0x00,0x00,0xe7,0x70,0x00,0x08,0x00,0x30,0xe0,0x60,0x00,0x08,0x00,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};

#define fanlogow 43
#define fanlogoh 43
const uint8_t fanlogo[] PROGMEM = {0xff,0xff,0xff,0xff,0xff,0x07,0xff,0xff,0xff,0xff,0xff,0x07,0x03,0x00,0x00,0x00,0x00,0x06,0x03,0x00,0x00,0x00,0x00,0x06,0x63,0x00,0xfc,0x01,0x30,0x06,0x73,0xc0,0xff,0x0f,0x78,0x06,0x73,0xe0,0x60,0x38,0x30,0x06,0x03,0x78,0xc0,0xf0,0x00,0x06,0x03,0xec,0x81,0xa0,0x01,0x06,0x03,0x06,0x83,0x21,0x03,0x06,0x03,0x03,0x86,0x21,0x06,0x06,0x83,0x01,0x0c,0x21,0x0c,0x06,0x83,0x04,0x18,0x21,0x0c,0x06,0xc3,0xff,0x10,0x31,0x1c,0x06,0x63,0xc0,0x31,0x31,0x14,0x06,0x63,0x00,0x27,0x11,0x36,0x06,0x23,0x00,0xfc,0x19,0x22,0x06,0x23,0x70,0x86,0x0f,0x23,0x06,0x33,0xfe,0x03,0x86,0x21,0x06,0xb3,0x03,0x01,0xc6,0x60,0x06,0xf3,0x00,0x01,0x74,0x60,0x06,0x73,0xe0,0x01,0x1c,0x70,0x06,0x33,0x70,0x01,0x04,0x7c,0x06,0x33,0x1c,0x03,0x06,0x67,0x06,0x33,0x84,0x03,0xff,0x21,0x06,0x23,0xc6,0x8e,0x01,0x20,0x06,0x23,0xc3,0xfc,0x01,0x30,0x06,0x63,0x61,0x24,0x07,0x30,0x06,0xc3,0x61,0x66,0x1c,0x18,0x06,0xc3,0x20,0x46,0xf0,0x1f,0x06,0x83,0x20,0xc4,0x00,0x0c,0x06,0x83,0x21,0x84,0x01,0x04,0x06,0x03,0x23,0x04,0x03,0x06,0x06,0x03,0x26,0x0c,0x06,0x03,0x06,0x03,0x2c,0x08,0xfc,0x01,0x06,0x23,0x38,0x18,0x60,0x30,0x06,0x73,0xe0,0x30,0x3c,0x78,0x06,0x73,0x80,0xff,0x0f,0x78,0x06,0x23,0x00,0xf8,0x00,0x30,0x06,0x03,0x00,0x00,0x00,0x00,0x06,0x03,0x00,0x00,0x00,0x00,0x06,0xff,0xff,0xff,0xff,0xff,0x07,0xff,0xff,0xff,0xff,0xff,0x07};

//width:18,height:18

#define shelogow 18
#define shelogoh 18
const unsigned char shelogo[] PROGMEM= {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x9c,0x1f,0x00,0xdc,0x30,0x00,0x68,0x30,0x00,0x60,0x20,0x00,0x20,0x00,0x00,0x20,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x40,0x30,0x00,0xc0,0x1f,0x00,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
#define ramlogow 50
#define ramlogoh 27
const uint8_t ramlogo[] PROGMEM = {0xfe,0xff,0xff,0xff,0xff,0xff,0x03,0xff,0xff,0xff,0xff,0xff,0xff,0x03,0xff,0xff,0xff,0xff,0xff,0xff,0x03,0x07,0x00,0x00,0x00,0x00,0x00,0x03,0x07,0x00,0x00,0x00,0x00,0x00,0x03,0x07,0x00,0x00,0x00,0x00,0x00,0x03,0x3f,0x00,0x00,0x00,0x00,0xe0,0x03,0x3f,0x00,0x00,0x00,0x00,0xe0,0x03,0x3f,0x00,0x00,0x00,0x00,0xe0,0x03,0x38,0x00,0x00,0x00,0x00,0x60,0x00,0x38,0x00,0x00,0x00,0x00,0x60,0x00,0x38,0x00,0x00,0x00,0x00,0x60,0x00,0x3f,0x00,0x00,0x00,0x00,0xe0,0x03,0x3f,0x00,0x00,0x00,0x00,0xe0,0x03,0x07,0x00,0x00,0x00,0x00,0x00,0x03,0x07,0x00,0x00,0x00,0x00,0x00,0x03,0xff,0xff,0xff,0xff,0xff,0xff,0x03,0xff,0xff,0xff,0xff,0xff,0xff,0x03,0x07,0x00,0x00,0x10,0x00,0x00,0x03,0x07,0x00,0x00,0x10,0x00,0x00,0x03,0x07,0x00,0x00,0x10,0x00,0x00,0x03,0x47,0x92,0x49,0x92,0x24,0x13,0x03,0x47,0x92,0x49,0x92,0x24,0x13,0x03,0x47,0x92,0x49,0x92,0x24,0x13,0x03,0xff,0xff,0xff,0xff,0xff,0xff,0x03,0xfe,0xff,0xff,0xff,0xff,0xff,0x03,0xfc,0xff,0xff,0xff,0xff,0xff,0x01};


#define temlogow 18
#define temlogoh 14
const uint8_t temlogo[] PROGMEM = {0x80,0x03,0x00,0x80,0x06,0x00,0x80,0x06,0x00,0x80,0x00,0x00,0x80,0x06,0x00,0x80,0x06,0x00,0x80,0x06,0x00,0x40,0x0c,0x00,0x5e,0xec,0x01,0xc3,0x04,0x03,0x8c,0xe7,0x02,0x36,0xb0,0x01,0x61,0x08,0x03,0xc0,0x07,0x00};


#define freqlogow 16
#define freqlogoh 16
const uint8_t freqlogo[] PROGMEM ={0xff,0xff,0xff,0xff,0x01,0x80,0x09,0x80,0x09,0x90,0x19,0x90,0x14,0x18,0x16,0x69,0x20,0x07,0xa0,0x06,0xa1,0x80,0x41,0x80,0x41,0x80,0x01,0x80,0xff,0xff,0x00,0x00};



#define uselogow 19
#define uselogoh 19
const uint8_t uselogo[] PROGMEM ={0x00,0x06,0x00,0xe0,0x3f,0x00,0x70,0xe0,0x00,0x18,0x80,0x01,0x0c,0x00,0x03,0x06,0x00,0x02,0x06,0x00,0x06,0x02,0x0f,0x04,0x82,0x19,0x04,0x83,0x10,0x04,0x83,0x10,0x04,0x82,0x19,0x04,0x02,0x0f,0x04,0xe6,0x00,0x06,0xb4,0x00,0x02,0x9c,0x00,0x03,0x84,0x80,0x01,0xc2,0xe0,0x00,0xff,0x3f,0x00};


#define fan1logow 19
#define fan11ogoh 19
const uint8_t fan1logo[] PROGMEM ={0xc0,0x1f,0x00,0x30,0x62,0x00,0x48,0xa4,0x00,0x84,0x24,0x01,0x1e,0x21,0x01,0x62,0x22,0x03,0x81,0x17,0x03,0xf9,0x98,0x04,0x47,0x68,0x04,0x61,0x18,0x06,0x59,0x98,0x05,0xc5,0x0f,0x00,0xa5,0x0a,0x02,0x82,0xf2,0x03,0x92,0x04,0x01,0x94,0x88,0x00,0x18,0x71,0x00,0x60,0x32,0x00,0x80,0x07,0x00};

#define manlogow 64
#define man1ogoh 64
const unsigned char manlogo[] PROGMEM= {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x3f,0x00,0x00,0x00,0x00,0x00,0x00,0xe4,0x39,0x00,0x00,0x00,0x00,0x00,0x00,0x1e,0x48,0x00,0x00,0x00,0x00,0x00,0x00,0xea,0x87,0x01,0x00,0x00,0x00,0x00,0x00,0xb2,0xfd,0x01,0x00,0x00,0x00,0x00,0x00,0x1e,0xd8,0x03,0x00,0x00,0x00,0x00,0x00,0x0f,0xc6,0x03,0x00,0x00,0x00,0x00,0x00,0x06,0x64,0x03,0x00,0x00,0x00,0x00,0x00,0x0a,0xc2,0x03,0x00,0x00,0x00,0x00,0x00,0x4b,0xc6,0x03,0x00,0x00,0x00,0x1c,0x00,0x23,0xc4,0x01,0x00,0x00,0x00,0x16,0x00,0x33,0xa0,0x01,0x00,0x00,0x00,0x10,0x00,0x23,0x80,0x01,0x00,0x00,0x00,0x00,0x00,0x8f,0x87,0x01,0x00,0x00,0x00,0x08,0x00,0x9f,0x87,0x01,0x00,0x00,0x00,0x16,0x00,0xf2,0xe0,0x00,0x00,0x00,0xc0,0x6f,0x00,0x66,0x30,0x00,0x00,0x00,0x40,0xd8,0x00,0x0c,0x38,0x00,0x00,0x00,0x40,0xf7,0x0f,0x1f,0xd8,0x01,0x00,0x00,0xc0,0x9f,0xff,0x7f,0xcc,0x03,0x00,0x00,0x40,0xd0,0xf9,0xef,0xe7,0x0f,0x00,0x00,0xc0,0xf7,0xff,0x9b,0xf3,0x1f,0x00,0x00,0x80,0xfc,0xff,0x1f,0xfc,0x3f,0x00,0x00,0x80,0xf0,0xff,0x1d,0xff,0x7f,0x00,0x00,0x80,0xff,0xff,0x1d,0xff,0xff,0x00,0x00,0x00,0xfe,0xbf,0x1d,0xff,0xff,0x01,0x00,0x00,0x00,0x80,0x19,0xff,0xff,0x01,0x00,0x00,0x00,0x80,0x99,0xff,0xff,0x03,0x00,0x00,0x00,0x80,0x99,0xff,0xff,0x03,0x00,0x00,0x00,0x80,0x99,0xff,0xf9,0x03,0x00,0x00,0x00,0x00,0x9d,0xff,0xfd,0x01,0x00,0x00,0x00,0x00,0x99,0xff,0xfd,0x01,0x00,0x00,0x00,0x00,0x9b,0xff,0xff,0x01,0x00,0x00,0x00,0x00,0x9f,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x0d,0xff,0x7f,0x00,0x00,0x00,0x00,0x00,0x03,0x8f,0x7f,0x00,0x00,0x00,0x00,0x00,0x03,0x80,0x3d,0x00,0x00,0x00,0x00,0x00,0x07,0x80,0x39,0x00,0x00,0x00,0x00,0x00,0x3e,0xf8,0x79,0x00,0x00,0x00,0x00,0x00,0xfa,0xff,0x31,0x00,0x00,0x00,0x00,0x00,0xfe,0xff,0x3f,0x00,0x00,0x00,0x00,0x00,0xfe,0xff,0x03,0x00,0x00,0x00,0x00,0x00,0xfe,0xff,0x07,0x00,0x00,0x00,0x00,0x00,0xf0,0xff,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
