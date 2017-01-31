$(call inherit-product, device/samsung/matissewifi/full_matissewifi.mk)

# Inherit some common LineageOS stuff.
$(call inherit-product, vendor/cm/config/common_full_tablet_wifionly.mk)

PRODUCT_DEVICE := matissewifi
PRODUCT_NAME := lineage_matissewifi
