# Flood
![forthebadge](https://forthebadge.com/images/badges/made-with-c-plus-plus.svg)
[![Platform Io](https://img.shields.io/badge/build%20with-PlatformIO-orange?logo=data%3Aimage%2Fsvg%2Bxml%3Bbase64%2CPHN2ZyB3aWR0aD0iMjUwMCIgaGVpZ2h0PSIyNTAwIiB2aWV3Qm94PSIwIDAgMjU2IDI1NiIgeG1sbnM9Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvc3ZnIiBwcmVzZXJ2ZUFzcGVjdFJhdGlvPSJ4TWlkWU1pZCI+PHBhdGggZD0iTTEyOCAwQzkzLjgxIDAgNjEuNjY2IDEzLjMxNCAzNy40OSAzNy40OSAxMy4zMTQgNjEuNjY2IDAgOTMuODEgMCAxMjhjMCAzNC4xOSAxMy4zMTQgNjYuMzM0IDM3LjQ5IDkwLjUxQzYxLjY2NiAyNDIuNjg2IDkzLjgxIDI1NiAxMjggMjU2YzM0LjE5IDAgNjYuMzM0LTEzLjMxNCA5MC41MS0zNy40OUMyNDIuNjg2IDE5NC4zMzQgMjU2IDE2Mi4xOSAyNTYgMTI4YzAtMzQuMTktMTMuMzE0LTY2LjMzNC0zNy40OS05MC41MUMxOTQuMzM0IDEzLjMxNCAxNjIuMTkgMCAxMjggMCIgZmlsbD0iI0ZGN0YwMCIvPjxwYXRoIGQ9Ik0yNDkuMzg2IDEyOGMwIDY3LjA0LTU0LjM0NyAxMjEuMzg2LTEyMS4zODYgMTIxLjM4NkM2MC45NiAyNDkuMzg2IDYuNjEzIDE5NS4wNCA2LjYxMyAxMjggNi42MTMgNjAuOTYgNjAuOTYgNi42MTQgMTI4IDYuNjE0YzY3LjA0IDAgMTIxLjM4NiA1NC4zNDYgMTIxLjM4NiAxMjEuMzg2IiBmaWxsPSIjRkZGIi8+PHBhdGggZD0iTTE2MC44NjkgNzQuMDYybDUuMTQ1LTE4LjUzN2M1LjI2NC0uNDcgOS4zOTItNC44ODYgOS4zOTItMTAuMjczIDAtNS43LTQuNjItMTAuMzItMTAuMzItMTAuMzJzLTEwLjMyIDQuNjItMTAuMzIgMTAuMzJjMCAzLjc1NSAyLjAxMyA3LjAzIDUuMDEgOC44MzdsLTUuMDUgMTguMTk1Yy0xNC40MzctMy42Ny0yNi42MjUtMy4zOS0yNi42MjUtMy4zOWwtMi4yNTggMS4wMXYxNDAuODcybDIuMjU4Ljc1M2MxMy42MTQgMCA3My4xNzctNDEuMTMzIDczLjMyMy04NS4yNyAwLTMxLjYyNC0yMS4wMjMtNDUuODI1LTQwLjU1NS01Mi4xOTd6TTE0Ni41MyAxNjQuOGMtMTEuNjE3LTE4LjU1Ny02LjcwNi02MS43NTEgMjMuNjQzLTY3LjkyNSA4LjMyLTEuMzMzIDE4LjUwOSA0LjEzNCAyMS41MSAxNi4yNzkgNy41ODIgMjUuNzY2LTM3LjAxNSA2MS44NDUtNDUuMTUzIDUxLjY0NnptMTguMjE2LTM5Ljc1MmE5LjM5OSA5LjM5OSAwIDAgMC05LjM5OSA5LjM5OSA5LjM5OSA5LjM5OSAwIDAgMCA5LjQgOS4zOTkgOS4zOTkgOS4zOTkgMCAwIDAgOS4zOTgtOS40IDkuMzk5IDkuMzk5IDAgMCAwLTkuMzk5LTkuMzk4em0yLjgxIDguNjcyYTIuMzc0IDIuMzc0IDAgMSAxIDAtNC43NDkgMi4zNzQgMi4zNzQgMCAwIDEgMCA0Ljc0OXoiIGZpbGw9IiNFNTcyMDAiLz48cGF0aCBkPSJNMTAxLjM3MSA3Mi43MDlsLTUuMDIzLTE4LjkwMWMyLjg3NC0xLjgzMiA0Ljc4Ni01LjA0IDQuNzg2LTguNzAxIDAtNS43LTQuNjItMTAuMzItMTAuMzItMTAuMzItNS42OTkgMC0xMC4zMTkgNC42Mi0xMC4zMTkgMTAuMzIgMCA1LjY4MiA0LjU5MiAxMC4yODkgMTAuMjY3IDEwLjMxN0w5NS44IDc0LjM3OGMtMTkuNjA5IDYuNTEtNDAuODg1IDIwLjc0Mi00MC44ODUgNTEuODguNDM2IDQ1LjAxIDU5LjU3MiA4NS4yNjcgNzMuMTg2IDg1LjI2N1Y2OC44OTJzLTEyLjI1Mi0uMDYyLTI2LjcyOSAzLjgxN3ptMTAuMzk1IDkyLjA5Yy04LjEzOCAxMC4yLTUyLjczNS0yNS44OC00NS4xNTQtNTEuNjQ1IDMuMDAyLTEyLjE0NSAxMy4xOS0xNy42MTIgMjEuNTExLTE2LjI4IDMwLjM1IDYuMTc1IDM1LjI2IDQ5LjM2OSAyMy42NDMgNjcuOTI2em0tMTguODItMzkuNDZhOS4zOTkgOS4zOTkgMCAwIDAtOS4zOTkgOS4zOTggOS4zOTkgOS4zOTkgMCAwIDAgOS40IDkuNCA5LjM5OSA5LjM5OSAwIDAgMCA5LjM5OC05LjQgOS4zOTkgOS4zOTkgMCAwIDAtOS4zOTktOS4zOTl6bS0yLjgxIDguNjcxYTIuMzc0IDIuMzc0IDAgMSAxIDAtNC43NDggMi4zNzQgMi4zNzQgMCAwIDEgMCA0Ljc0OHoiIGZpbGw9IiNGRjdGMDAiLz48L3N2Zz4=)](https://platformio.org/)

This research endeavor, conducted by __Dr. John LaRocco__, __Dr. Qudsia Tahmina__, and __John Simonis__ at The Ohio State University, is dedicated to the development of an Elastocaloric atmospheric water harvester. Specifically, the primary objective of this project is to construct a system that can be juxtaposed with a conventional desiccant wheel system for the purpose of energy efficient water harvesting. Included in this repository is the evaluation of the efficiency and effectiveness of the newly developed system in comparison to its traditional counterpart. This project is a significant and novel step towards innovative solutions in the field of water harvesting technology.
## Requirements
### Software
- [VSCode](https://code.visualstudio.com/Download)
- [Platform IO](https://platformio.org/)
- [Git](https://git-scm.com/downloads)
- [Arduino IDE](https://www.arduino.cc/en/software)
- [PySR](https://github.com/MilesCranmer/PySR)
- Slicer | [PrusaSlicer]( https://www.prusa3d.com/en/page/prusaslicer_424/)
### Hardware
- [FLOOD-BOM](https://github.com/Multi-Volt/Flood/tree/main/FLOOD-BOM/)
- 3D-Printer
- Screw Driver
# Table of contents
- [Models & Construction](#models)
- [Data](#data)
- [Datalogger](#datalogger)
- [Testing](#testing)
- [Flood Equations](#flood-equations)
- [Flood MCU](#flood-mcu)
- [Flood Photos](#flood-photos)
- [License](#license)
## <a  id ="models"></a>Models & Construction
For this project, all pertinent 3D models are housed in the [FLOOD-3DF](https://github.com/Multi-Volt/Flood/tree/main/FLOOD-3DF) directory. This directory is organized into the following sub-directories for ease of navigation and access:
1. **Proto**: This contains both STEP and STL files of the final prototype.
2. **Control**: This includes the STEP and STL files for the Control Harvester.
3. **Deprecated**: This houses the STL files of designs that are no longer in use.
### Details
**Control Water Harvester Assembly Overview and Instructions**

The Control Water Harvester utilizes a desiccant wheel design, leveraging a heat lamp to dry out pockets of desiccant and a fan to circulate heated air through the silica gel desiccant. The assembly process is as follows:
1. **File Download**: Retrieve the STL files from [FLOOD-3DF](https://github.com/Multi-Volt/Flood/tree/main/FLOOD-3DF) and the .3MF file if you plan to print the design on a standard Ender 3 PRO.
2. **Setup**: Import the model or .3MF into an FDM 3D-Printer slicer such as [PrusaSlicer]( https://www.prusa3d.com/en/page/prusaslicer_424/) and select a material profile for PETG, which is necessary for higher temperatures.
3. **Slicing**: Configure a print with one wheel base and eight wheel rungs. Ensure the slicing settings include 100% infill, supports everywhere, and a layer height of 0.16mm or lower. Refer to the .3MF file for printing orientations
4. **Assembly**: Connect each of the rungs to the wheel base and secure each with M5 bolts and nuts, as specified in the Bill of Materials (BOM).
5. **Testing**: Upon completion of assembly, conduct a test using a lab power supply. Ensure the availability of fans and a heating device.

**NiTi Prototype Assembly Instructions**

The NiTi prototype employs a straightforward gantry system, powered by a high torque stepper motor. A T8 leadscrew is incorporated for a simple mechanical advantage to apply stress to the NiTi wires. The assembly process is as follows:
1. **File Download**: Retrieve the STL files from [FLOOD-3DF](https://github.com/Multi-Volt/Flood/tree/main/FLOOD-3DF) and the .3MF file if you plan to print the design on a standard Ender 3 PRO.
2. **Setup**: Import the model or .3MF into an FDM 3D-Printer slicer such as [PrusaSlicer]( https://www.prusa3d.com/en/page/prusaslicer_424/). Select a material profile for PETG, which is necessary for higher temperatures.
3. **Slicing**: Configure a print with one of each part, except for the anchors, of which you should print two. Ensure the slicing settings include 100% infill, supports everywhere, and a layer height of 0.16mm or lower. Refer to the .3MF file for printing orientations
4. **Nut Selection**: Based on the dimensions of most of the nut pockets, identify suitable metric nuts.
5. **Assembly**: Secure each of the items in accordance with the provided render.
6. **Gantry Fastening**: Ensure the use of the appropriate metric T-nuts for fastening to the supplied gantry.
7. **Testing**: Upon completion of the mechanical assembly, refer to the wiring diagram provided below and prepare for testing. You will need to either develop your own code for controlling the motors or utilize the open-source [GRBL](https://github.com/grbl/grbl) firmware.

[(Back to top)](#table-of-contents)
### Wiring
For wiring and electronics please refer to the [FLOOD-Schematics](https://github.com/Multi-Volt/Flood/tree/main/FLOOD-Schematics) folder (currently under revision).

[(Back to top)](#table-of-contents)
## Data
Currently, all data for this project can be found within the [FLOOD-Data](https://github.com/Multi-Volt/Flood/tree/main/FLOOD-Data) folder. This folder currently contains:
- Control (XLSX)
- Prototype (XLSX)
- Analysis ([Jupyter Notebook](https://jupyter.org/))

[(Back to top)](#table-of-contents)
## Datalogger
This project currently uses a compiled Datalogger from a previous research project from this team. Currently, this binary is only compiled for Windows systems and is present within the [FLOOD-Datalogger](https://github.com/Multi-Volt/Flood/tree/main/FLOOD-Datalogger) folder.

[(Back to top)](#table-of-contents)
## Testing
**Project Testing Procedure**

The testing procedure for this project was executed with a straightforward approach. The following steps were undertaken:
- **Assemblies**: Both the prototype and control assemblies were positioned within an enclosure equipped with a continuously operating humidifier.
- **Data Gathering**: Data was systematically collected at regular intervals of 10 seconds. Measurements, such as current, were averaged over this time frame.
- **Noise Reduction**: The averaging of measurements over the specified time frame was implemented to effectively mitigate the impact of noise and potential outliers.
- **Execution**: A total of three tests were conducted for both the control and the prototype assemblies.
- **Duration**: The entire testing procedure was carried out over a cumulative duration of 30 minutes.
- **Water Sensor**: The resistive water sensor was calibrated using a control amount of water for precision before any water was harvested.
This methodical approach ensured a comprehensive evaluation of the project components under the specified conditions.

[(Back to top)](#table-of-contents)
## Flood Equations
MSE
```math
\text{MSE}=\frac{1}{n}\sum_{i=1}^{n}(f(x)-g(x))^{2}
```
Desiccant Control Wheel 
```math
\log{\left(1.18^{x + 0.841 \cos{\left(x^{0.974} + 0.155 \right)} + \cos{\left(\left\lceil{x}\right\rceil^{0.553} \right)} \left\lfloor{e^{\text{erf}{\left(x \right)}}}\right\rfloor} + 0.550 x \right)}
\text{MSE}=2.695e-02
```
NiTi Prototype 
```math
x \left(- 0.000675 x - 0.00581 \cos{\left(0.861 \text{erf}{\left(\cos{\left(0.632 x \right)} \right)} + 0.861 \left\lfloor{x - 0.855}\right\rfloor \right)} + 0.214\right)
```
Deprecated Control
```math
\left\lceil{\log{\left(0.526 x + 2.07 \right)}}\right\rceil \text{erf}{\left(0.0790 x + 0.0790 \sin{\left(0.0924 x \left\lfloor{x + \sin{\left(x \cos{\left(\cos{\left(\text{erf}{\left(\cos{\left(\left(e^{x} + 2.07\right) \left\lceil{\cos{\left(2 e^{\left\lceil{x}\right\rceil + 1} \right)}}\right\rceil \right)} \right)} \right)} \right)} \right)}}\right\rfloor \right)} \right)}
```
Deprecated Prototype
```math
\log{\left(1.08^{x + 2.39 e^{\sin{\left(x + 0.573 \right)}}} \text{erf}{\left(\sin{\left(\text{erf}{\left(\cos{\left(1.07^{\left\lceil{x + 1.00 \cos{\left(x + 0.771 \right)} + 0.349}\right\rceil} \right)} \right)} \right)} \right)} + 1.14^{x} \right)}^{0.720}
```

## Flood MCU
**Instructions for Opening and Building MCU Code**

1. **Install Visual Studio Code (VS Code)**: Ensure that you have VS Code installed on your system as per the prerequisites mentioned earlier.
2. **Install Platform IO**: After successfully installing VS Code, proceed to install Platform IO.
3. **Download the Platform IO Directory**: Once Platform IO is installed, download the Platform IO directory from the [FLOOD-MCU](https://github.com/Multi-Volt/Flood/tree/main/FLOOD-MCU) folder.
4. **Open the Platform IO Directory in VS Code**: After downloading the files, open the directory in VS Code.
5. **Navigate to the Platform IO Extension**: Within VS Code, navigate to the Platform IO extension.
6. **Select the Folder**: From the Platform IO extension, choose the 'Pick a folder' option and select the folder that contains the `platformio.ini` file.
7. **Access the main.cpp Program**: You can now access the `main.cpp` program located in the `src` directory.
8. **Ensure Arduino Nano or Uno is Plugged In**: To access automatic build deployment, ensure that an Arduino Nano or Arduino Uno is plugged into your system.

[(Back to top)](#table-of-contents)
## Flood Photos
For this project, all pertinent images are housed in the [FLOOD-PHOTOS](https://github.com/Multi-Volt/Flood/tree/main/FLOOD-PHOTOS) directory. This directory is organized into the following sub-directories for ease of navigation and access:
1. **Proto**: This contains images for the final prototype.
2. **Control**: This includes images for the Control Harvester.
3. **Deprecated**: This houses the images for designs that are no longer in use.
# License
The MIT License (MIT) 2024 - [Dr. John LaRocco](https://github.com/javeharron/), [Dr. Qudsia Tahmina](https://github.com/tahminaq), [John Simonis](https://github.com/Multi-Volt/). Please have a look at the [LICENSE.md](LICENSE) for more details.

[(Back to top)](#table-of-contents)
