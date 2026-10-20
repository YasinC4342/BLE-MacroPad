---
title: "BLE-MacroPad"
github: "https://github.com/YasinC4342/BLE-MacroPad"
description: "A custom Bluetooth macro keypad for CAD, ECAD, and professional software."
created_at: "2026-10-17"
total_time: "8h 20m"
---

# BLE-MacroPad — Project Journal

The BLE-MacroPad is a custom Bluetooth macro keypad designed for ECAD, CAD, image editing, 3D modelling, and other professional applications. Its purpose is to simplify repetitive tasks by triggering keyboard shortcuts, key combinations, and predefined text sequences with a single key press.

This journal documents the design process, engineering decisions, challenges, and preparation of the hardware manufacturing files. The project is currently at the design stage: the hardware has not yet been physically manufactured or tested.

## October 1, 2026: PCB Design in KiCad

I designed the macro keypad layout in Fusion 360, integrating the 3×4 key matrix, OLED display, RGB LEDs, and USB-C connector into a compact PCB measuring approximately 75 × 77 mm.

**Design decisions**
- 12 programmable keys in a 3×4 layout.
- OLED display for status information.
- Addressable RGB LEDs for visual feedback.
- Accessible USB-C connector.
- PCB and enclosure compatibility.

**Challenges**

I used Fusion 360 to check component spacing, prevent mechanical interference, and verify the layout before manufacturing.

**Validation status**

- ERC: completed successfully.
- DRC: completed successfully.
- Physical PCB testing: not performed yet.
- Bluetooth range: not measured yet.

**Images**

![KiCad electronic schematic](https://raw.githubusercontent.com/YasinC4342/BLE-MacroPad/main/screenshots/schematic.png)

![BLE-MacroPad PCB layout in KiCad](https://raw.githubusercontent.com/YasinC4342/BLE-MacroPad/main/screenshots/pcb.png)

![Back view of the PCB](https://raw.githubusercontent.com/YasinC4342/BLE-MacroPad/main/screenshots/back.png)

![Front view of the PCB](https://raw.githubusercontent.com/YasinC4342/BLE-MacroPad/main/screenshots/front.png)

![KiCad Electrical Rules Check results](https://raw.githubusercontent.com/YasinC4342/BLE-MacroPad/main/screenshots/ERC.png)

![KiCad Design Rules Check results](https://raw.githubusercontent.com/YasinC4342/BLE-MacroPad/main/screenshots/DRC.png)

**Total time spent: 4h 50m**

## October 6, 2026: Mechanical Design and Component Layout

I designed the macro keypad layout in Fusion 360, integrating 12 keys in a 3×4 layout, an OLED display, RGB LEDs, and a USB Type-C connector.

I selected a PCB size of approximately 75 × 77 mm to keep the device compact and functional.

**Design decisions**
- 12 programmable keys.
- OLED display and RGB feedback.
- Accessible USB Type-C connector.
- Mechanical compatibility with the enclosure.

**Challenges**

I used Fusion 360 to check component spacing, identify potential interference, and verify the layout before manufacturing.

**Images**

![Fusion 360 mechanical CAD design](https://raw.githubusercontent.com/YasinC4342/BLE-MacroPad/main/screenshots/cad.png)

![Rendered BLE-MacroPad model](https://raw.githubusercontent.com/YasinC4342/BLE-MacroPad/main/screenshots/rendered.png)

**Total time spent: 3h**

## October 14, 2026: Preparing the Manufacturing Files

I prepared the manufacturing package for release v2.0.0 on GitHub, including PCB fabrication files, the BOM, mechanical exports, and project documentation.

**Deliverables**

PCB manufacturing files.

Bill of materials (BOM).

Mechanical model exports.

Documentation and visual references.

**Challenges**

I organised the files to simplify fabrication and component sourcing. The BOM is essential for identifying compatible components and estimating the total prototype cost.

| ID | Reference                                         | Footprint                                   | Quantity | Designation        | Price Euro | Links                                                                                                                                                                                                                                                                                                                                             | TOTAL Euro                       |   |
|----|---------------------------------------------------|---------------------------------------------|----------|--------------------|------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|----------------------------------|---|
| 1  | C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11, C12 | C_0805_2012Metric_Pad1.18x1.45mm_HandSolder | 12       | 0.1uF              | 1.795      | https://www.aliexpress.com/item/1005012588693858.html?spm=a2g0o.cart.0.0.49d538daiCbZka&mp=1&pdp_npi=6%40dis%21EUR%21EUR%207.19%21EUR%203.59%21%21EUR%203.59%21%21%21%400b15834017924999145227292e0d64%2112000058767763112%21ct%21FR%214218883440%21%211%210%21                                                                                   | 40.31                            |   |
| 2  | C13                                               | C_0805_2012Metric_Pad1.18x1.45mm_HandSolder | 1        | 10uF               | 1.795      | https://www.aliexpress.com/item/1005012588693858.html?spm=a2g0o.cart.0.0.49d538daiCbZka&mp=1&pdp_npi=6%40dis%21EUR%21EUR%207.19%21EUR%203.59%21%21EUR%203.59%21%21%21%400b15834017924999145227292e0d64%2112000058767763112%21ct%21FR%214218883440%21%211%210%21                                                                                   | 0 euro = already have components |   |
| 3  | C14                                               | CP_EIA-3216-18_Kemet-A_HandSolder           | 1        | 10uF               | 1.32       | https://www.aliexpress.com/item/32698733093.html?spm=a2g0o.cart.0.0.5f4c38dagRCLxs&mp=1&pdp_npi=6%40dis%21EUR%21EUR%201.32%21EUR%201.32%21%21EUR%201.32%21%21%21%400b88abba17925010044955313e0ce6%2110000000254411173%21ct%21FR%214218883440%21%211%210%21                                                                                        |                                  |   |
| 4  | C15                                               | CP_EIA-3216-18_Kemet-A_HandSolder           | 1        | 22uF               | 1.59       | https://www.aliexpress.com/item/32698733093.html?spm=a2g0o.cart.0.0.5f4c38dagRCLxs&mp=1&pdp_npi=6%40dis%21EUR%21EUR%201.59%21EUR%201.59%21%21EUR%201.59%21%21%21%400b88abba17925010044955313e0ce6%2110000000254411174%21ct%21FR%214218883440%21%211%210%21                                                                                        | PCB : 3,57 euro                  |   |
| 5  | D1, D2, D3, D4, D5, D6, D7, D8, D9, D10, D11, D12 | MX_SK6812MINI-E                             | 12       | SK6812             | 4.39       | https://www.aliexpress.com/item/1005005186515165.html?spm=a2g0o.cart.0.0.49d538daiCbZka&mp=1&pdp_npi=6%40dis%21EUR%21EUR%204.39%21EUR%204.39%21%21EUR%204.39%21%21%21%400b15834017924999145227292e0d64%2112000032026120161%21ct%21FR%214218883440%21%211%210%21                                                                                   |                                  |   |
| 6  | D13                                               | D_1206_3216Metric                           | 1        | Diode              | 0          |                                                                                                                                                                                                                                                                                                                                                   |                                  |   |
| 7  | J1                                                | USB_C_Receptacle_Palconn_UTC16-G            | 1        | USB_C_female_14P   | 2.18       | https://www.aliexpress.com/item/1005005371954812.html?spm=a2g0o.cart.0.0.10c238daxwhGx7&mp=1&pdp_npi=6%40dis%21EUR%21EUR%202.18%21EUR%202.18%21%21EUR%202.18%21%21%21%400b88abba17925006340776757e0ce6%2112000032786473720%21ct%21FR%214218883440%21%211%210%21                                                                                   |                                  |   |
| 8  | R1                                                | R_1206_3216Metric_Pad1.30x1.75mm_HandSolder | 1        | 470R               | 0.9475     | https://www.aliexpress.com/item/1005012304341288.html?spm=a2g0o.cart.0.0.49d538daiCbZka&mp=1&pdp_npi=6%40dis%21EUR%21EUR%207.56%21EUR%203.79%21%21EUR%203.79%21%21%21%400b15834017924999145227292e0d64%2112000058017651589%21ct%21FR%214218883440%21%211%210%21                                                                                   |                                  |   |
| 9  | R2, R3, R5, R6                                    | R_1206_3216Metric_Pad1.30x1.75mm_HandSolder | 4        | 5.1K               | 0.9475     |                                                                                                                                                                                                                                                                                                                                                   |                                  |   |
| 10 | R4                                                | R_1206_3216Metric_Pad1.30x1.75mm_HandSolder | 1        | 10K                | 0.9475     |                                                                                                                                                                                                                                                                                                                                                   |                                  |   |
| 11 | R7                                                | R_1206_3216Metric_Pad1.30x1.75mm_HandSolder | 1        | 1.8K               | 0.9475     |                                                                                                                                                                                                                                                                                                                                                   |                                  |   |
| 12 | R9                                                | R_2010_5025Metric_Pad1.40x2.65mm_HandSolder | 1        | 0R                 | 0          |                                                                                                                                                                                                                                                                                                                                                   |                                  |   |
| 13 | S1, S2, S3, S4, S5, S6, S7, S8, S9, S10, S11, S12 | SW_Cherry_MX_1.00u_PCB                      | 12       | MX1A-11NA          | 5.3        | https://www.aliexpress.com/item/1005008089864080.html?spm=a2g0o.cart.0.0.49d538daiCbZka&mp=1&pdp_npi=6%40dis%21EUR%21EUR%202.65%21EUR%202.65%21%21EUR%202.65%21%21%21%400b15834017924999145227292e0d64%2112000045838677521%21ct%21FR%214218883440%21%212%210%21                                                                                   |                                  |   |
| 14 | S13                                               | XDCR_PEC12R-4217F-S0024                     | 1        | PEC12R_Encoder     | 3.99       | https://www.aliexpress.com/item/1005007391341287.html?spm=a2g0o.cart.0.0.10c238daxwhGx7&mp=1&pdp_npi=6%40dis%21EUR%21EUR%2011.61%21EUR%203.99%21%21EUR%203.99%21%21%21%400b88abba17925006340776757e0ce6%2112000040556905956%21ct%21FR%214218883440%21%211%210%21                                                                                  |                                  |   |
| 15 | SW1                                               | SW_Slide_SPDT_Angled_CK_OS102011MA1Q        | 1        | SW_SPDT            | 0          |                                                                                                                                                                                                                                                                                                                                                   |                                  |   |
| 16 | SW2                                               | SW_PUSH_1P1T_6x3.5mm_H5.0_APEM_MJTP1250     | 1        | SW_Push            | 3.59       | https://www.aliexpress.com/item/1005007177692594.html?spm=a2g0o.cart.0.0.10c238daxwhGx7&mp=1&pdp_npi=6%40dis%21EUR%21EUR%203.59%21EUR%203.59%21%21EUR%203.59%21%21%21%400b88abba17925006340776757e0ce6%2112000039712603252%21ct%21FR%214218883440%21%211%210%21                                                                                   |                                  |   |
| 17 | U1                                                | ESP32-S3-WROOM-1                            | 1        | ESP32-S3-WROOM-1   | 6.59       | https://www.aliexpress.com/item/1005009314619102.html?spm=a2g0o.cart.0.0.49d538daiCbZka&mp=1&pdp_npi=6%40dis%21EUR%21EUR%203.77%21EUR%203.39%21%21EUR%203.39%21%21%21%400b15834017924999145227292e0d64%2112000048716802392%21ct%21FR%214218883440%21%211%210%21                                                                                   |                                  |   |
| 18 | U2                                                | MODULE_DM-OLED096-636                       | 1        | 0,96"" OLED Module | 2.56       | https://www.aliexpress.com/item/1005006141235306.html?spm=a2g0o.cart.0.0.10c238daxwhGx7&mp=1&pdp_npi=6%40dis%21EUR%21EUR%202.56%21EUR%202.56%21%21EUR%202.56%21%21%21%400b88abba17925006340776757e0ce6%2112000035944225407%21ct%21FR%214218883440%21%211%210%21                                                                                   |                                  |   |
| 19 | U3                                                | SOT-223-3_TabPin2                           | 1        | AMS1117-3.3        | 1.42       | https://www.aliexpress.com/item/1005007500541919.html?spm=a2g0o.cart.0.0.5f4c38dagRCLxs&mp=1&pdp_npi=6%40dis%21EUR%21EUR%201.42%21EUR%201.42%21%21EUR%201.42%21%21%21%400b88abba17925010044955313e0ce6%2112000041039183878%21ct%21FR%214218883440%21%211%210%21&pdp_ext_f=%7B%22cart2PdpParams%22%3A%7B%22pdpBusinessMode%22%3A%22retail%22%7D%7D |                                  |   |

**Project release**

[BLE-MacroPad v2.0.0 — Manufacturing Package](https://github.com/YasinC4342/BLE-MacroPad/releases/tag/v2.0.0)

**Images**

![PCB manufacturing file preparation](https://raw.githubusercontent.com/YasinC4342/BLE-MacroPad/main/screenshots/manufacture.png)
![BLE-MacroPad v2.0.0 GitHub release](https://raw.githubusercontent.com/YasinC4342/BLE-MacroPad/main/screenshots/release.png)

**Total time spent: 30m**

# Current Project Status

The hardware design and manufacturing files are ready. KiCad's ERC and DRC checks passed, and the files are available in the GitHub release.

The prototype has not yet been manufactured or tested due to limited funding. Electrical behaviour, Bluetooth, and firmware still need validation.

# Next Steps

1. Obtain funding for fabrication and components.
2. Assemble and test the prototype.
3. Develop and validate the firmware.
4. Test Bluetooth, OLED, RGB LEDs, and keys.
5. Fix any issues discovered during testing.

# Lessons and Future Improvements

This project helped me improve my skills in mechanical design, PCB layout, component integration, and manufacturing preparation.
