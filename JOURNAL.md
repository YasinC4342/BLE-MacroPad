---
title: "BLE-MacroPad"
github: "https://github.com/YasinC4342/BLE-MacroPad"
description: "A custom Bluetooth macro keypad for CAD, ECAD, and professional software."
created_at: "2026-10-17"
total_time: "12h 32m"
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

**Project release**

[BLE-MacroPad v2.0.0 — Manufacturing Package](https://github.com/YasinC4342/BLE-MacroPad/releases/tag/v2.0.0)

**Images**

![PCB manufacturing file preparation](https://raw.githubusercontent.com/YasinC4342/BLE-MacroPad/main/screenshots/manufacture.png)
![BLE-MacroPad v2.0.0 GitHub release](https://raw.githubusercontent.com/YasinC4342/BLE-MacroPad/main/screenshots/release.png)

**Total time spent: 30m**

## October 20, 2026: Component Cost Optimization

After reviewing the project feedback, I revisited the BOM to reduce costs and stay within the €50 budget. The ESP32-S3-WROOM-2 was too expensive, so I decided to consider the more affordable ESP32-S3-WROOM-1 N16R8.

This change requires updating the PCB footprint and checking the routing, antenna clearance, and ERC/DRC results before generating the final manufacturing files. And so this will cost at a total of about 46$

**Challenges**

Reducing costs while maintaining compatibility, checking the new footprint, routing, and antenna clearance.

**Images**

![Bills of materials](https://raw.githubusercontent.com/YasinC4342/BLE-MacroPad/main/screenshots/bom.png)

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
