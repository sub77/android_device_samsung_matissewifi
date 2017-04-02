#include <kernel/thread.h>
#include <platform/gpio.h>
/*./uefi/lkl/drivers/hid/hid-input.c*/
#define TLMM_VOL_UP_BTN_GPIO    106
#define TLMM_VOL_DOWN_BTN_GPIO  107
#define TLMM_HOME_BTN_GPIO  108

/* Return 1 if vol_up pressed */
int target_volume_up(void)
{
    uint8_t status = 0;

    gpio_tlmm_config(TLMM_VOL_UP_BTN_GPIO, 0, GPIO_INPUT, GPIO_PULL_UP, GPIO_2MA, GPIO_ENABLE);

    thread_sleep(1);

    /* Get status of GPIO */
    status = gpio_status(TLMM_VOL_UP_BTN_GPIO);

    /* Active low signal. */
    return !status;
}

/* Return 1 if vol_down pressed */
uint32_t target_volume_down(void)
{
    uint8_t status = 0;

    gpio_tlmm_config(TLMM_VOL_DOWN_BTN_GPIO, 0, GPIO_INPUT, GPIO_PULL_UP, GPIO_2MA, GPIO_ENABLE);

    thread_sleep(1);

    /* Get status of GPIO */
    status = gpio_status(TLMM_VOL_DOWN_BTN_GPIO);

    /* Active low signal. */
    return !status;
}

/* Return 1 if vol_down pressed */
uint32_t target_home(void)
{
    uint8_t status = 0;

    gpio_tlmm_config(TLMM_HOME_BTN_GPIO, 0, GPIO_INPUT, GPIO_PULL_UP, GPIO_2MA, GPIO_ENABLE);

    thread_sleep(1);

    /* Get status of GPIO */
    status = gpio_status(TLMM_HOME_BTN_GPIO);

    /* Active low signal. */
    return !status;
}
