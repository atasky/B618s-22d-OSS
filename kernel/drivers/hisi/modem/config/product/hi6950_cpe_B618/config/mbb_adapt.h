/*************************************************************************
CAUTION : This file is Auto Generated by VBA based on ��V750 MBB PRODUCT_auto_adaptor.xlsm��.
          So, don't modify this file manually!
****************************************************************************/
#ifndef __MBB_PRODUCT_ADAPT_H__
#define __MBB_PRODUCT_ADAPT_H__


#ifdef __cplusplus
extern "C"
{
#endif


/****************************************************************************/
/*************************** MBB �������ļ���ʼ *****************************/
/****************************************************************************/
#define    GPIO_NULL                           (-1)               /* �޴�GPIOʱȡ-1 */
#define    MENU_KEY_GPIO                       (GPIO_0_5)         /* MENU/WPS�� */
#define    RESET_KEY_GPIO                      (GPIO_0_4)         /* RESET�� */
#define    WIFI_KEY_GPIO                       (GPIO_NULL)        /* WIFI/WLAN�� */
#define    WIFI_ACTIVE_GPIO                    (GPIO_NULL)        /* wifi enable */
#define    WIFI_WAKEUP_BB_GPIO                 (GPIO_NULL)        /* wifi wakeup bb */
#define    WIFI_5G_POWER_EN                    (GPIO_NULL)        /* 5GWIFI PA�����DCDCʹ�ܹܽ�,�ߵ�ƽʹ�� */
#define    CHG_ENABLE_GPIO                     (GPIO_NULL)        /* charge enable */
#define    CHG_BATT_LOW_INT                    (GPIO_NULL)        /* batt low int */
#define    CHG_BATT_ID_CHAN                    (0)                /* batt id hkadc channel */
#define    CHG_BATT_TEMP_CHAN                  (1)                /* batt temp hkadc channel */
#define    CHG_BATT_VOLT_CHAN                  (8)                /* batt volt hkadc channel */
#define    CHG_VBUS_VOLT_CHAN                  (-1)               /* vbus volt hkadc channel */
#define    LCD_BACKLIGHT_GPIO                  (GPIO_NULL)        /* lcd backlight */
#define    LCD_ID00_GPIO                       (GPIO_NULL)        /* lcd id0 */
#define    LCD_ID01_GPIO                       (GPIO_NULL)        /* lcd id1 */
#define    OLED_ID0_GPIO                       (GPIO_NULL)        /* oled id0 */
#define    OLED_ID1_GPIO                       (GPIO_NULL)        /* oled id1 */
#define    OLED_CD_GPIO                        (GPIO_NULL)        /* oled cd */
#define    OTG_ID_DET_GPIO                     (GPIO_NULL)        /* otg detect */
#define    OTG_ID_SET_GPIO                     (GPIO_NULL)        /* otg set */
#define    DMDP_CONNECT_GPIO                   (GPIO_NULL)        /* dmdp connect */
#define    GPIO_OTG_CPE_MODE                   (GPIO_5_5)         /* GPIO Ĭ��ģʽ��HOST�� */
#define    SD_DETECT_GPIO                      (GPIO_NULL)        /* sd detect */
#define    GPS_GPIO                            (GPIO_NULL)        /* GPSоƬʹ��GPIO */
#define    ETH_PWR_ON_GPIO                     (GPIO_4_3)         /* �װ�DCDCʹ���źţ��ߵ�ƽ�ϵ� */
#define    VBUS_POWER_CTRL                     (GPIO_0_2)         /* ����vbus���翪�� */
#define    VBUS_OVERFLOW_IRQ                   (GPIO_5_6)         /* ����vbus�����ж���gpio */
#define    LAN_PHY_RESET                       (GPIO_5_4)         /* PHYоƬreset */
#define    CHG_USB_TEMP_CHAN                   (GPIO_NULL)        /* usb temp hkadc channel */

/******************************************************************************/
/***************************** MBB �������ļ����� *****************************/
/******************************************************************************/


#ifdef __cplusplus
}
#endif
#endif /*__MBB_PRODUCT_ADAPT_H__ */