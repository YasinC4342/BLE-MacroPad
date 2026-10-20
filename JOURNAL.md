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

I designed the electronic board in KiCad, translating the intended component layout into a PCB design. The board brings together the microcontroller module, key switches, addressable RGB LEDs, OLED display connections, and USB Type-C interface.

The PCB had to fit within the planned 75 × 77 mm footprint while providing space for component placement and electrical routing.

After completing the design, I ran KiCad's Electrical Rules Check (ERC) and Design Rules Check (DRC). Both checks completed successfully.

These checks help identify electrical schematic inconsistencies and PCB layout rule violations. However, passing them does not guarantee that the finished hardware will operate correctly, so physical validation will still be necessary.

**Design decisions**

One important decision was to create a keepout zone beneath the ESP32-WROOM module's antenna area. The intention is to avoid placing copper or other conductive structures where they could interfere with the antenna's radio-frequency performance.

This is particularly important for a Bluetooth device, because antenna performance can affect wireless range and reliability. The exact keepout requirements must follow the antenna recommendations in the module manufacturer's documentation.

**Challenges**

Fitting all the required components into a relatively compact PCB requires balancing component placement, routing space, and wireless performance.

The antenna area needs special attention because an unsuitable PCB layout or nearby conductive material can degrade Bluetooth performance. I therefore included a keepout zone as part of the design.

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

I worked on the physical layout of the macro keypad in Fusion 360. My objective was to integrate the 3×4 key layout, OLED display, RGB LEDs, and USB Type-C connector into a compact device.

I chose a PCB size of approximately 75 × 77 mm to accommodate the different components while keeping the device reasonably compact and suitable for its intended professional use.

The mechanical design was important because component placement affects not only the appearance of the device but also the available PCB area, the enclosure dimensions, and the accessibility of the keys and connectors.

**Design decisions**

- Use a 3×4 layout to provide 12 programmable keys.
- Integrate a small OLED display for potential status or interface information.
- Include individually addressable RGB LEDs for visual feedback.
- Keep the USB Type-C connector accessible.
- Consider the relationship between the PCB layout and the enclosure before manufacturing.

**Challenges**

One of the challenges in designing a compact device is avoiding interference between components and ensuring that they fit within the available space. I used Fusion 360 to inspect the mechanical arrangement and identify potential placement conflicts before fabrication.

**Images**

![Fusion 360 mechanical CAD design](https://raw.githubusercontent.com/YasinC4342/BLE-MacroPad/main/screenshots/cad.png)

![Rendered BLE-MacroPad model](https://raw.githubusercontent.com/YasinC4342/BLE-MacroPad/main/screenshots/rendered.png)

**Total time spent: 3h**

## October 14, 2026: Preparing the Manufacturing Files

After completing the initial design, I prepared the project files required for manufacturing and documentation.

The manufacturing package is available in the GitHub release `v2.0.0`. It contains the relevant design exports, including the PCB manufacturing files, bill of materials (BOM), and mechanical model files.

Keeping the manufacturing package together in a versioned release makes it easier to identify the intended design revision and retrieve the files required for a future prototype.

**Prepared deliverables**

- PCB manufacturing files.
- Bill of materials and component information.
- Mechanical design exports.
- Project documentation and visual references.

**Challenges**

Preparing a manufacturing package requires more than designing the PCB. The exported files must also be organised so that the board can be fabricated and the necessary components can be identified and sourced.

The BOM will be particularly important when preparing the prototype because the complete assembly depends on obtaining compatible components.

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
![Aliexpress shopping cart](https://raw.githubusercontent.com/YasinC4342/BLE-MacroPad/main/screenshots/shop.png)

**Total time spent: 30m**

# Current Project Status

The initial hardware design and manufacturing documentation have been prepared. KiCad's ERC and DRC checks passed, and the project files have been published in a GitHub release.

However, the prototype has not yet been manufactured or physically tested because I currently have limited financial resources.

This means that the design is ready for the next stage of development, but its real-world electrical behaviour, Bluetooth performance, assembly, and firmware functionality remain to be validated.

# Next Steps

1. Obtain funding for PCB fabrication, components, and shipping.
2. Manufacture and assemble the first prototype.
3. Check the power supply, electrical connections, and component operation.
4. Develop and test the firmware.
5. Validate Bluetooth connectivity and measure its practical range.
6. Test the OLED display, RGB LEDs, and key inputs.
7. Document any hardware or firmware problems discovered during testing.
8. Improve the design if the prototype reveals issues.

# Lessons and Future Improvements

This project has helped me practise mechanical design, PCB layout, component integration, and preparation of manufacturing files.

It has also highlighted the importance of considering mechanical constraints and wireless antenna requirements early in the design process, rather than waiting until the board is manufactured.

The next major milestone is to build a physical prototype. Testing will provide evidence that cannot be obtained from CAD models and design-rule checks alone, and will help determine which improvements are needed for a reliable final device.
