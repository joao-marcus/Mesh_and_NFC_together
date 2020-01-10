#include "sdk_config.h"
#include "drv_ext_gpio.h"
#include "nrf_drv_saadc.h"
#include "app_timer.h"
#include "math.h"
#include "nrf_gpio.h"
#include "app_scheduler.h"
#include "nrf_drv_gpiote.h"
#include "ble_bas.h"
#include <stdint.h>
#include <string.h>

#define  NRF_LOG_MODULE_NAME "m_temp2_meas   "
#include "nrf_log.h"
#include "macros_common.h"
//
//#define SAMPLES_IN_BUFFER 1
//
//static nrf_saadc_value_t m_buffer[SAMPLES_IN_BUFFER];
//
//void saadc_callback(nrf_drv_saadc_evt_t const * p_event)
//{
//    if (p_event->type == NRF_DRV_SAADC_EVT_DONE)
//    {
//        ret_code_t err_code;
//
//        err_code = nrf_drv_saadc_buffer_convert(p_event->data.done.p_buffer, SAMPLES_IN_BUFFER);
//        APP_ERROR_CHECK(err_code);
//        
//        NRF_LOG_INFO("%d\r\n", p_event->data.done.p_buffer[0]);
//    }
//}
//
//void saadc_initTemp2(void)
//{
//    ret_code_t err_code;
//    nrf_saadc_channel_config_t channel_config 
//        = NRF_DRV_SAADC_DEFAULT_CHANNEL_CONFIG_SE(NRF_SAADC_INPUT_AIN0);
//
//    err_code = nrf_drv_saadc_init(NULL, saadc_callback);
//    APP_ERROR_CHECK(err_code);
//
//    err_code = nrf_drv_saadc_channel_init(0, &channel_config);
//    APP_ERROR_CHECK(err_code);
//
//    err_code = nrf_drv_saadc_buffer_convert(m_buffer, SAMPLES_IN_BUFFER);
//    APP_ERROR_CHECK(err_code);
//}
