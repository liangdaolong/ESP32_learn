/*
 * SPDX-FileCopyrightText: 2010-2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

#include <stdio.h>
#include <inttypes.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_chip_info.h"
#include "esp_flash.h"
#include "esp_log.h"
#include "driver/dac_common.h"

char Variable[250];

void app_main(void)
{
    vTaskList(Variable);
    printf(Variable);
    while(true) {
    vTaskDelay(100); //1s
    printf("你好 世界!\n");
    ESP_LOGI("UART","Send done");
        //手动修改部分
    }
}
