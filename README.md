# Automated-blinds


## PCB - Discrete parts
1. ESP32
2. Battery voltage to 3.3V Buck-converter
3. Battery voltage to 5V Boost-converter
4. Battery charger/management
5. Boot-loader?
6. Stepper motor controller


## Stepper motors
### Working principle
![image](https://user-images.githubusercontent.com/60798059/121886381-999ad300-cd15-11eb-94fa-14c56eeeafcd.png)

Source: https://www.monolithicpower.com/en/stepper-motors-basics-types-uses

### 28BYJ-48
https://www.digikey.com/en/products/detail/mikroelektronika/MIKROE-1530/5724295?s=N4IgTCBcDa4BwCECaApAtAFjiAugXyA
https://www.digikey.com/en/products/detail/seeed-technology-co-ltd/108990003/5487797
https://www.digikey.com/en/products/detail/digilent-inc/290-028/7068780

### Controlling motor
Source: https://lastminuteengineers.com/28byj48-stepper-motor-arduino-tutorial/

#### ULN2003 Darlington array
Through hole: https://www.digikey.com/en/products/detail/stmicroelectronics/ULN2003A/599603

Surface mount: https://www.digikey.com/en/products/filter/transistors-bipolar-bjt-arrays/277?s=N4IgjCBcoGwJxVAYygMwIYBsDOBTANCAPZQDaIALAAxwDMdIAuoQA4AuUIAymwE4CWAOwDmIAL5jCAJjIgAqgBkAclKpVaTMUA

#### Stepper library
https://github.com/arduino-libraries/Stepper


## Battery


## WiFi communication
https://esphome.io/guides/getting_started_hassio.html
https://www.home-assistant.io/installation/odroid/
https://www.home-assistant.io/installation/windows


## Prototype 1
ESP32 DevKitc V4 pinout: https://randomnerdtutorials.com/esp32-pinout-reference-gpios/
