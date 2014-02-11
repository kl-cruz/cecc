/*
 * test_example.c
 *
 * All rights reserved.
 *
 *  Created on: 17-10-2013
 *      Author: Karol Lasończyk
 */

#include <stdint.h>
#include "platform_utils.h"
#include "test_example.h"


uint8_t test_example()
{
	uint16_t i;
	while(i<0xff)
	{
		i++;
	}
	return 0;
}
