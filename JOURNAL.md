---
title: "BLE-MacroPad"
github: "https://github.com/YasinC4342/BLE-MacroPad"
description: "A custom Bluetooth macro keypad for CAD, ECAD, and professional software."
created_at: "2026-10-17"
total_time: "13h 6m"
---

# BLE-MacroPad — Project Journal

The MacroPad is a general use macro keypad, designed for ECAD, CAD, Photoshop, Blender and many other professionnal softwares. Its purpose is to make multiple combinations within one click, so shortcuts (ex : CTRL + ALT + SHIFT or simply write lots of words). It will be working on both BLE and USB HID.

# October 1, 2026: PCB Design in KiCad
<!-- fabricate:entry 758 -->

I made the PCB in KiCad, integrating the ESP32-S3-WROOM-1 module, mechanical switches, RGB LEDs, OLED display module, and USB-C connector, with the PCB dimension of about 75 × 77 mm. ERC and DRC checks passed successfully.
I added a keepout zone around the ESP32 antenna area to reduce EMI, perturbating noises and also for better Bluetooth cover range, helped from documentations of Espressif. My goal was to fit all the components into a compact PCB to make it portable, not taking the majority of the workspace, keep the antenna's edge on the edge cuts of the PCB, chose differents tracks width and for only 2 layers if a problem appears.

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

I designed the macro keypad 3D model in Fusion 360, integrating 12 keys in a 3×4 layout, an OLED display, RGB LEDs, and a USB Type-C connector.
I imported the .STEP of the PCB and used the tool "Project" to see the exact measurements. But one big problem is that i needed to update it a lot because of the tolerance, which is +- 0.2-0.3, and the spacing between the 3d model's hole for fitting keys and the keycaps. So i used constraints and made it much easier !

I chose Fusion 360 as a CAD software because it's for makers (my thoughts), i have lots of experiences since i love learning some makers softwares and so inspired to them, 
like Abrège : [**https://www.youtube.com/@Abr%C3%A8ge**](https://www.youtube.com/@Abr%C3%A8ge).

**Images**

![](https://fabricate.hackclub-assets.com/966a00ae057d44e6b4231329d6e3155526e99ad4710b72352246010e1bea54c3/image-png/cad.png)
![](https://fabricate.hackclub-assets.com/7882eeb78bcce17e2ad59f65441f9a38263abb28ca37925840ee9d4a2f054076/image-png/rendered.png)

**Total time spent: 3h**

# October 14, 2026: Preparing the Manufacturing Files
<!-- fabricate:entry 760 -->

I prepared the manufacturing files into a zip for release v2.0.0 on GitHub, including Gerber file, BOM, and mechanical exports. So i exported the Gerber and BOM from KiCAD and tested on JLCPCB to see the 3d/2d view of the pcb and detection of the pcb, and of course i choose the cheapest delivery method to fit in my budget from 29$ to 4$ total. I chose black mask and white silkscreen to make it professionnal, remarquable and also to make it look like modern and newest design. All the files are ready, organised in the main directory and BOM updated, and I will publish the documentation of the product when received, assembled and tested.

**Project release**

[BLE-MacroPad v2.0.0 — Manufacturing Package](https://github.com/YasinC4342/BLE-MacroPad/releases/tag/v2.0.0)

**Images**

![](https://fabricate.hackclub-assets.com/de10b93c940bb524bae18a32aa856db39d8466080ff1f222de2fc41762d2e225/image-png/jlcpcb.png)
![](https://fabricate.hackclub-assets.com/878eb54cf51404c1740e884ef1652dfa2817245e71eeae1a0698b378916d57d8/image-png/release.png)

**Total time spent: 30m**

# October 20, 2026: Component Cost Optimization
<!-- fabricate:entry 761 -->

After realising that the project exceeds the max amount of 50$, I updated the BOM to reduce cost and stay in the 50$ budget (tier 4). The ESP32-S3-WROOM-2 was too expensive, so I decided to replace it and instead choose the ESP32-S3-WROOM-1 N16R8, more affordable in Aliexpress. After those changes, I updated the PCB footprint / symbol, replacing it, and checked the tracks (routing), antenna area and positionning, and ERC/DRC results before generating the final manufacturing files. And so this costs at a total amount of about 49$, including shipping and all of those stuffs, which i will round it to 50$.

**Images**

![](https://fabricate.hackclub-assets.com/90da5786ab3020c01a73dd4cbef6da7eff13ca2828d4bdff6478cdabb400d3c2/image-png/bom.png)
![](https://fabricate.hackclub-assets.com/940acab7a5685c27606e4c7137f623ece72afeecf1ff155f8eafca536ef2cfc3/image-png/cart-3.png)
![](https://fabricate.hackclub-assets.com/98c8bacd44e7bc58a298c780970a816ea4d3b7ce0b6e998533cacffabb7284eb/image-png/cart-2.png)
![](https://fabricate.hackclub-assets.com/ecc57f962e896c3642ff75d8953a6806cb7992cbc8b28fc86dc7ddbdbcfe4220/image-png/cart-1.png)

**Total time spent: 4h 48m**
