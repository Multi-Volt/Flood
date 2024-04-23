# Flood
![forthebadge](https://forthebadge.com/images/badges/made-with-c-plus-plus.svg)
[![Platform Io](https://img.shields.io/badge/build%20with-PlatformIO-orange?logo=data%3Aimage%2Fsvg%2Bxml%3Bbase64%2CPHN2ZyB3aWR0aD0iMjUwMCIgaGVpZ2h0PSIyNTAwIiB2aWV3Qm94PSIwIDAgMjU2IDI1NiIgeG1sbnM9Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvc3ZnIiBwcmVzZXJ2ZUFzcGVjdFJhdGlvPSJ4TWlkWU1pZCI+PHBhdGggZD0iTTEyOCAwQzkzLjgxIDAgNjEuNjY2IDEzLjMxNCAzNy40OSAzNy40OSAxMy4zMTQgNjEuNjY2IDAgOTMuODEgMCAxMjhjMCAzNC4xOSAxMy4zMTQgNjYuMzM0IDM3LjQ5IDkwLjUxQzYxLjY2NiAyNDIuNjg2IDkzLjgxIDI1NiAxMjggMjU2YzM0LjE5IDAgNjYuMzM0LTEzLjMxNCA5MC41MS0zNy40OUMyNDIuNjg2IDE5NC4zMzQgMjU2IDE2Mi4xOSAyNTYgMTI4YzAtMzQuMTktMTMuMzE0LTY2LjMzNC0zNy40OS05MC41MUMxOTQuMzM0IDEzLjMxNCAxNjIuMTkgMCAxMjggMCIgZmlsbD0iI0ZGN0YwMCIvPjxwYXRoIGQ9Ik0yNDkuMzg2IDEyOGMwIDY3LjA0LTU0LjM0NyAxMjEuMzg2LTEyMS4zODYgMTIxLjM4NkM2MC45NiAyNDkuMzg2IDYuNjEzIDE5NS4wNCA2LjYxMyAxMjggNi42MTMgNjAuOTYgNjAuOTYgNi42MTQgMTI4IDYuNjE0YzY3LjA0IDAgMTIxLjM4NiA1NC4zNDYgMTIxLjM4NiAxMjEuMzg2IiBmaWxsPSIjRkZGIi8+PHBhdGggZD0iTTE2MC44NjkgNzQuMDYybDUuMTQ1LTE4LjUzN2M1LjI2NC0uNDcgOS4zOTItNC44ODYgOS4zOTItMTAuMjczIDAtNS43LTQuNjItMTAuMzItMTAuMzItMTAuMzJzLTEwLjMyIDQuNjItMTAuMzIgMTAuMzJjMCAzLjc1NSAyLjAxMyA3LjAzIDUuMDEgOC44MzdsLTUuMDUgMTguMTk1Yy0xNC40MzctMy42Ny0yNi42MjUtMy4zOS0yNi42MjUtMy4zOWwtMi4yNTggMS4wMXYxNDAuODcybDIuMjU4Ljc1M2MxMy42MTQgMCA3My4xNzctNDEuMTMzIDczLjMyMy04NS4yNyAwLTMxLjYyNC0yMS4wMjMtNDUuODI1LTQwLjU1NS01Mi4xOTd6TTE0Ni41MyAxNjQuOGMtMTEuNjE3LTE4LjU1Ny02LjcwNi02MS43NTEgMjMuNjQzLTY3LjkyNSA4LjMyLTEuMzMzIDE4LjUwOSA0LjEzNCAyMS41MSAxNi4yNzkgNy41ODIgMjUuNzY2LTM3LjAxNSA2MS44NDUtNDUuMTUzIDUxLjY0NnptMTguMjE2LTM5Ljc1MmE5LjM5OSA5LjM5OSAwIDAgMC05LjM5OSA5LjM5OSA5LjM5OSA5LjM5OSAwIDAgMCA5LjQgOS4zOTkgOS4zOTkgOS4zOTkgMCAwIDAgOS4zOTgtOS40IDkuMzk5IDkuMzk5IDAgMCAwLTkuMzk5LTkuMzk4em0yLjgxIDguNjcyYTIuMzc0IDIuMzc0IDAgMSAxIDAtNC43NDkgMi4zNzQgMi4zNzQgMCAwIDEgMCA0Ljc0OXoiIGZpbGw9IiNFNTcyMDAiLz48cGF0aCBkPSJNMTAxLjM3MSA3Mi43MDlsLTUuMDIzLTE4LjkwMWMyLjg3NC0xLjgzMiA0Ljc4Ni01LjA0IDQuNzg2LTguNzAxIDAtNS43LTQuNjItMTAuMzItMTAuMzItMTAuMzItNS42OTkgMC0xMC4zMTkgNC42Mi0xMC4zMTkgMTAuMzIgMCA1LjY4MiA0LjU5MiAxMC4yODkgMTAuMjY3IDEwLjMxN0w5NS44IDc0LjM3OGMtMTkuNjA5IDYuNTEtNDAuODg1IDIwLjc0Mi00MC44ODUgNTEuODguNDM2IDQ1LjAxIDU5LjU3MiA4NS4yNjcgNzMuMTg2IDg1LjI2N1Y2OC44OTJzLTEyLjI1Mi0uMDYyLTI2LjcyOSAzLjgxN3ptMTAuMzk1IDkyLjA5Yy04LjEzOCAxMC4yLTUyLjczNS0yNS44OC00NS4xNTQtNTEuNjQ1IDMuMDAyLTEyLjE0NSAxMy4xOS0xNy42MTIgMjEuNTExLTE2LjI4IDMwLjM1IDYuMTc1IDM1LjI2IDQ5LjM2OSAyMy42NDMgNjcuOTI2em0tMTguODItMzkuNDZhOS4zOTkgOS4zOTkgMCAwIDAtOS4zOTkgOS4zOTggOS4zOTkgOS4zOTkgMCAwIDAgOS40IDkuNCA5LjM5OSA5LjM5OSAwIDAgMCA5LjM5OC05LjQgOS4zOTkgOS4zOTkgMCAwIDAtOS4zOTktOS4zOTl6bS0yLjgxIDguNjcxYTIuMzc0IDIuMzc0IDAgMSAxIDAtNC43NDggMi4zNzQgMi4zNzQgMCAwIDEgMCA0Ljc0OHoiIGZpbGw9IiNGRjdGMDAiLz48L3N2Zz4=)](https://platformio.org/)

This is a research project conducted by __Dr. John Larocco__, __Dr. Qudsia Tahmina__, and __John Simonis__ at The Ohio State University. The purpose of this project was to create an Elastocaloric cooling system that is compared to a traditional desiccant wheel counterpart for water-harvesting.
## Requirements
### Software
- [VSCode](https://code.visualstudio.com/Download)
- [Platform IO](https://platformio.org/)
- [Git](https://git-scm.com/downloads)
- [Arduino IDE](https://www.arduino.cc/en/software)
- [PySR](https://github.com/MilesCranmer/PySR)
### Hardware
- [FLOOD-BOM](https://github.com/Multi-Volt/Flood/tree/main/FLOOD-BOM/)
- 3D-Printer
- Screw Driver
# Table of contents
- [Models & Construction](#models)
- [Data](#data)
- [Datalogger](#datalogger)
- [Flood Extras](#flood-extras)
- [Flood MCU](#flood-mcu)
- [Flood Photos](#flood-photos)
- [License](#license)
## <a  id ="models"></a>Models & Construction
Currently, all 3D models for this project can be found within the [FLOOD-3DF](https://github.com/Multi-Volt/Flood/tree/main/FLOOD-3DF) folder. This folder currently contains directories for:
- Final Prototype (STEP and STL)
- Control Harvester (STEP and STL)
- Deprecated Designs (STL)
### Details
#### Control
Control is the control water harvester which utilizes a desiccant wheel design. This also leverages a heat lamp  which draws a high amount of current to dry out pockets of desiccant. This design also has a fan which works to circulate some of the heated air through the silica gel desiccant. The assembly instructions are as follows:
1. Download the STL files from the respective directory and the .3MF file if you intend to print the design on a standard Ender 3 PRO. 
2. Import this model or slicer file into an FDM 3D-Printer slicer such as [PrusaSlicer]( https://www.prusa3d.com/en/page/prusaslicer_424/) and choose a material profile for PETG (This is needed for the higher temperatures).
3. Setup a print with 1 wheel base and 8 wheel rungs. Make sure the slicing settings include 100% infill, supports everywhere, and a layer height of 0.16mm or lower.
4. Snap each of the rungs into the wheel base and fasten each with some M5 bolts and nuts such as the ones present in the BOM.
5. Assembly is now complete, test with a lab power supply and make sure to have fans and a heating device ready.
#### Prototype
The NiTi prototype utilizes a simple gantry system with a high torque stepper motor. Additionally a T8 leadscrew is used for simplistic mechanical advantage to apply stress to the NiTi wires.
1. Download the STL files from the respective directory and the .3MF file if you intend to print the design on a standard Ender 3 PRO.
2. Import this model or slicer file into an FDM 3D-Printer slicer such as [PrusaSlicer]( https://www.prusa3d.com/en/page/prusaslicer_424/) and choose a material profile for PETG (This is needed for the higher temperatures).
3. Setup a print with 1 of each part with the exception of the anchors which you should print 2 of each. Make sure the slicing settings include 100% infill, supports everywhere, and a layer height of 0.16mm or lower.
4. Utilizing the dimensions of most of the nut pockets, find fitting metric nuts.
5. Fasten each of the items in accordance with the provided render.
6. Additionally make sure to use the proper metric T-nuts for fastening to the supplied gantry
9. Mechanical assembly complete, see wiring diagram referenced below and be ready to test. You will have to either develop your own code for controlling the motors or use the open source [GRBL](https://github.com/gnea/grbl) firmware.
### Wiring
For wiring and electronics please refer to the [FLOOD-Schematics](https://github.com/Multi-Volt/Flood/tree/main/FLOOD-Schematics) folder (currently under revision).

[(Back to top)](#table-of-contents)
## Data
Currently, all data for this project can be found within the [FLOOD-Data](https://github.com/Multi-Volt/Flood/tree/main/FLOOD-Data) folder. This folder currently contains:
- Control (XLSX)
- Prototype (XLSX)
- Analysis (Jupyter Notebook)
### Control Equation
```math
0.178 x_{0} + \erf{\left(\cos{\left(0.0457 x_{0} + 0.283 \sin{\left(0.886 x_{0} + 0.886 \operatorname{erf}{\left(\sin{\left(\sin{\left(x_{0} \right)} - 0.419 \right)} \right)} \right)} + 0.157 \cos{\left(x_{0} - 3.46 \right)} \right)} \right)} - 0.337
```

[(Back to top)](#table-of-contents)
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
The MIT License (MIT) 2024 - [Dr. John LaRocco](https://github.com/javeharron/), [Dr. Qudsia Tahmina](https://github.com/tahminaq), [John Simonis](https://github.com/Multi-Volt/). Please have a look at the [LICENSE.md](LICENSE) for more details.

[(Back to top)](#table-of-contents)
