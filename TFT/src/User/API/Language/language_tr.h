#ifndef _LANGUAGE_TR_H_
#define _LANGUAGE_TR_H_

    // config.ini Parameter Settings - Screen Settings and Feature Settings
    #define STRING_EMULATED_M600          "Emulated M600"
    #define STRING_EMULATED_M109_M190     "Emulated M109 / M190"
    #define STRING_FILE_COMMENT_PARSING   "File comment parsing"
    #define STRING_ROTATED_UI             "Döndür"
    #define STRING_LANGUAGE               "Türkçe"
    #define STRING_ACK_NOTIFICATION       "Onay mesajı stili"
    #define STRING_FILES_SORT_BY          "Sort files by"
    #define STRING_FILES_LIST_MODE        "Liste Görünümü"
    #define STRING_FILENAME_EXTENSION     "Show filename extension"
    #define STRING_FAN_SPEED_PERCENTAGE   "Yüzdesel Fan Hızı"
    #define STRING_PERSISTENT_INFO        "Kalıcı Durum Mesajı"
    #define STRING_TERMINAL_ACK           "Terminalde onay mesajları"
    #define STRING_SERIAL_ALWAYS_ON       "Seri Bağ. Sürekli Açık"
    #define STRING_MARLIN_FULLSCREEN      "Tam Ekran Marlin Modu"
    #define STRING_MARLIN_SHOW_TITLE      "Marlin Modu Başlık Desteği"
    #define STRING_MARLIN_TYPE            "Marlin Mode Type"
    #define STRING_MOVE_SPEED             "Hareket Hızı(X Y Z)"
    #define STRING_AUTO_LOAD_LEVELING     "Seviyelemeyi Oto Kaydet/Yükle"
    #define STRING_PROBING_Z_OFFSET       "Probing for Z offset"
    #define STRING_Z_STEPPERS_ALIGNMENT   "Z Motor Oto-Hizalama"
    #define STRING_PS_AUTO_SHUTDOWN       "Oto. Kapanma"
    #define STRING_FIL_RUNOUT             "Filaman Sensörü"
    #define STRING_PL_RECOVERY            "Güç Kesintisi Kurtarma"
    #define STRING_PL_RECOVERY_HOME       "Güç Kesintisi Sıfırama"
    #define STRING_BTT_MINI_UPS           "BTT UPS Desteği"
    #define STRING_TOUCH_SOUND            "Dokunma Sesi"
    #define STRING_TOAST_SOUND            "Ara Bildirimler"
    #define STRING_ALERT_SOUND            "Uyarılar ve Sesler"
    #define STRING_HEATER_SOUND           "Heater notification"
    #define STRING_LCD_BRIGHTNESS         "Parlaklık"
    #define STRING_LCD_IDLE_BRIGHTNESS    "Parlaklık Kısılma Oranı"
    #define STRING_LCD_IDLE_TIME          "Parlaklık Kısılma Süresi"
    #define STRING_LCD_LOCK_ON_IDLE       "LCD lock on idle"
    #define STRING_KNOB_LED_COLOR         "Döner Düğme LED"
    #define STRING_KNOB_LED_IDLE          "Düğme LED bekleme"
    #define STRING_START_GCODE_ENABLED    "Başlangıç gcodeu kullan"
    #define STRING_END_GCODE_ENABLED      "Bitiş gcodeu kullan"
    #define STRING_CANCEL_GCODE_ENABLED   "İptal gcodeu kullan"

    // Machine Parameter Settings - Param Title (ordered by gcode)
    #define STRING_STEPS_SETTING          "mm/adım"
    #define STRING_FILAMENT_SETTING       "Filament Diameter"
    #define STRING_MAXACCELERATION        "Maks. İvmelenme"
    #define STRING_MAXFEEDRATE            "Maks. İlerleme Hızı"
    #define STRING_ACCELERATION           "İvmelenme"
    #define STRING_JERK                   "Jerk"
    #define STRING_JUNCTION_DEVIATION     "Junction Deviation"
    #define STRING_HOME_OFFSET            "Sıfır Offseti"
    #define STRING_FWRETRACT              "Yazılım Geriçekmesi"
    #define STRING_FWRECOVER              "Yazılım Geriitmesi"
    #define STRING_RETRACT_AUTO           "Oto. yazılım geriçekmesi"
    #define STRING_HOTEND_OFFSET          "2. Nozül Mesafesi"
    #define STRING_STEALTH_CHOP           "TMC StealthChop"
    #define STRING_DELTA_CONFIGURATION    "Delta Configuration"
    #define STRING_DELTA_TOWER_ANGLE      "Tower Angle Trim"
    #define STRING_DELTA_ENDSTOP          "Endstop Adjustments"
    #define STRING_PROBE_OFFSET           "Prob Offseti"
    #define STRING_LIN_ADVANCE            "Linear Advance"
    #define STRING_CURRENT_SETTING        "Sürücü Akımı (mA)"
    #define STRING_HYBRID_THRESHOLD       "TMC Hibrit Eşiği"
    #define STRING_BUMP_SENSITIVITY       "TMC Çarpma Hassasiyeti"
    #define STRING_MBL_OFFSET             "MBL Offset"

    // Machine Parameter Settings - Param Attributes (ordered by gcode)
    #define STRING_PRINT_ACCELERATION     "Baskı İvme"
    #define STRING_RETRACT_ACCELERATION   "Geriçekme İvme"
    #define STRING_TRAVEL_ACCELERATION    "Gezinti İvme"
    #define STRING_RETRACT_LENGTH         "Mesafe"
    #define STRING_RETRACT_SWAP_LENGTH    "Kafa Değ. Mesafe"
    #define STRING_RETRACT_FEEDRATE       "Hız"
    #define STRING_RETRACT_Z_LIFT         "Z Sıçraması"
    #define STRING_RECOVER_LENGTH         "Ekstra geriitme mesafesi"
    #define STRING_SWAP_RECOVER_LENGTH    "Ekstra geriitme değişim mesafesi"
    #define STRING_RECOVER_FEEDRATE       "Geriitme hızı"
    #define STRING_SWAP_RECOVER_FEEDRATE  "Geriitme değişim hızı"

    // Save / Load
    #define STRING_SAVE                   "Kaydet"
    #define STRING_RESTORE                "Geri Al"
    #define STRING_RESET                  "Sıfırla"
    #define STRING_EEPROM_SAVE_INFO       "Yazıcı ayarları kaydedilsin mi?"
    #define STRING_EEPROM_RESTORE_INFO    "Ayarlar kayıttan geri yüklensin mi?"
    #define STRING_EEPROM_RESET_INFO      "Fabrika ayarlarına dönülsün mü?"
    #define STRING_SETTINGS_SAVE          "Ayarları kaydet"
    #define STRING_SETTINGS_RESTORE       "Ayarları geri al"
    #define STRING_SETTINGS_RESET         "Varsayılan ayarlara dön"
    #define STRING_SETTINGS_RESET_INFO    "Tüm ayarlar varsayılana değerlere sıfırlanacak.\nDevam edilsin mi?"
    #define STRING_SETTINGS_RESET_DONE    "Tüm ayarlar başarıyla sıfırlandı.\nYeni ayarların etkili olması için cihazı yeniden başlatın."

    // Navigation Buttons
    #define STRING_PAGE_UP                "Yukarı"
    #define STRING_PAGE_DOWN              "Aşağı"
    #define STRING_UP                     "Yükselt"
    #define STRING_DOWN                   "Alçalt"
    #define STRING_NEXT                   "Sonraki"
    #define STRING_BACK                   "Geri"

    // Value Buttons
    #define STRING_INC                    "Arttır"
    #define STRING_DEC                    "Azalt"
    #define STRING_LOAD                   "Yükle"
    #define STRING_UNLOAD                 "Çıkar"
    #define STRING_ON                     "Açık"
    #define STRING_OFF                    "Kapalı"
    #define STRING_AUTO                   "AUTO"
    #define STRING_SMART                  "AKILLI"
    #define STRING_SLOW                   "Yavaş"
    #define STRING_NORMAL                 "Normal"
    #define STRING_FAST                   "Hızlı"
    #define STRING_ZERO                   "Sıfır"
    #define STRING_HALF                   "Yarım"
    #define STRING_FULL                   "Tam"
    #define STRING_CUSTOM                 "Diğer"
    #define STRING_CLEAR                  "Temizle"
    #define STRING_DEFAULT                "Varsayılan"

    // Action Buttons
    #define STRING_START                  "Başlat"
    #define STRING_STOP                   "Durdur"
    #define STRING_PAUSE                  "Duraklat"
    #define STRING_RESUME                 "Sürdür"
    #define STRING_INIT                   "Init"
    #define STRING_DISCONNECT             "Bağlt. Kes"
    #define STRING_SHUT_DOWN              "Kapat"
    #define STRING_FORCE_SHUT_DOWN        "Zorla Kapat"
    #define STRING_EMERGENCYSTOP          "AcilDurdur"
    #define STRING_PREHEAT                "Ön Isıtma"
    #define STRING_PREHEAT_BOTH           "Birlikte"
    #define STRING_COOLDOWN               "Soğutma"

    // Dialog Buttons
    #define STRING_CONFIRM                "\u088E Tamam" //Confirm Sign
    #define STRING_CANCEL                 "\u088F İptal" //Cancel Sign
    #define STRING_WARNING                "Uyarı" //Exclamation Sign
    #define STRING_CONTINUE               "Devam et"
    #define STRING_CONFIRMATION           "Emin misiniz?"

    // Process Status
    #define STRING_STATUS                 "Durum"
    #define STRING_READY                  "Hazır"
    #define STRING_BUSY                   "İşlem sürüyor, bekleyiniz..."
    #define STRING_LOADING                "Yükleniyor..."
    #define STRING_UNCONNECTED            "Yazıcı bağlı değil!"
    #define STRING_LISTENING              "TFT in Listening Mode!"

    // Process Info
    #define STRING_INFO                   "Bilgi" //Info Sign
    #define STRING_INVALID_VALUE          "Geçersiz değer(ler)"
    #define STRING_TIMEOUT_REACHED        "Zaman aşımı!"
    #define STRING_DISCONNECT_INFO        "Artık yazıcıyı bilgisayarınızdan kontrol edebilirsiniz!"
    #define STRING_SHUTTING_DOWN          "Kapatılıyor..."
    #define STRING_WAIT_TEMP_SHUT_DOWN    "Kafa sıcaklığının %d ℃ altına inmesini bekleyiniz." // The length of the info line is 24 characters, so the "temperatureof" will automatically be divided into "temperature of..."
    #define STRING_POWER_FAILED           "Baskı sürdürülsün mü?" //Question Sign
    #define STRING_PROCESS_RUNNING        "Proses zaten çalışıyor!"
    #define STRING_PROCESS_COMPLETED      "Proses tamamlandı!"
    #define STRING_PROCESS_ABORTED        "Proses durduruldu!"

    // TFT SD, U_DISK, Onboard SD, Filament Runout Process Commands / Status / Info
    #define STRING_TFTSD                  "SD Kart"
    #define STRING_READ_TFTSD_ERROR       "SD kart okunamadı!"
    #define STRING_TFTSD_INSERTED         "SD Kart Takıldı!"
    #define STRING_TFTSD_REMOVED          "SD Kart Çıkarıldı!"
    #define STRING_U_DISK                 "USB Disk"
    #define STRING_READ_U_DISK_ERROR      "USB disk okunamadı!"
    #define STRING_U_DISK_INSERTED        "USB Disk Takıldı!"
    #define STRING_U_DISK_REMOVED         "USB Disk Çıkarıldı!"
    #define STRING_ONBOARDSD              "Dahili SD"
    #define STRING_READ_ONBOARDSD_ERROR   "Dahili SD Okunamadı!"
    #define STRING_FILAMENT_RUNOUT        "Filaman Bitti!"

    // Steppers, Print, Probe Process Commands / Status / Info
    #define STRING_DISABLE_STEPPERS       "Motor Dur."
    #define STRING_XY_UNLOCK              "XY Dur."

    #define STRING_START_PRINT            "Baskıyı Başlat:\n%s?"
    #define STRING_STOP_PRINT             "Baskı durdurulsun mu?"
    #define STRING_IS_PAUSE               "Baskı esnasında ekstrüzyon yapılamaz.\nBaskı duraklatılsın mı?"
    #define STRING_M0_PAUSE               "M0 komutu ile duraklatıldı"

    #define STRING_TEST                   "Test"
    #define STRING_DEPLOY                 "Aç"
    #define STRING_STOW                   "Kapat"
    #define STRING_REPEAT                 "Tekrarla"

    // Printer Tools
    #define STRING_NOZZLE                 "Nozül"
    #define STRING_BED                    "Tabla"
    #define STRING_CHAMBER                "Kabin"
    #define STRING_FAN                    "Fan"

    #define STRING_BLTOUCH                "BLTouch"
    #define STRING_TOUCHMI                "TouchMi"

    // Values
    #define STRING_1_DEGREE               "1°C"
    #define STRING_5_DEGREE               "5°C"
    #define STRING_10_DEGREE              "10°C"

    #define STRING_001_MM                 "0.01mm"
    #define STRING_01_MM                  "0.1mm"
    #define STRING_1_MM                   "1mm"
    #define STRING_5_MM                   "5mm"
    #define STRING_10_MM                  "10mm"
    #define STRING_100_MM                 "100mm"
    #define STRING_200_MM                 "200mm"

    #define STRING_1_PERCENT              "%1"
    #define STRING_5_PERCENT              "%5"
    #define STRING_10_PERCENT             "%10"
    #define STRING_PERCENT_VALUE          "%%%d"

    #define STRING_5_SECONDS              "5 Sn."
    #define STRING_10_SECONDS             "10 Sn."
    #define STRING_30_SECONDS             "30 Sn."
    #define STRING_60_SECONDS             "1 Dak."
    #define STRING_120_SECONDS            "2 Dak."
    #define STRING_300_SECONDS            "5 Dak."

    // Colors
    #define STRING_WHITE                  "Beyaz"
    #define STRING_BLACK                  "Siyah"
    #define STRING_BLUE                   "Mavi"
    #define STRING_RED                    "Kırmızı"
    #define STRING_GREEN                  "Yeşil"
    #define STRING_CYAN                   "Camgöbeği"
    #define STRING_YELLOW                 "Sarı"
    #define STRING_BROWN                  "Kahverengi"
    #define STRING_GRAY                   "Gri"
    #define STRING_ORANGE                 "Turuncu"
    #define STRING_INDIGO                 "Çivit Mavisi"
    #define STRING_VIOLET                 "Menekşe"
    #define STRING_MAGENTA                "Eflatun"
    #define STRING_PURPLE                 "Mor"
    #define STRING_LIME                   "Çim Rengi"
    #define STRING_DARKBLUE               "Koyu Mavi"
    #define STRING_DARKGREEN              "Koyu Yeşil"
    #define STRING_DARKGRAY               "Koyu Gri"

    // Menus
    #define STRING_HEAT                   "Isıt"
    #define STRING_MOVE                   "Hareket"
    #define STRING_HOME                   "Sıfırla"
    #define STRING_PRINT                  "Yazdır"
    #define STRING_EXTRUDE                "Filament"
    #define STRING_SETTINGS               "Ayarlar"
    #define STRING_SCREEN_SETTINGS        "Ekran"
    #define STRING_UI_SETTINGS            "UI"
    #define STRING_SOUND                  "Ses"
    #define STRING_MARLIN_MODE_SETTINGS   "MarlinMode"
    #define STRING_MACHINE_SETTINGS       "Makine"
    #define STRING_PARAMETER_SETTINGS     "Parametre Ayarları"
    #define STRING_FEATURE_SETTINGS       "Özellik"
    #define STRING_CONNECTION_SETTINGS    "Bağlantı"
    #define STRING_SERIAL_PORTS           "S. Ports"
    #define STRING_BAUDRATE               "BaudRate"
    #define STRING_EEPROM_SETTINGS        "EEPROM"
    #define STRING_RGB_SETTINGS           "LED Rengi"
    #define STRING_RGB_OFF                "LED'i Kapat"
    #define STRING_TERMINAL               "Terminal"
    #define STRING_LEVELING               "Seviyele"
    #define STRING_POINT_1                "1.Nokta"
    #define STRING_POINT_2                "2.Nokta"
    #define STRING_POINT_3                "3.Nokta"
    #define STRING_POINT_4                "4.Nokta"
    #define STRING_POINT_5                "5.Nokta"
    #define STRING_BED_LEVELING           "Seviyeleme"
    #define STRING_BL_COMPLETE            "Seviyeleme Tamamlandı"
    #define STRING_BL_SMART_FILL          "Eksik algılama noktaları oluşturuldu.\nNot: Kaydetmeyi unutmayın!"
    #define STRING_BL_ENABLE              "BL: açık"
    #define STRING_BL_DISABLE             "BL: kapalı"
    #define STRING_ABL                    "Sev.-ABL"
    #define STRING_BBL                    "Sev.-BBL"
    #define STRING_UBL                    "Sev.-UBL"
    #define STRING_MBL                    "Sev.-MBL"
    #define STRING_MBL_SETTINGS           "Izgara Seviyeleme"
    #define STRING_ABL_SETTINGS           "Otomatik Seviyeleme"
    #define STRING_ABL_SETTINGS_BBL       "Bilineer Seviyeleme"
    #define STRING_ABL_SETTINGS_UBL       "Birleşik Seviyeleme"
    #define STRING_ABL_SETTINGS_UBL_SAVE  "Yuvaya Kaydet"
    #define STRING_ABL_SETTINGS_UBL_LOAD  "Yuvadan Oku"
    #define STRING_ABL_SLOT0              "Yuva 0"
    #define STRING_ABL_SLOT1              "Yuva 1"
    #define STRING_ABL_SLOT2              "Yuva 2"
    #define STRING_ABL_SLOT3              "Yuva 3"
    #define STRING_ABL_SLOT_EEPROM        "Yuvayı hafızaya al? (EEPROM a kaydet)"
    #define STRING_ABL_Z                  "Z Etki"
    #define STRING_LEVEL_CORNER           "L corner"
    #define STRING_P_OFFSET               "P Offset"
    #define STRING_H_OFFSET               "H Offset"
    #define STRING_DISTANCE               "Mesafe"
    #define STRING_LOAD_UNLOAD            "Yükle/Çıkar"
    #define STRING_LOAD_UNLOAD_SHORT      "Yük./Çık."
    #define STRING_TOUCHSCREEN_ADJUST     "Kalibre"
    #define STRING_MORE                   "Ayar"
    #define STRING_SCREEN_INFO            "Bilgi"
    #define STRING_BG_COLOR               "arkaplan renk"
    #define STRING_FONT_COLOR             "font renk"
    #define STRING_PERCENTAGE             "Yüzde"
    #define STRING_PERCENTAGE_SPEED       "Hız"
    #define STRING_PERCENTAGE_FLOW        "Akış"
    #define STRING_BABYSTEP               "MiniAdım"
    #define STRING_X_INC                  "X+"
    #define STRING_Y_INC                  "Y+"
    #define STRING_Z_INC                  "Z+"
    #define STRING_X_DEC                  "X-"
    #define STRING_Y_DEC                  "Y-"
    #define STRING_Z_DEC                  "Z-"
    #define STRING_X                      "X"
    #define STRING_Y                      "Y"
    #define STRING_Z                      "Z"
    #define STRING_ADJUST_TITLE           "Dokunmatik Ekran Kalibrasyonu"
    #define STRING_ADJUST_INFO            "Lütfen kırmızı noktaya tıklayın"
    #define STRING_ADJUST_OK              "Kalibrasyon başarılı."
    #define STRING_ADJUST_FAILED          "Kalibrasyon başarısız, lütfen tekrar deneyiniz."
    #define STRING_UNIFIEDMOVE            "Hareket"
    #define STRING_UNIFIEDHEAT            "Isıtma/Fan"
    #define STRING_TOUCH_TO_EXIT          "Çıkmak için ekrana dokunun"
    #define STRING_MAINMENU               "Menü"
    #define STRING_LEVELING_EDGE_DISTANCE "Tabla kenar mesafesi"
    #define STRING_TUNING                 "Ayar"
    #define STRING_PID                    "PID"
    #define STRING_PID_TITLE              "PID oto. ayar"
    #define STRING_PID_START_INFO         "PID oto. ayarlama zaman alabilir.\nDevam?"
    #define STRING_PID_START_INFO_2       "PID oto. ayar sürüyor!"
    #define STRING_PID_START_INFO_3       "Tamamlanana kadar ekrana dokunmayınız (yeşil led açık)!"
    #define STRING_TUNE_EXTRUDER          "Ext. Adım"
    #define STRING_TUNE_EXT_EXTRUDE_100   "Ext. 100mm"
    #define STRING_TUNE_EXT_TEMP          "Ekstruder ayarlama | Isı"
    #define STRING_TUNE_EXT_MARK120MM     "Filamanda 120mm'yi işaretleyin\nHazır olunca '%s'e basın\nEkstrüzyondan sonra kalan mesafeyi ölçün"
    #define STRING_TUNE_EXT_HEATOFF       "Isıtıcıyı kapat?"
    #define STRING_TUNE_EXT_ADJ_ESTEPS    "E-Adım ayarla"
    #define STRING_TUNE_EXT_ESTEPS_SAVED  "Yeni E-Adımı kaydedildi!\nEEPROM'a kaydetmeyi unutmayınız.\nYeni Değer: %0.2f"
    #define STRING_TUNE_EXT_MEASURED      "Kalan mesafe:"
    #define STRING_TUNE_EXT_OLD_ESTEP     "Eski E-Adımı: %0.2f"
    #define STRING_TUNE_EXT_NEW_ESTEP     "Yeni E-Adımı: %0.2f"
    #define STRING_NOTIFICATIONS          "Bildirimler"
    #define STRING_MESH_EDITOR            "Ölç. Düzelt"
    #define STRING_MESH_TUNER             "Ölçüm Düzeltme"
    #define STRING_CASE_LIGHT             "Aydınlatma"
    #define STRING_LOAD_STARTED           "Filaman yüklenecek.\nİşlem tamamlanana kadar başka işlem başlatmayınız."
    #define STRING_UNLOAD_STARTED         "Filaman çıkartılacak.\nİşlem tamamlanana kadar başka işlem başlatmayınız."
    #define STRING_HEATERS_ON             "Isıtıcılar devrede.\nIsıtıcılar kapatılsın mı?"
    #define STRING_PRINT_FINISHED         "   Baskı\n   tamamlandı"
    #define STRING_MAIN_SCREEN            "Ana"
    #define STRING_PREVIOUS_PRINT_DATA    "Özet"
    #define STRING_PRINT_TIME             "Baskı Süresi: %02u:%02u:%02u"
    #define STRING_FILAMENT_LENGTH        "\nFilament uzunluğu: %1.2fm"
    #define STRING_FILAMENT_WEIGHT        "\nFilament ağırlığı: %1.2fg"
    #define STRING_FILAMENT_COST          "\nFilament maliyeti: %1.2f"
    #define STRING_NO_FILAMENT_STATS      "\nFilament bilgisi yok."
    #define STRING_CLICK_FOR_MORE         "Özet için dokun"
    #define STRING_EXT_TEMPLOW            "Ekstruder sıcaklığı minimum sıcaklığın altında (%d℃)."
    #define STRING_HEAT_HOTEND            "Ekstruderi %d℃ ye ısıt?"
    #define STRING_DESIRED_TEMPLOW        "Hotend temperature is below\ndesired temperature (%d℃)."
    #define STRING_WAIT_HEAT_UP           "Wait for it to heat up."
    #define STRING_Z_ALIGN                "Z Hizala"
    #define STRING_MACROS                 "Macros"
    #define STRING_MESH_VALID             "Mesh Validation"
    #define STRING_CONNECT_PROBE          "Connect probe before starting the process. Make sure to disconnect it afterwards."
    #define STRING_DISCONNECT_PROBE       "Make sure you have disconnected probe before using this feature."
    #define STRING_CALIBRATION            "Calibrate"

#endif
