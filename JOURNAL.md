---
title: "BLE-MacroPad"
github: "https://github.com/YasinC4342/BLE-MacroPad"
description: "A custom Bluetooth macro keypad for CAD, ECAD, and professional software."
created_at: "2026-10-17"
total_time: "12h 30m"
---

# BLE-MacroPad — Project Journal

The BLE-MacroPad is a custom Bluetooth macro keypad designed for ECAD, CAD, image editing, 3D modelling, and other professional applications. Its purpose is to simplify repetitive tasks by triggering keyboard shortcuts, key combinations, and predefined text sequences with a single key press.

This journal documents the design process, engineering decisions, challenges, and preparation of the hardware manufacturing files. The project is currently at the design stage: the hardware has not yet been physically manufactured or tested.

# October 1, 2026: PCB Design in KiCad
<!-- fabricate:entry 758 -->

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

![KiCad electronic schematic](https://fabricate.hackclub-assets.com/89b7fac35c973cf494fa2296ef421e2da9e140d9607fa8d8d7d02d08b99c1494/image-png/schematic.png)

![BLE-MacroPad PCB layout in KiCad](https://fabricate.hackclub-assets.com/7891004a0a289fe4d9ab86bb87481b8aa638a23bdb73918fd74a9de5d177bc1f/image-png/pcb.png)

![Back view of the PCB](https://fabricate.hackclub-assets.com/42c3ffe7fa766f350bfee2b09e55d3a4daf961a92bfdfedbc2b7e8a0fe8a2e27/image-png/back.png)

![Front view of the PCB](https://fabricate.hackclub-assets.com/baaa23e7055fbd679f1bbfb211fc3848e6a5b5632ab5f3ef74bcb58454f1af65/image-png/front.png)

![KiCad Electrical Rules Check results](https://fabricate.hackclub-assets.com/e57883c94137b7ccd200eefb112328732ce60b76cfa0db96cde5d6ba5b850d6f/image-png/ERC.png)

![KiCad Design Rules Check results](https://fabricate.hackclub-assets.com/37b56daa116dec787ebe330597f463fd75577e222bc9956bdbe1f6b11f1607f8/image-png/DRC.png)

**Total time spent: 4h 48m**

# October 6, 2026: Mechanical Design and Component Layout
<!-- fabricate:entry 759 -->

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

![Fusion 360 mechanical CAD design](https://fabricate.hackclub-assets.com/966a00ae057d44e6b4231329d6e3155526e99ad4710b72352246010e1bea54c3/image-png/cad.png)

![Rendered BLE-MacroPad model](https://fabricate.hackclub-assets.com/7882eeb78bcce17e2ad59f65441f9a38263abb28ca37925840ee9d4a2f054076/image-png/rendered.png)

**Total time spent: 3h**

# October 14, 2026: Preparing the Manufacturing Files
<!-- fabricate:entry 760 -->

I prepared the manufacturing package for release v2.0.0 on GitHub, including PCB fabrication files, the BOM, mechanical exports, and project documentation.

**Deliverables**

PCB manufacturing files.

Bill of materials (BOM).

Mechanical model exports.

Documentation and visual references.

**Challenges**

I organised the files to simplify fabrication and component sourcing. The BOM is essential for identifying compatible components and estimating the total prototype cost.

**Project release**

[BLE-MacroPad v2.0.0 — Manufacturing Package](https://github.com/YasinC4342/BLE-MacroPad/releases/tag/v2.0.0)

**Images**

![PCB manufacturing file preparation](https://fabricate.hackclub-assets.com/de10b93c940bb524bae18a32aa856db39d8466080ff1f222de2fc41762d2e225/image-png/manufacture.png)
![BLE-MacroPad v2.0.0 GitHub release](https://fabricate.hackclub-assets.com/878eb54cf51404c1740e884ef1652dfa2817245e71eeae1a0698b378916d57d8/image-png/release.png)

**Total time spent: 30m**

# October 20, 2026: Component Cost Optimization
<!-- fabricate:entry 761 -->

After reviewing the project feedback, I revisited the BOM to reduce costs and stay within the €50 budget. The ESP32-S3-WROOM-2 was too expensive, so I decided to consider the more affordable ESP32-S3-WROOM-1 N16R8.

This change requires updating the PCB footprint and checking the routing, antenna clearance, and ERC/DRC results before generating the final manufacturing files. And so this will cost at a total of about 46$

**Challenges**

Reducing costs while maintaining compatibility, checking the new footprint, routing, and antenna clearance.

**Images**

![Bills of materials](https://fabricate.hackclub-assets.com/51b6ac31f7907a7d70e4253d62405e24c4c6399937dba89527e92cce6322e7b9/image-png/bom.png)

![](https://fabricate.hackclub-assets.com/90da5786ab3020c01a73dd4cbef6da7eff13ca2828d4bdff6478cdabb400d3c2/image-png/bom.png)

**Total time spent: 4h 12m**

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
