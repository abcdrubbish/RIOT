include ../Makefile.tests_common

# the test needs real hardware to run
TEST_ON_CI_BLACKLIST += all

# Blacklist iotlab boards since a different device has the same i2c address
BOARD_BLACKLIST := iotlab-a8-m3 \
                   iotlab-m3

USEMODULE += ds3231
USEMODULE += xtimer
USEMODULE += shell

include $(RIOTBASE)/Makefile.include
