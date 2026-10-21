# Description
The MacroPad is a general use macro keypad, designed for ECAD, CAD, Photoshop, Blender and many other professionnal softwares. Its purpose is to make multiple combinations within one click, so shortcuts (ex : CTRL + ALT + SHIFT or simply write lots of words). It will be working on both BLE and USB HID.

![image alt](https://github.com/YasinC4342/BLE-MacroPad/blob/56c82cb52961fdbd2fd40449b1ed63050475df9e/screenshots/rendered.png)

# Why i made this ?

My goal was to make 3D models quickly for the customers who needs it earlier than expected, and also for blender if i ever forgot of which combination i use for making a Bezel for example. Since i have a compact keyboard (about 60-65%), i needed more keys without sacrificing my workspace and also to put it on the side of the desk when i doesn't need it. Anyway, here is my first prototype (i cannot 3d print parts now because I am in the process of moving but as soon as possible) :
Link : [**https://wokwi.com/projects/478323132743048193**](https://wokwi.com/projects/478323132743048193)

![image alt](https://github.com/YasinC4342/BLE-MacroPad/blob/f7c8d0690f8ba1090f7a12f084044ea9144bfe9d/screenshots/prototype.png)

For information, i used examples of the libraries and merge all the examples in one code (with adjustements of course) to see if it works. Unfortunately, i don't own any esp32 but making simulations on Wowki or Tinkercad, so no bluetooth or usb, just basic testing.
 
# Features
- O.96inch OLED display
- 12 adressable RGB LEDs
- 3x4 Cherry MX switches
- USB type C
- Obviously works on bluetooth and USB HID
- A rotary encoder for controling volume with ease, for example.

![image alt](https://github.com/YasinC4342/BLE-MacroPad/blob/e4277bfc1b626efe080e17bea29c4abbc86e7139/screenshots/cad.png)
![image alt](https://github.com/YasinC4342/BLE-MacroPad/blob/e4277bfc1b626efe080e17bea29c4abbc86e7139/screenshots/pcb.png)
![image alt](https://github.com/YasinC4342/BLE-MacroPad/blob/e57600317be44bef8a320cb266dc5060c91fbd37/screenshots/front.png)
![image alt](https://github.com/YasinC4342/BLE-MacroPad/blob/e57600317be44bef8a320cb266dc5060c91fbd37/screenshots/back.png)

# Requirements
The required components are down below :

| ID | Reference                                         | Designation                                 | Quantity | Value              | Price EUR  | Links                                                                                                                                                                                                                                                                     |
|----|---------------------------------------------------|---------------------------------------------|----------|--------------------|------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 1  | C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11, C12 | 0805 SMD Capacitor                          | 12       | 0.1uF              | 1,8 €      | [Link](https://www.aliexpress.com/item/1005012588693858.html?spm=a2g0o.cart.0.0.49d538daiCbZka&mp=1&pdp_npi=6%40dis%21EUR%21EUR%207.19%21EUR%203.59%21%21EUR%203.59%21%21%21%400b15834017924999145227292e0d64%2112000058767763112%21ct%21FR%214218883440%21%211%210%21)   |
| 2  | C13                                               | 0805 SMD Capacitor                          | 1        | 10uF               | 1,8 €      | [Link](https://www.aliexpress.com/item/1005012588693858.html?spm=a2g0o.cart.0.0.49d538daiCbZka&mp=1&pdp_npi=6%40dis%21EUR%21EUR%207.19%21EUR%203.59%21%21EUR%203.59%21%21%21%400b15834017924999145227292e0d64%2112000058767763112%21ct%21FR%214218883440%21%211%210%21)   |
| 3  | C14                                               | Tantalum Capacitor, Kemet-A                 | 1        | 10uF               | 1,32 €     | [Link](https://www.aliexpress.com/item/32698733093.html?spm=a2g0o.cart.0.0.5f4c38dagRCLxs&mp=1&pdp_npi=6%40dis%21EUR%21EUR%201.32%21EUR%201.32%21%21EUR%201.32%21%21%21%400b88abba17925010044955313e0ce6%2110000000254411173%21ct%21FR%214218883440%21%211%210%21)        |
| 4  | C15                                               | Tantalum Capacitor, Kemet-A                 | 1        | 22uF               | 1,59 €     | [Link](https://www.aliexpress.com/item/32698733093.html?spm=a2g0o.cart.0.0.5f4c38dagRCLxs&mp=1&pdp_npi=6%40dis%21EUR%21EUR%201.59%21EUR%201.59%21%21EUR%201.59%21%21%21%400b88abba17925010044955313e0ce6%2110000000254411174%21ct%21FR%214218883440%21%211%210%21)        |
| 5  | D1, D2, D3, D4, D5, D6, D7, D8, D9, D10, D11, D12 | SK6812 Mini Reversed SMD RGB LEDs           | 12       | SK6812             | 4,39 €     | [Link](https://www.aliexpress.com/item/1005005186515165.html?spm=a2g0o.cart.0.0.49d538daiCbZka&mp=1&pdp_npi=6%40dis%21EUR%21EUR%204.39%21EUR%204.39%21%21EUR%204.39%21%21%21%400b15834017924999145227292e0d64%2112000032026120161%21ct%21FR%214218883440%21%211%210%21)   |
| 6  | D13                                               | 1206 SMD Diode                              | 1        | Diode              | -          | **Already own the component**                                                                                                                                                                                                                                                 |
| 7  | J1                                                | USB-C Female connector 12 pin               | 1        | USB_C_female_14P   | 2,18 €     | [Link](https://www.aliexpress.com/item/1005005371954812.html?spm=a2g0o.cart.0.0.10c238daxwhGx7&mp=1&pdp_npi=6%40dis%21EUR%21EUR%202.18%21EUR%202.18%21%21EUR%202.18%21%21%21%400b88abba17925006340776757e0ce6%2112000032786473720%21ct%21FR%214218883440%21%211%210%21)   |
| 8  | R1                                                | 1206 SMD Resistor                           | 1        | 470R               | 0,95 €     | [Link](https://www.aliexpress.com/item/1005012304341288.html?spm=a2g0o.cart.0.0.49d538daiCbZka&mp=1&pdp_npi=6%40dis%21EUR%21EUR%207.56%21EUR%203.79%21%21EUR%203.79%21%21%21%400b15834017924999145227292e0d64%2112000058017651589%21ct%21FR%214218883440%21%211%210%21)   |
| 9  | R2, R3, R5, R6                                    | 1206 SMD Resistor                           | 4        | 5.1K               | 0,95 €     | [Link](https://www.aliexpress.com/item/1005012304341288.html?spm=a2g0o.cart.0.0.49d538daiCbZka&mp=1&pdp_npi=6%40dis%21EUR%21EUR%207.56%21EUR%203.79%21%21EUR%203.79%21%21%21%400b15834017924999145227292e0d64%2112000058017651589%21ct%21FR%214218883440%21%211%210%21)   |
| 10 | R4                                                | 1206 SMD Resistor                           | 1        | 10K                | 0,95 €     | [Link](https://www.aliexpress.com/item/1005012304341288.html?spm=a2g0o.cart.0.0.49d538daiCbZka&mp=1&pdp_npi=6%40dis%21EUR%21EUR%207.56%21EUR%203.79%21%21EUR%203.79%21%21%21%400b15834017924999145227292e0d64%2112000058017651589%21ct%21FR%214218883440%21%211%210%21)   |
| 11 | R7                                                | 1206 SMD Resistor                           | 1        | 1.8K               | 0,95 €     | [Link](https://www.aliexpress.com/item/1005012304341288.html?spm=a2g0o.cart.0.0.49d538daiCbZka&mp=1&pdp_npi=6%40dis%21EUR%21EUR%207.56%21EUR%203.79%21%21EUR%203.79%21%21%21%400b15834017924999145227292e0d64%2112000058017651589%21ct%21FR%214218883440%21%211%210%21)   |
| 12 | R9                                                | 2010 SMD Resistor                           | 1        | 0R                 | -          | **Already own the component**                                                                                                                                                                                                                                                 |
| 13 | S1, S2, S3, S4, S5, S6, S7, S8, S9, S10, S11, S12 | Cherry MX1A-11NA Switches                   | 12       | MX1A-11NA          | 5,30 €     | [Link](https://www.aliexpress.com/item/1005008089864080.html?spm=a2g0o.cart.0.0.49d538daiCbZka&mp=1&pdp_npi=6%40dis%21EUR%21EUR%202.65%21EUR%202.65%21%21EUR%202.65%21%21%21%400b15834017924999145227292e0d64%2112000045838677521%21ct%21FR%214218883440%21%212%210%21)   |
| 14 | S13                                               | PEC11R Rotary encoder                       | 1        | PEC12R_Encoder     | 3,99 €     | [Link](https://www.aliexpress.com/item/1005007391341287.html?spm=a2g0o.cart.0.0.10c238daxwhGx7&mp=1&pdp_npi=6%40dis%21EUR%21EUR%2011.61%21EUR%203.99%21%21EUR%203.99%21%21%21%400b88abba17925006340776757e0ce6%2112000040556905956%21ct%21FR%214218883440%21%211%210%21)  |
| 15 | SW1                                               | SPDT Slide switch                           | 1        | SW_SPDT            | -          | **Already own the component**                                                                                                                                                                                                                                                 |
| 16 | SW2                                               | Push button 6x3.5mm                         | 1        | SW_Push            | 3,59 €     | [Link](https://www.aliexpress.com/item/1005007177692594.html?spm=a2g0o.cart.0.0.10c238daxwhGx7&mp=1&pdp_npi=6%40dis%21EUR%21EUR%203.59%21EUR%203.59%21%21EUR%203.59%21%21%21%400b88abba17925006340776757e0ce6%2112000039712603252%21ct%21FR%214218883440%21%211%210%21)   |
| 17 | U1                                                | ESP32-S3-WROOM-1                            | 1        | ESP32-S3-WROOM-1   | 6,59 €     | [Link](https://www.aliexpress.com/item/1005009314619102.html?spm=a2g0o.cart.0.0.49d538daiCbZka&mp=1&pdp_npi=6%40dis%21EUR%21EUR%203.77%21EUR%203.39%21%21EUR%203.39%21%21%21%400b15834017924999145227292e0d64%2112000048716802392%21ct%21FR%214218883440%21%211%210%21)   |
| 18 | U2                                                | 0.96" OLED Display module                   | 1        | 0,96"  OLED Module | 2,56 €     | [Link](https://www.aliexpress.com/item/1005006141235306.html?spm=a2g0o.cart.0.0.10c238daxwhGx7&mp=1&pdp_npi=6%40dis%21EUR%21EUR%202.56%21EUR%202.56%21%21EUR%202.56%21%21%21%400b88abba17925006340776757e0ce6%2112000035944225407%21ct%21FR%214218883440%21%211%210%21)   |
| 20 | PCB                                               | Main PCB                                    | 1        | PCB                | 3,57 €     | [Link](https://cart.jlcpcb.com/fr/quote?spm=jlcpcb.Public.2006)                                                                                                                                                                                                           
| **TOTAL** | 43,88 € | 49,24 $ |

**AI Disclosure:**
During this project, I used AI to help with debugging KiCad DRC errors and to assist in writing firmware, and to check if my circuit is fine WITHOUT listing any components, just giving me advice and i did on my own and figured out later.

For 3d parts, I wiil 3d print them, so not included in the list of shipping or buying.

# Downloads
Download the complete hardware design package from the [**v2.0.0 Release**](https://github.com/YasinC4342/BLE-MacroPad/releases/tag/v2.0.0).
