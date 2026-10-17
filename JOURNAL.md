---
title: "BLE-MacroPad"
github: "https://github.com/YasinC4342/BLE-MacroPad"
description: "A custom Bluetooth macro keypad for CAD, ECAD, and professional software."
created_at: "2026-10-17"
---

# BLE-MacroPad — Project Journal

The BLE-MacroPad is a custom Bluetooth macro keypad designed for ECAD, CAD, image editing, 3D modelling, and other professional applications. Its purpose is to simplify repetitive tasks by triggering keyboard shortcuts, key combinations, and predefined text sequences with a single key press.

This journal documents the design process, engineering decisions, challenges, and preparation of the hardware manufacturing files. The project is currently at the design stage: the hardware has not yet been physically manufactured or tested.

## Session 1: Mechanical Design and Component Layout

**Time spent: 3 hours**

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

![image alt](https://github.com/YasinC4342/BLE-MacroPad/blob/e4277bfc1b626efe080e17bea29c4abbc86e7139/screenshots/cad.png)
![image alt](https://github.com/YasinC4342/BLE-MacroPad/blob/56c82cb52961fdbd2fd40449b1ed63050475df9e/screenshots/rendered.png)

## Session 2: PCB Design in KiCad

**Time spent: 5 hours**

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

- [Insert a screenshot of the KiCad schematic.]
- [Insert a screenshot of the PCB layout.]
- [Insert the ERC/DRC results.]
- [Insert a 3D view from KiCad, if available.]

## Session 3: Preparing the Manufacturing Files

**Time spent: 30 minutes**

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

**Project release**

[BLE-MacroPad v2.0.0 — Manufacturing Package](https://github.com/YasinC4342/BLE-MacroPad/releases/tag/v2.0.0)

**Images**

- [Insert a screenshot of the exported manufacturing files.]
- [Insert a screenshot of the BOM.]
- [Insert a screenshot of the GitHub release.]

## Current Project Status

The initial hardware design and manufacturing documentation have been prepared. KiCad's ERC and DRC checks passed, and the project files have been published in a GitHub release.

However, the prototype has not yet been manufactured or physically tested because I currently have limited financial resources.

This means that the design is ready for the next stage of development, but its real-world electrical behaviour, Bluetooth performance, assembly, and firmware functionality remain to be validated.

## Next Steps

1. Obtain funding for PCB fabrication, components, and shipping.
2. Manufacture and assemble the first prototype.
3. Check the power supply, electrical connections, and component operation.
4. Develop and test the firmware.
5. Validate Bluetooth connectivity and measure its practical range.
6. Test the OLED display, RGB LEDs, and key inputs.
7. Document any hardware or firmware problems discovered during testing.
8. Improve the design if the prototype reveals issues.

## Lessons and Future Improvements

This project has helped me practise mechanical design, PCB layout, component integration, and preparation of manufacturing files.

It has also highlighted the importance of considering mechanical constraints and wireless antenna requirements early in the design process, rather than waiting until the board is manufactured.

The next major milestone is to build a physical prototype. Testing will provide evidence that cannot be obtained from CAD models and design-rule checks alone, and will help determine which improvements are needed for a reliable final device.
