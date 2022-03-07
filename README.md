# diy_mm

![](./img/diy_mm.jpg)
Low cost (less than 10€) measurement microphone powered by +48V phantom power using a cheap electret capsule.
### Technical Data
| spec                  | value                 | unit          | measured  |
|:---------------------:|:---------------------:|:-------------:|:---------:|
| Frequency Response    | 20 to 20000 &pm; ?dB  | Hz            | n         |
| Polar Pattern         | Omnidirectional       | -             | n         |
| Sensititvity          | 0.012                 | V/Pa @ 1kHz   | n         |
| Power requirements    | +12 to +48            | V             | y         |
| Max acoustic input    | 140dB                 | SPL           | y         |
| Output                | XLR-3 (balanced)      | -             | -         |
| Output Impedance      | 100                   | Ohm           | y         |
| Signal to Noise       | 60dBA                 | SPL           | n         |
| Temp Operating Range  | -20 to 70             | °C            | n         |
| Dimensions L x D      | 107.2 x 12            | mm            | y         |
| Weight                | 16 (120 with 3m cable)| g             | y         |

### Measured Frequency Response

![frequency response](./img/fr_measured.jpg)



## Impedance Converter and capsule adapter (kicad)

![](./img/main_board_sch.jpg)

The impedance converter is based on an electret mic preamp from [Rod Elliot](https://sound-au.com), big thanks to the work he does on his site. He also has a store, where you can buy his original PCB for this amp, and many others. You can also donate there.  

Some changes were made to fit the converter to the capsule and to use smaller capacitors to fit it into the housing. Unfortunately these changes also effect the performance slightly.

In order to connect the PCB to the capsule and also to fix the capsule in place a small adapter PCB is used. This PCB is clamped in the 3d printed housing an soldered onto the converters PCB.

| main_board | capsule_adapter |
|:-----------------------------:|:----------------------------------:|
| ![](./img/main_board_pcb.jpg) | ![](./img/capsule_adapter_pcb.jpg) |

## LTSpice Simulation (simulation)

Alongside the changes of the converter design a LTSpice simulation was conducted. The obtained result is very good, showing linearity of &pm;0.1dB and a very true phase slowly rising below 100Hz to reach \~13&deg; at 20Hz. The impedance converter also features a signal amplification of \~3dB.

![](./img/freqresp.jpg)

## 3D printed parts (3dfiles)

The fixture for capsule, impedance converter and strain relief if the cable are accomplished by three 3d printed parts. Using a 0.25mm nozzle the parts can be printed very accurately to perfectly fit the shielding aluminium tube using three o-rings.

![](./img/3d_files.jpg)

Through a hole in the chassis at the strain relief side, the shielding can be fed through in order to touch the aluminium tube. The hole assembly slides tightly inside and is just hold by friction. To get it back out one has to firstly pull on the cable slightly, after the first o-ring is out one should pull on the plastic to fully slide out the main assembly.

![](./img/shield.jpg)
