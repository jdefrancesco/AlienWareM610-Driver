/*
 * Alienware 610M USB Mouse driver.
 *
 *
 */
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>
#include <linux/slab.h>
#include <linux/usb.h>
#include <linux/mutex.h>
#include <linux/ioctl.h>

#include <asm/uaccess.h>


#define DRIVER_VERSION "v0.1"
#define DRIVER_AUTHOR "Joey DeFrancesco"
#define DRIVER_DESC "Alienware610M Mouse Driver"
#define DRIVER_LICENSE "GPL"

MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE(DRIVER_LICENSE);


static int __init awm610m_usb_init(void)
{
    // Driver entry.
}

static void __exit awm610m_usb_exit(void)
{
    // Unload driver
}

module_init(awm610m_usb_init);
module_exit(awm610m_usb_exit);
