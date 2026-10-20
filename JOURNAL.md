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

I designed the PCB in KiCad, integrating the ESP32-WROOM module, key switches, RGB LEDs, OLED connections, and USB-C interface within a 75 × 77 mm board. KiCad's ERC and DRC checks passed successfully, although physical testing is still required to validate the hardware.

**Design decisions**

I added a keepout zone around the ESP32 antenna area to reduce potential interference and help maintain Bluetooth performance, following the module's layout recommendations.

**Challenges**

Fitting all components into a compact PCB while preserving routing space and antenna clearance required careful placement and layout planning.

**Validation status**

- ERC: completed successfully.
- DRC: completed successfully.
- Physical PCB testing: not performed yet.
- Bluetooth range: not measured yet.

**Images**

![](https://fabricate.hackclub-assets.com/2866c494600e7288cfc309a0de2de3534b9d542fd300774860fff5714090a291/image-png/back.png)
![](https://fabricate.hackclub-assets.com/f21d3488b17b8b2cbcb713c4cdd5df1d32b651992c7f31fc4018218e6666d5a5/image-png/DRC.png)
![](https://fabricate.hackclub-assets.com/e57883c94137b7ccd200eefb112328732ce60b76cfa0db96cde5d6ba5b850d6f/image-png/ERC.png)
![](https://fabricate.hackclub-assets.com/ebd345143f87a1bfb2306ec64547918c64df1e172436ebfecb0bc3301f88e039/image-png/front.png)
![](https://fabricate.hackclub-assets.com/7891004a0a289fe4d9ab86bb87481b8aa638a23bdb73918fd74a9de5d177bc1f/image-png/pcb.png)
![](https://fabricate.hackclub-assets.com/9deac717c26d6a57bdf6fcb5e3c17d48a5f5c92e80dab518dddd2bafa87931ec/image-png/schematic.png)

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

![](https://fabricate.hackclub-assets.com/966a00ae057d44e6b4231329d6e3155526e99ad4710b72352246010e1bea54c3/image-png/cad.png)
![](https://fabricate.hackclub-assets.com/7882eeb78bcce17e2ad59f65441f9a38263abb28ca37925840ee9d4a2f054076/image-png/rendered.png)

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

![](https://fabricate.hackclub-assets.com/de10b93c940bb524bae18a32aa856db39d8466080ff1f222de2fc41762d2e225/image-png/jlcpcb.png)
![](https://fabricate.hackclub-assets.com/878eb54cf51404c1740e884ef1652dfa2817245e71eeae1a0698b378916d57d8/image-png/release.png)

**Total time spent: 30m**

# October 20, 2026: Component Cost Optimization
<!-- fabricate:entry 761 -->

After reviewing the project feedback, I revisited the BOM to reduce costs and stay within the €50 budget. The ESP32-S3-WROOM-2 was too expensive, so I decided to consider the more affordable ESP32-S3-WROOM-1 N16R8.

This change required updating the PCB footprint and checking the routing, antenna clearance, and ERC/DRC results before generating the final manufacturing files. And so this costs at a total amount of about 46$

**Challenges**

Reducing costs while maintaining compatibility, checking the new footprint, routing, and antenna clearance.

**Images**

![](https://fabricate.hackclub-assets.com/90da5786ab3020c01a73dd4cbef6da7eff13ca2828d4bdff6478cdabb400d3c2/image-png/bom.png)
![](https://fabricate.hackclub-assets.com/20b011450f4e4429be65c5a90cd849c4f38b6f7a80bbf3f9e7b1f901459db472/image-png/shop.png)

**Total time spent: 4h 12m**
