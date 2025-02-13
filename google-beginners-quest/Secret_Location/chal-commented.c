#include <stdbool.h>

#include "hardware/gpio.h"
#include "hardware/structs/sio.h"
#include "pico/stdlib.h"

int main(void)
{
	// initialize 8 GPIOs before use
	// to output pin set
	for (int i = 0; i < 8; i++) {
		gpio_init(i);
		gpio_set_dir(i, GPIO_OUT);
	}
	// Drive all pins simultaneously.
	gpio_put_all(0);

	for (;;) {
		gpio_set_mask(67);
		gpio_clr_mask(0);		// clear bit mask bits
		sleep_us(100);
		gpio_set_mask(20);
		gpio_clr_mask(3);
		sleep_us(100);
		gpio_set_mask(2);
		gpio_clr_mask(16);
		sleep_us(100);
		gpio_set_mask(57);
		gpio_clr_mask(4);
		sleep_us(100);
		gpio_set_mask(0);
		gpio_clr_mask(25);
		sleep_us(100);
		gpio_set_mask(5);
		gpio_clr_mask(2);
		sleep_us(100);
		gpio_set_mask(18);
		gpio_clr_mask(65);
		sleep_us(100);
		gpio_set_mask(1);
		gpio_clr_mask(2);
		sleep_us(100);
		gpio_set_mask(64);
		gpio_clr_mask(17);
		sleep_us(100);
		gpio_set_mask(2);
		gpio_clr_mask(0);
		sleep_us(100);
		gpio_set_mask(1);
		gpio_clr_mask(6);
		sleep_us(100);
		gpio_set_mask(18);
		gpio_clr_mask(65);
		sleep_us(100);
		gpio_set_mask(1);
		gpio_clr_mask(0);
		sleep_us(100);
		gpio_set_mask(4);
		gpio_clr_mask(2);
		sleep_us(100);
		gpio_set_mask(0);
		gpio_clr_mask(0);
		sleep_us(100);
		gpio_set_mask(64);
		gpio_clr_mask(16);
		sleep_us(100);
		gpio_set_mask(16);
		gpio_clr_mask(64);
		sleep_us(100);
		gpio_set_mask(2);
		gpio_clr_mask(4);
		sleep_us(100);
		gpio_set_mask(0);
		gpio_clr_mask(3);
		sleep_us(100);
		gpio_set_mask(9);
		gpio_clr_mask(0);
		sleep_us(100);
		gpio_set_mask(0);
		gpio_clr_mask(1);
		sleep_us(100);
		gpio_set_mask(0);
		gpio_clr_mask(8);
		sleep_us(100);
		gpio_set_mask(8);
		gpio_clr_mask(0);
		sleep_us(100);
		gpio_set_mask(65);
		gpio_clr_mask(24);
		sleep_us(100);
		gpio_set_mask(22);
		gpio_clr_mask(64);
		sleep_us(100);
		gpio_set_mask(0);
		gpio_clr_mask(0);
		sleep_us(100);
		gpio_set_mask(0);
		gpio_clr_mask(5);
		sleep_us(100);
		gpio_set_mask(0);
		gpio_clr_mask(2);
		sleep_us(100);
		gpio_set_mask(65);
		gpio_clr_mask(16);
		sleep_us(100);
		gpio_set_mask(22);
		gpio_clr_mask(65);
		sleep_us(100);
		gpio_set_mask(1);
		gpio_clr_mask(6);
		sleep_us(100);
		gpio_set_mask(4);
		gpio_clr_mask(0);
		sleep_us(100);
		gpio_set_mask(66);
		gpio_clr_mask(21);
		sleep_us(100);
		gpio_set_mask(1);
		gpio_clr_mask(0);
		sleep_us(100);
		gpio_set_mask(0);
		gpio_clr_mask(2);
		sleep_us(100);
		gpio_set_mask(24);
		gpio_clr_mask(65);
		sleep_us(100);
		gpio_set_mask(67);
		gpio_clr_mask(24);
		sleep_us(100);
		gpio_set_mask(24);
		gpio_clr_mask(67);
		sleep_us(100);
		gpio_set_mask(2);
		gpio_clr_mask(8);
		sleep_us(100);
		gpio_set_mask(65);
		gpio_clr_mask(18);
		sleep_us(100);
		gpio_set_mask(16);
		gpio_clr_mask(64);
		sleep_us(100);
		gpio_set_mask(2);
		gpio_clr_mask(0);
		sleep_us(100);
		gpio_set_mask(68);
		gpio_clr_mask(19);
		sleep_us(100);
		gpio_set_mask(19);
		gpio_clr_mask(64);
		sleep_us(100);
		gpio_set_mask(72);
		gpio_clr_mask(2);
		sleep_us(100);
		gpio_set_mask(2);
		gpio_clr_mask(117);
		sleep_us(100);

		gpio_put_all(0);
		sleep_ms(500);
	}

	return 0;
}
