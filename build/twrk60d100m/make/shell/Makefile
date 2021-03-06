#----------------------------------------------------------
# setup variables
#----------------------------------------------------------
MQX_ROOTDIR             = $(abspath ../../../..)
LIBRARY_ROOTDIR         = $(MQX_ROOTDIR)/lib/$(BOARD).$(TOOL)
override TYPE           = library
override NAME           = shell
override BOARD          = twrk60d100m
override POSTBUILD_CMD  = $(call GET_POSTBUILD_CMD,shell/build/bat/shell_twrk60d100m)
override LIBRARY_DIR    = $(LIBRARY_ROOTDIR)/$(CONFIG)/shell
override LIBRARY_FILE   = $(LIBRARY_DIR)/shell.$(LIBRARY_EXT)

#-----------------------------------------------------------
# cw10 sources/include
#-----------------------------------------------------------
ifeq ($(TOOL),cw10)
INCLUDE += $(MQX_ROOTDIR)/mqx/source/psp/cortex_m/compiler/cw
endif
#-----------------------------------------------------------
# cw10gcc sources/include
#-----------------------------------------------------------
ifeq ($(TOOL),cw10gcc)
INCLUDE += $(MQX_ROOTDIR)/mqx/source/psp/cortex_m/compiler/gcc_cw
endif
#-----------------------------------------------------------
# iar sources/include
#-----------------------------------------------------------
ifeq ($(TOOL),iar)
INCLUDE += $(MQX_ROOTDIR)/mqx/source/psp/cortex_m/compiler/iar
endif
#-----------------------------------------------------------
# uv4 sources/include
#-----------------------------------------------------------
ifeq ($(TOOL),uv4)
INCLUDE += $(MQX_ROOTDIR)/mqx/source/psp/cortex_m/compiler/rv
endif


#-----------------------------------------------------------
# cross library include
#-----------------------------------------------------------
INCLUDE += $(MQX_ROOTDIR)/usb/host/source/rtos/mqx
INCLUDE += $(MQX_ROOTDIR)/usb/host/source/include
INCLUDE += $(MQX_ROOTDIR)/usb/host/source/host/khci
INCLUDE += $(MQX_ROOTDIR)/usb/host/source/host
INCLUDE += $(MQX_ROOTDIR)/usb/host/source/classes/printer
INCLUDE += $(MQX_ROOTDIR)/usb/host/source/classes/phdc
INCLUDE += $(MQX_ROOTDIR)/usb/host/source/classes/msd/mfs
INCLUDE += $(MQX_ROOTDIR)/usb/host/source/classes/msd
INCLUDE += $(MQX_ROOTDIR)/usb/host/source/classes/hub
INCLUDE += $(MQX_ROOTDIR)/usb/host/source/classes/hid
INCLUDE += $(MQX_ROOTDIR)/usb/host/source/classes/cdc
INCLUDE += $(MQX_ROOTDIR)/usb/host/source/classes/audio
INCLUDE += $(MQX_ROOTDIR)/usb/device/source/include/rtos
INCLUDE += $(MQX_ROOTDIR)/usb/device/source/include/khci
INCLUDE += $(MQX_ROOTDIR)/usb/device/source/include
INCLUDE += $(MQX_ROOTDIR)/usb/device/source/device/khci
INCLUDE += $(MQX_ROOTDIR)/usb/device/source/device
INCLUDE += $(MQX_ROOTDIR)/usb/device/source/classes/phdc
INCLUDE += $(MQX_ROOTDIR)/usb/device/source/classes/msd
INCLUDE += $(MQX_ROOTDIR)/usb/device/source/classes/include
INCLUDE += $(MQX_ROOTDIR)/usb/device/source/classes/hid
INCLUDE += $(MQX_ROOTDIR)/usb/device/source/classes/common
INCLUDE += $(MQX_ROOTDIR)/usb/device/source/classes/cdc
INCLUDE += $(MQX_ROOTDIR)/usb/device/source/classes/audio
INCLUDE += $(MQX_ROOTDIR)/usb/common/include
INCLUDE += $(MQX_ROOTDIR)/rtcs/source/tcpip
INCLUDE += $(MQX_ROOTDIR)/rtcs/source/snmp
INCLUDE += $(MQX_ROOTDIR)/rtcs/source/ppp
INCLUDE += $(MQX_ROOTDIR)/rtcs/source/os/mqx25x
INCLUDE += $(MQX_ROOTDIR)/rtcs/source/nat
INCLUDE += $(MQX_ROOTDIR)/rtcs/source/media
INCLUDE += $(MQX_ROOTDIR)/rtcs/source/include
INCLUDE += $(MQX_ROOTDIR)/rtcs/source/if
INCLUDE += $(MQX_ROOTDIR)/rtcs/source/httpd
INCLUDE += $(MQX_ROOTDIR)/rtcs/source/apps
INCLUDE += $(MQX_ROOTDIR)/mqx/source/tad
INCLUDE += $(MQX_ROOTDIR)/mqx/source/string
INCLUDE += $(MQX_ROOTDIR)/mqx/source/psp/cortex_m/cpu
INCLUDE += $(MQX_ROOTDIR)/mqx/source/psp/cortex_m/core/M4
INCLUDE += $(MQX_ROOTDIR)/mqx/source/psp/cortex_m
INCLUDE += $(MQX_ROOTDIR)/mqx/source/kernel
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/usb
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/timer
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/tfs
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/tchres
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/spi
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/serial/polled
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/serial/int
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/serial
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/sdcard/sdcard_spi
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/sdcard/sdcard_esdhc
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/sdcard
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/sai/int
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/sai
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/rtc
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/pipe
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/pcflash
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/pccard
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/pcb/mqxa
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/pcb
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/lwgpio
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/lpm
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/io_null
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/io_mem
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/io_dun
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/i2c/polled
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/i2c/int
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/i2c
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/hwtimer
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/gpio/kgpio
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/gpio
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/flashx/freescale
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/flashx
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/esdhc
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/enet/phy
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/enet/macnet
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/enet
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/debug
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/crc
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/cm
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/can/flexcan
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/adc/kadc
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io/adc
INCLUDE += $(MQX_ROOTDIR)/mqx/source/io
INCLUDE += $(MQX_ROOTDIR)/mqx/source/include
INCLUDE += $(MQX_ROOTDIR)/mqx/source/fio
INCLUDE += $(MQX_ROOTDIR)/mqx/source/bsp/twrk60d100m
INCLUDE += $(MQX_ROOTDIR)/mfs/source/include
INCLUDE += $(MQX_ROOTDIR)/mfs/source/generic
INCLUDE += $(MQX_ROOTDIR)/config/twrk60d100m
INCLUDE += $(MQX_ROOTDIR)/config/common

#-----------------------------------------------------------
# mfs
#-----------------------------------------------------------
SOURCES += $(MQX_ROOTDIR)/shell/source/mfs/sh_writetest.c
SOURCES += $(MQX_ROOTDIR)/shell/source/mfs/sh_write.c
SOURCES += $(MQX_ROOTDIR)/shell/source/mfs/sh_type.c
SOURCES += $(MQX_ROOTDIR)/shell/source/mfs/sh_rmdir.c
SOURCES += $(MQX_ROOTDIR)/shell/source/mfs/sh_rename.c
SOURCES += $(MQX_ROOTDIR)/shell/source/mfs/sh_readtest.c
SOURCES += $(MQX_ROOTDIR)/shell/source/mfs/sh_read.c
SOURCES += $(MQX_ROOTDIR)/shell/source/mfs/sh_pwd.c
SOURCES += $(MQX_ROOTDIR)/shell/source/mfs/sh_mkdir.c
SOURCES += $(MQX_ROOTDIR)/shell/source/mfs/sh_format.c
SOURCES += $(MQX_ROOTDIR)/shell/source/mfs/sh_flush.c
SOURCES += $(MQX_ROOTDIR)/shell/source/mfs/sh_disect.c
SOURCES += $(MQX_ROOTDIR)/shell/source/mfs/sh_dirent.c
SOURCES += $(MQX_ROOTDIR)/shell/source/mfs/sh_dir.c
SOURCES += $(MQX_ROOTDIR)/shell/source/mfs/sh_di.c
SOURCES += $(MQX_ROOTDIR)/shell/source/mfs/sh_df.c
SOURCES += $(MQX_ROOTDIR)/shell/source/mfs/sh_del.c
SOURCES += $(MQX_ROOTDIR)/shell/source/mfs/sh_create.c
SOURCES += $(MQX_ROOTDIR)/shell/source/mfs/sh_copy.c
SOURCES += $(MQX_ROOTDIR)/shell/source/mfs/sh_compare.c
SOURCES += $(MQX_ROOTDIR)/shell/source/mfs/sh_cd.c
SOURCES += $(MQX_ROOTDIR)/shell/source/mfs/sh_cache.c
INCLUDE += $(MQX_ROOTDIR)/shell/source/include

#-----------------------------------------------------------
# mqx
#-----------------------------------------------------------
SOURCES += $(MQX_ROOTDIR)/shell/source/mqx/sh_tad.c
SOURCES += $(MQX_ROOTDIR)/shell/source/mqx/sh_pause.c
SOURCES += $(MQX_ROOTDIR)/shell/source/mqx/sh_kill.c
SOURCES += $(MQX_ROOTDIR)/shell/source/mqx/sh_abort.c
INCLUDE += $(MQX_ROOTDIR)/shell/source/include

#-----------------------------------------------------------
# rtcs
#-----------------------------------------------------------
SOURCES += $(MQX_ROOTDIR)/shell/source/rtcs/sh_tnetd.c
SOURCES += $(MQX_ROOTDIR)/shell/source/rtcs/sh_tnet.c
SOURCES += $(MQX_ROOTDIR)/shell/source/rtcs/sh_tftpd.c
SOURCES += $(MQX_ROOTDIR)/shell/source/rtcs/sh_tftp.c
SOURCES += $(MQX_ROOTDIR)/shell/source/rtcs/sh_snmpd.c
SOURCES += $(MQX_ROOTDIR)/shell/source/rtcs/sh_sendto.c
SOURCES += $(MQX_ROOTDIR)/shell/source/rtcs/sh_rtcs.c
SOURCES += $(MQX_ROOTDIR)/shell/source/rtcs/sh_ppp.c
SOURCES += $(MQX_ROOTDIR)/shell/source/rtcs/sh_ping.c
SOURCES += $(MQX_ROOTDIR)/shell/source/rtcs/sh_nstat.c
SOURCES += $(MQX_ROOTDIR)/shell/source/rtcs/sh_nat.c
SOURCES += $(MQX_ROOTDIR)/shell/source/rtcs/sh_load.c
SOURCES += $(MQX_ROOTDIR)/shell/source/rtcs/sh_iwconfig.c
SOURCES += $(MQX_ROOTDIR)/shell/source/rtcs/sh_ipconfig.c
SOURCES += $(MQX_ROOTDIR)/shell/source/rtcs/sh_ghbn.c
SOURCES += $(MQX_ROOTDIR)/shell/source/rtcs/sh_getroute.c
SOURCES += $(MQX_ROOTDIR)/shell/source/rtcs/sh_gate.c
SOURCES += $(MQX_ROOTDIR)/shell/source/rtcs/sh_ftpd.c
SOURCES += $(MQX_ROOTDIR)/shell/source/rtcs/sh_ftpc.c
SOURCES += $(MQX_ROOTDIR)/shell/source/rtcs/sh_exec.c
SOURCES += $(MQX_ROOTDIR)/shell/source/rtcs/sh_enet.c
SOURCES += $(MQX_ROOTDIR)/shell/source/rtcs/sh_eds.c
SOURCES += $(MQX_ROOTDIR)/shell/source/rtcs/sh_echod.c
SOURCES += $(MQX_ROOTDIR)/shell/source/rtcs/sh_clock.c
SOURCES += $(MQX_ROOTDIR)/shell/source/rtcs/sh_arpdisp.c

#-----------------------------------------------------------
# shell
#-----------------------------------------------------------
SOURCES += $(MQX_ROOTDIR)/shell/source/shell/shell.c
SOURCES += $(MQX_ROOTDIR)/shell/source/shell/sh_util.c
SOURCES += $(MQX_ROOTDIR)/shell/source/shell/sh_sh.c
SOURCES += $(MQX_ROOTDIR)/shell/source/shell/sh_help.c
SOURCES += $(MQX_ROOTDIR)/shell/source/shell/sh_exit.c
SOURCES += $(MQX_ROOTDIR)/shell/source/shell/sh_cmdlist.c
INCLUDE += $(MQX_ROOTDIR)/shell/source/include


#----------------------------------------------------------
# include partial makefiles
#----------------------------------------------------------
include $(MQX_ROOTDIR)/build/common/make/global.mak
-include $(MQX_ROOTDIR)/build/$(BOARD)/make/tools/$(TOOL).mak
include $(MQX_ROOTDIR)/build/common/make/verify.mak
include $(MQX_ROOTDIR)/build/common/make/lib-process.mak
#----------------------------------------------------------
