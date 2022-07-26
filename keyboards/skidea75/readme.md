# skidea75

![skidea75](imgur.com image replace me!)

*Split 75 keys Keyboard for Jetbrains IDEA programming*

- Keyboard Maintainer: [Murik](https://github.com/Murik) 
- Hardware Supported: ATmega32U4 Pro Micro
- Hardware Availability: [Falbatech](https://falba.tech/product-category/keyboard-parts/redox-parts/)

Make example and flash for this keyboard parts:

    make skidea75:default:avrdude-split-left
    make skidea75:default:avrdude-split-right


See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) 
and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. 

[Base split keyboards info](https://docs.qmk.fm/#/feature_split_keyboard)

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
