---
title: "BLE-MacroPad"
github: "https://github.com/YasinC4342/BLE-MacroPad"
description: "A custom Bluetooth macro keypad for CAD, ECAD, and professional software."
created_at: "2026-10-17"
total_time: "8h"
---

# BLE-MacroPad — Project Journal

The BLE-MacroPad is a custom Bluetooth macro keypad designed for ECAD, CAD, image editing, 3D modelling, and other professional applications. Its purpose is to simplify repetitive tasks by triggering keyboard shortcuts, key combinations, and predefined text sequences with a single key press.

This journal documents the design process, engineering decisions, challenges, and preparation of the hardware manufacturing files. The project is currently at the design stage: the hardware has not yet been physically manufactured or tested.

# October 1, 2026: Mechanical Design and Component Layout
<!-- fabricate:entry 563 -->

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

![Fusion 360 mechanical CAD design](https://fabricate.hackclub-assets.com/966a00ae057d44e6b4231329d6e3155526e99ad4710b72352246010e1bea54c3/image-png/cad.png)

![Rendered BLE-MacroPad model](https://fabricate.hackclub-assets.com/7882eeb78bcce17e2ad59f65441f9a38263abb28ca37925840ee9d4a2f054076/image-png/rendered.png)

**Total time spent: 3h**

# October 6, 2026: PCB Design in KiCad
<!-- fabricate:entry 564 -->

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

![KiCad electronic schematic](https://fabricate.hackclub-assets.com/89b7fac35c973cf494fa2296ef421e2da9e140d9607fa8d8d7d02d08b99c1494/image-png/schematic.png)

![BLE-MacroPad PCB layout in KiCad](https://fabricate.hackclub-assets.com/7891004a0a289fe4d9ab86bb87481b8aa638a23bdb73918fd74a9de5d177bc1f/image-png/pcb.png)

![Back view of the PCB](https://fabricate.hackclub-assets.com/42c3ffe7fa766f350bfee2b09e55d3a4daf961a92bfdfedbc2b7e8a0fe8a2e27/image-png/back.png)

![Front view of the PCB](https://fabricate.hackclub-assets.com/baaa23e7055fbd679f1bbfb211fc3848e6a5b5632ab5f3ef74bcb58454f1af65/image-png/front.png)

![KiCad Electrical Rules Check results](https://fabricate.hackclub-assets.com/e57883c94137b7ccd200eefb112328732ce60b76cfa0db96cde5d6ba5b850d6f/image-png/ERC.png)

![KiCad Design Rules Check results](https://fabricate.hackclub-assets.com/37b56daa116dec787ebe330597f463fd75577e222bc9956bdbe1f6b11f1607f8/image-png/DRC.png)

**Total time spent: 5h**

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
