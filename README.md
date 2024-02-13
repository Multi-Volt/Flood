
# Flood
![forthebadge](https://forthebadge.com/images/badges/made-with-c-plus-plus.svg)
[![Platform Io](https://img.shields.io/badge/build%20with-PlatformIO-orange?logo=data%3Aimage%2Fsvg%2Bxml%3Bbase64%2CPHN2ZyB3aWR0aD0iMjUwMCIgaGVpZ2h0PSIyNTAwIiB2aWV3Qm94PSIwIDAgMjU2IDI1NiIgeG1sbnM9Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvc3ZnIiBwcmVzZXJ2ZUFzcGVjdFJhdGlvPSJ4TWlkWU1pZCI+PHBhdGggZD0iTTEyOCAwQzkzLjgxIDAgNjEuNjY2IDEzLjMxNCAzNy40OSAzNy40OSAxMy4zMTQgNjEuNjY2IDAgOTMuODEgMCAxMjhjMCAzNC4xOSAxMy4zMTQgNjYuMzM0IDM3LjQ5IDkwLjUxQzYxLjY2NiAyNDIuNjg2IDkzLjgxIDI1NiAxMjggMjU2YzM0LjE5IDAgNjYuMzM0LTEzLjMxNCA5MC41MS0zNy40OUMyNDIuNjg2IDE5NC4zMzQgMjU2IDE2Mi4xOSAyNTYgMTI4YzAtMzQuMTktMTMuMzE0LTY2LjMzNC0zNy40OS05MC41MUMxOTQuMzM0IDEzLjMxNCAxNjIuMTkgMCAxMjggMCIgZmlsbD0iI0ZGN0YwMCIvPjxwYXRoIGQ9Ik0yNDkuMzg2IDEyOGMwIDY3LjA0LTU0LjM0NyAxMjEuMzg2LTEyMS4zODYgMTIxLjM4NkM2MC45NiAyNDkuMzg2IDYuNjEzIDE5NS4wNCA2LjYxMyAxMjggNi42MTMgNjAuOTYgNjAuOTYgNi42MTQgMTI4IDYuNjE0YzY3LjA0IDAgMTIxLjM4NiA1NC4zNDYgMTIxLjM4NiAxMjEuMzg2IiBmaWxsPSIjRkZGIi8+PHBhdGggZD0iTTE2MC44NjkgNzQuMDYybDUuMTQ1LTE4LjUzN2M1LjI2NC0uNDcgOS4zOTItNC44ODYgOS4zOTItMTAuMjczIDAtNS43LTQuNjItMTAuMzItMTAuMzItMTAuMzJzLTEwLjMyIDQuNjItMTAuMzIgMTAuMzJjMCAzLjc1NSAyLjAxMyA3LjAzIDUuMDEgOC44MzdsLTUuMDUgMTguMTk1Yy0xNC40MzctMy42Ny0yNi42MjUtMy4zOS0yNi42MjUtMy4zOWwtMi4yNTggMS4wMXYxNDAuODcybDIuMjU4Ljc1M2MxMy42MTQgMCA3My4xNzctNDEuMTMzIDczLjMyMy04NS4yNyAwLTMxLjYyNC0yMS4wMjMtNDUuODI1LTQwLjU1NS01Mi4xOTd6TTE0Ni41MyAxNjQuOGMtMTEuNjE3LTE4LjU1Ny02LjcwNi02MS43NTEgMjMuNjQzLTY3LjkyNSA4LjMyLTEuMzMzIDE4LjUwOSA0LjEzNCAyMS41MSAxNi4yNzkgNy41ODIgMjUuNzY2LTM3LjAxNSA2MS44NDUtNDUuMTUzIDUxLjY0NnptMTguMjE2LTM5Ljc1MmE5LjM5OSA5LjM5OSAwIDAgMC05LjM5OSA5LjM5OSA5LjM5OSA5LjM5OSAwIDAgMCA5LjQgOS4zOTkgOS4zOTkgOS4zOTkgMCAwIDAgOS4zOTgtOS40IDkuMzk5IDkuMzk5IDAgMCAwLTkuMzk5LTkuMzk4em0yLjgxIDguNjcyYTIuMzc0IDIuMzc0IDAgMSAxIDAtNC43NDkgMi4zNzQgMi4zNzQgMCAwIDEgMCA0Ljc0OXoiIGZpbGw9IiNFNTcyMDAiLz48cGF0aCBkPSJNMTAxLjM3MSA3Mi43MDlsLTUuMDIzLTE4LjkwMWMyLjg3NC0xLjgzMiA0Ljc4Ni01LjA0IDQuNzg2LTguNzAxIDAtNS43LTQuNjItMTAuMzItMTAuMzItMTAuMzItNS42OTkgMC0xMC4zMTkgNC42Mi0xMC4zMTkgMTAuMzIgMCA1LjY4MiA0LjU5MiAxMC4yODkgMTAuMjY3IDEwLjMxN0w5NS44IDc0LjM3OGMtMTkuNjA5IDYuNTEtNDAuODg1IDIwLjc0Mi00MC44ODUgNTEuODguNDM2IDQ1LjAxIDU5LjU3MiA4NS4yNjcgNzMuMTg2IDg1LjI2N1Y2OC44OTJzLTEyLjI1Mi0uMDYyLTI2LjcyOSAzLjgxN3ptMTAuMzk1IDkyLjA5Yy04LjEzOCAxMC4yLTUyLjczNS0yNS44OC00NS4xNTQtNTEuNjQ1IDMuMDAyLTEyLjE0NSAxMy4xOS0xNy42MTIgMjEuNTExLTE2LjI4IDMwLjM1IDYuMTc1IDM1LjI2IDQ5LjM2OSAyMy42NDMgNjcuOTI2em0tMTguODItMzkuNDZhOS4zOTkgOS4zOTkgMCAwIDAtOS4zOTkgOS4zOTggOS4zOTkgOS4zOTkgMCAwIDAgOS40IDkuNCA5LjM5OSA5LjM5OSAwIDAgMCA5LjM5OC05LjQgOS4zOTkgOS4zOTkgMCAwIDAtOS4zOTktOS4zOTl6bS0yLjgxIDguNjcxYTIuMzc0IDIuMzc0IDAgMSAxIDAtNC43NDggMi4zNzQgMi4zNzQgMCAwIDEgMCA0Ljc0OHoiIGZpbGw9IiNGRjdGMDAiLz48L3N2Zz4=)](https://platformio.org/)

This is a research project conducted by __Dr. John Larocco__, __Dr. Qudsia Tahmina__, and __John Simonis__ at The Ohio State University. The purpose of this project was to create an Elastocaloric cooling system that is compared to a solid-state Peltier counterpart for water-harvesting.
## Requirements
### Software
- [VSCode](https://code.visualstudio.com/Download)
- [Platform IO](https://platformio.org/)
- [Git](https://git-scm.com/downloads)
- [Arduino IDE](https://www.arduino.cc/en/software)
### Hardware
- [FLOOD-BOM](https://github.com/Multi-Volt/Flood/tree/main/FLOOD-BOM/)
- [Assorted Metric Fasteners](https://www.amazon.com/Assortment-Machine-Washers-Phillips-Slotted/dp/B0BN297MP5/ref=sr_1_3?crid=2NQ75KMSBM114&keywords=assorted+metric+bolts+and+nuts&qid=1707819945&sprefix=assorted+metric+%2Caps%2C104&sr=8-3)
- [Ball Screw kit](https://www.amazon.com/400mm%EF%BC%8815-75-Inches%EF%BC%89Tr8x8-Thread-Printer-Machine/dp/B08JPM29FD/ref=sr_1_6?crid=3QAARNH6LZLNE&keywords=ender%2B3%2Bball%2Bscrew&qid=1707822376&s=industrial&sprefix=ender%2B3%2Bball%2Bscre%2Cindustrial%2C99&sr=1-6&th=1)
- [Ball Screw Coupler](https://www.amazon.com/Coupler-Flexible-Couplings-Printer-Eewolf/dp/B07BBP4H8C/ref=sr_1_7?crid=16TF97FKCBQYU&keywords=ender+3+ball+screw+and+coupler&qid=1707822360&s=industrial&sprefix=ender+3+ball+screw+and+couple%2Cindustrial%2C88&sr=1-7)
- 3D-Printer
- Drill
- 2-part epoxy
# Table of contents
- [Models & Construction](#models)

- [Data](#data)

-  [Datalogger](#datalogger)

-  [Flood Extras](#flood-extras)

-  [Flood MCU](#flood-mcu)

-  [Flood Photos](#flood-photos)

- [License](#license)

  

## <a id ="models"></a>Models & Construction
Currently, all 3D models for this project can be found within the [FLOOD-3DF](https://github.com/Multi-Volt/Flood/tree/main/FLOOD-3DF) folder. This folder currently contains all parts for:
- Final NiTi Prototype
- Initial Prototypes
- Control Harvester

### Details
 #### Control-M
  Control-M is the control water harvester which utilizes standard cooling components. This design leverages a standard Peltier device which draws a high amount of current to produce solid-state cooling. This design also has a fan which works to alleviate some of the heat from the alternative side of the peltier device as well as a heat sink for drip collection. The assembly instructions are as follows:
  1. Download the Control_Bracket_1.STL file from the Control-M directory.
  2. Import this model into an FDM 3D-Printer slicer such as [Cura]( https://ultimaker.com/software/ultimaker-cura/) and choose a material profile for PLA.
  3. Slice this model with 100% infill, no supports, and a Layer Height of 0.16mm or lower.
  4. Unscrew a lid from one of the mason jars and align the printed bracket with the inside of the lid.
  5. Use the printed holes as a guide to drill 2mm blind holes into the lid and then affix the bracket using four M2 bolts and nuts.
  6. Take a Peltier cooler and pressure fit the cooler in the center of the lid assembly and add a heatsink to both sides.
  7. On the side outside of the jar, add a small 20x20mm fan on top of the heat sink.
  8. Using the 2-part epoxy, use small amounts of the mixture at each connection point to hold the Peltier device in place. 
  9. Assembly is now complete, test with a standard power supply with a minimum of 9V 1A.
 #### Prototype-1
 Prototype-1 is a now deprecated design that utilized a cam holding multiple ends of NiTi wires against a fixed anchor. This cam was attached to a high-torque DC motor using a set screw and would continuously load and unload several NiTi wires. This prototype struggled consistently in preliminary testing compared to Prototype-2 at handling the engineering stresses and thus was predominately scrapped. To assemble this device the instructions are as follows:
1. Download the Cam_1.STL, Anchor_1.STL, Motor_Bracket_1.STL and Cam_Arm_1.STL files from the Prototype-1 directory.
  2. Import these models into an FDM 3D-Printer slicer such as [Cura]( https://ultimaker.com/software/ultimaker-cura/) and choose a material profile for PLA.
  3. Slice this model with 100% infill, no supports, and a Layer Height of 0.16mm or lower.
  4. Find a flat surface to mount the anchor and motor mount to, something like plywood would be ideal, and measure out a gap of 75mm between each part.
  5. Using the printed holes as guides, drill out four blind 4mm holes on each side of the 75mm gap.
  6. Press the printed cam onto the motor shaft until it is sitting flush on top of the shaft (use a soft dead blow hammer if necessary).
  7. Attach the anchor point using two M4 bolts and nuts then place the motor in the clamp perpendicular to the anchor on the other side of the gap and fix it in place using two more M4 bolts and nuts.
  8. Attach the rotating arm through a skateboard bearing in the cam.
  9. Thread the NiTi wire through each hole and measure out a set distance where the wires are under firm tension.
  10. Create multiple sections of wire of this same measurement and fix each end into the cable that stays at the anchor and cam.
  11. Assembly is now complete, run the motor with a power supply and adjust the speed to a steady cycle using the included ESC. 
 #### Prototype-2
 Prototype-2 beat out Prototype-1 in the preliminary testing phase of this project due to its ability to withstand greater engineering stresses. This design utilizes a standard CNC Tr8x8 Lead Screw with two brass nuts to load and unload the NiTi wires. This also adds a driving circuit to the aforementioned DC motor to reverse the rotation when needed. This design is more predominantly featured within the final prototype.
1. Download the Anchor_2.STL, Motor_Bracket_2.STL, Track_2.STL and Carriage_2.STL files from the Prototype-2 directory.
  2. Import these models into an FDM 3D-Printer slicer such as [Cura]( https://ultimaker.com/software/ultimaker-cura/) and choose a material profile for PLA.
  3. Slice this model with 100% infill, no supports, and a Layer Height of 0.16mm or lower.
  4. Find a flat surface to mount the anchor and motor mount to, something like plywood would be ideal, and measure out a gap of 75mm between each part.
  5. Using the printed holes as guides, drill out four blind 4mm holes on each side of the 80mm gap.
  6. Attach the anchor point using two M4 bolts and nuts then place the motor in the clamp parallel to the anchor on the other side of the gap and fix it in place using two more M4 bolts and nuts.
  7. Now that these items are attached to the surface slide the carriage onto the tracks and slide the tracks into the slots on each model.
  8. Carefully attach each brass nut using four M4 bolts and then thread the lead screw partially through the anchor.
  9. Mechanical assembly complete, see wiring diagram referenced below.

### Wiring
For wiring and electronics please refer to the [FLOOD-Schematics](https://github.com/Multi-Volt/Flood/tree/main/FLOOD-Schematics) folder.


[(Back to top)](#table-of-contents)

## Data
Currently Placeholder

## Datalogger
This project currently uses a compiled Datalogger from a previous research project from this team. Currently, this binary is only compiled for Windows systems and is present within the [FLOOD-Datalogger](https://github.com/Multi-Volt/Flood/tree/main/FLOOD-Datalogger) folder.

[(Back to top)](#table-of-contents)

## Flood Extras
 TBA

## Flood MCU
  To open and build the MCU code make sure that you have VS Code installed as referenced in the requirements above. Once this is complete make sure that you also have Platform IO installed. Once this is complete you can download the Platform IO directory from the repository. After you have the files open the directory in VS Code and navigate to the Platform IO extension. From there select Pick a folder and select the folder containing the platformio.ini file. From here you can access the main.cpp program from the src directory and with a plugged-in Arduino Nano all build environment tools should be accessible.

[(Back to top)](#table-of-contents)

## Flood Photos
TBA

# License

  

[(Back to top)](#table-of-contents)

  
  

The MIT License (MIT) 2024 - [Dr. John LaRocco](https://github.com/javeharron/),[Dr. Qudsia Tahmina](https://github.com/tahminaq), [John Simonis](https://github.com/Multi-Volt/). Please have a look at the [LICENSE.md](LICENSE) for more details.
