(This GCode script was designed to adjust the Z height of a CNC machine according)
(to the minute variations in the surface height in order to achieve a better result in the milling/etching process)
(This script is the output of AutoLevellerAE, 0.9.5u2 Changeset: ...2d0387 @ http://autoleveller.co.uk)
(Author: James Hawthorne PhD. File creation date: 02-05-2020 18:36)
(This program and any of its output is licensed under GPLv2 and as such...)
(AutoLevellerAE comes with ABSOLUTELY NO WARRANTY; for details, see sections 11 and 12 of the GPLv2 @ http://www.gnu.org/licenses/old-licenses/gpl-2.0.html)

G90 G20 S20000 G17

M0 (Attach probe wires and clips that need attaching)
(Initialize probe routine)
G0 Z1.5 (Move clear of the board first)
G1 X0.093 Y0.2052 F35 (Move to bottom left corner)
G0 Z0.0787 (Quick move to probe clearance height)
G31 Z-0.0625 F5 (Probe to a maximum of the specified probe height at the specified feed rate)
G92 Z0 (Touch off Z to 0 once contact is made)
G0 Z0.0787 (Move Z to above the contact point)
G31 Z-0.0625 F2.5 (Repeat at a more accurate slower rate)
G92 Z0
G0 Z0.0787
M0 (Detach any clips used for probing)

S16500
G20
G90
G94
F3.00
G00 Z0.1000
M03
G4 P1
G00 X0.8316Y0.0736
G01 Z-0.06450
G01 X0.64460Y0.07360Z-0.06438 ;segmented line. Max segment length set to 0.187
G01 X0.45760Y0.07360Z-0.06423 ;segmented line. Max segment length set to 0.187
G01 X0.27060Y0.07360Z-0.06388 ;segmented line. Max segment length set to 0.187
G01 X0.08360Y0.07360Z-0.06354 ;segmented line. Max segment length set to 0.187
G01 X-0.0384Y0.0736Z-0.06331
G01 X-0.03840Y0.26060Z-0.06240 ;segmented line. Max segment length set to 0.187
G01 X-0.03840Y0.44760Z-0.06148 ;segmented line. Max segment length set to 0.187
G01 X-0.03840Y0.63460Z-0.06051 ;segmented line. Max segment length set to 0.187
G01 X-0.03840Y0.82160Z-0.05940 ;segmented line. Max segment length set to 0.187
G01 X-0.03840Y1.00860Z-0.05842 ;segmented line. Max segment length set to 0.187
G01 X-0.0384Y1.0974Z-0.05811
G00 Z0.1000
G00 X-0.0384Y1.1921
G01 Z-0.05778
G01 X-0.03840Y1.37910Z-0.05723 ;segmented line. Max segment length set to 0.187
G01 X-0.03840Y1.56610Z-0.05700 ;segmented line. Max segment length set to 0.187
G01 X-0.03840Y1.75310Z-0.05693 ;segmented line. Max segment length set to 0.187
G01 X-0.03840Y1.94010Z-0.05737 ;segmented line. Max segment length set to 0.187
G01 X-0.03840Y2.12710Z-0.05772 ;segmented line. Max segment length set to 0.187
G01 X-0.0384Y2.2159Z-0.05772
G01 X0.14860Y2.21590Z-0.05809 ;segmented line. Max segment length set to 0.187
G01 X0.33560Y2.21590Z-0.05847 ;segmented line. Max segment length set to 0.187
G01 X0.52260Y2.21590Z-0.05882 ;segmented line. Max segment length set to 0.187
G01 X0.70960Y2.21590Z-0.05911 ;segmented line. Max segment length set to 0.187
G01 X0.8316Y2.2159Z-0.05929
G00 Z0.1000
G00 X0.9264Y2.2159
G01 Z-0.05938
G01 X1.11340Y2.21590Z-0.05948 ;segmented line. Max segment length set to 0.187
G01 X1.30040Y2.21590Z-0.05959 ;segmented line. Max segment length set to 0.187
G01 X1.48740Y2.21590Z-0.05977 ;segmented line. Max segment length set to 0.187
G01 X1.67440Y2.21590Z-0.05995 ;segmented line. Max segment length set to 0.187
G01 X1.7964Y2.2159Z-0.05995
G01 X1.79640Y2.02890Z-0.05996 ;segmented line. Max segment length set to 0.187
G01 X1.79640Y1.84190Z-0.06001 ;segmented line. Max segment length set to 0.187
G01 X1.79640Y1.65490Z-0.06019 ;segmented line. Max segment length set to 0.187
G01 X1.79640Y1.46790Z-0.06068 ;segmented line. Max segment length set to 0.187
G01 X1.79640Y1.28090Z-0.06115 ;segmented line. Max segment length set to 0.187
G01 X1.7964Y1.1921Z-0.06136
G00 Z0.1000
G00 X1.7964Y1.0974
G01 Z-0.06159
G01 X1.79640Y0.91040Z-0.06219 ;segmented line. Max segment length set to 0.187
G01 X1.79640Y0.72340Z-0.06326 ;segmented line. Max segment length set to 0.187
G01 X1.79640Y0.53640Z-0.06430 ;segmented line. Max segment length set to 0.187
G01 X1.79640Y0.34940Z-0.06523 ;segmented line. Max segment length set to 0.187
G01 X1.79640Y0.16240Z-0.06616 ;segmented line. Max segment length set to 0.187
G01 X1.7964Y0.0736Z-0.06660
G01 X1.60940Y0.07360Z-0.06642 ;segmented line. Max segment length set to 0.187
G01 X1.42240Y0.07360Z-0.06581 ;segmented line. Max segment length set to 0.187
G01 X1.23540Y0.07360Z-0.06524 ;segmented line. Max segment length set to 0.187
G01 X1.04840Y0.07360Z-0.06487 ;segmented line. Max segment length set to 0.187
G01 X0.9264Y0.0736Z-0.06462
G00 Z0.1000
G00 Z0.1000
G00 X0Y0
M05
