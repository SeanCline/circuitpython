USB_VID = 0x303A
USB_PID = 0x80D9

USB_PRODUCT = "HexKy_S2"
USB_MANUFACTURER = "FutureKeys"

IDF_TARGET = esp32s2

CIRCUITPY_ESP_FLASH_MODE = qio
CIRCUITPY_ESP_FLASH_FREQ = 80m
CIRCUITPY_ESP_FLASH_SIZE = 4MB

FROZEN_MPY_DIRS += $(TOP)/frozen/Adafruit_CircuitPython_NeoPixel

CIRCUITPY_ESP_PSRAM_SIZE = 2MB
CIRCUITPY_ESP_PSRAM_MODE = qio
CIRCUITPY_ESP_PSRAM_FREQ = 80m
