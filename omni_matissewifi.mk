$(call inherit-product, device/samsung/matissewifi/full_matissewifi.mk)

# Inherit some common Lineage stuff.
$(call inherit-product, vendor/omni/config/common_tablet.mk)

PRODUCT_NAME := omni_matissewifi
PRODUCT_BRAND := samsung
PRODUCT_MANUFACTURER := samsung
PRODUCT_DEVICE := matissewifi
PRODUCT_MODEL := SM-T530

PRODUCT_GMS_CLIENTID_BASE := android-samsung

# Use the latest approved GMS identifiers
PRODUCT_BUILD_PROP_OVERRIDES += \
    PRODUCT_NAME=matissewifixx \
    BUILD_FINGERPRINT=ssamsung/matissewifixx/matissewifi:4.4.2/KOT49H/T530XXU1ANAI:user/release-keys \
    PRIVATE_BUILD_DESC="matissewifixx-user 4.4.2 KOT49H T530XXU1ANAI release-keys"
