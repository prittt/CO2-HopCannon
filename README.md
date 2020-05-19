# Boost Your Dry Hopping with CO2 <a name="eng" href="#ita"><img src="/imgs/assets/flag-ita.png" height="30" width="30"/></a>
[![Donate](https://img.shields.io/badge/Donate-PayPal-green.svg)](https://paypal.me/FedericoBolelli) 
[![Beer](https://img.shields.io/badge/made%20with-%F0%9F%8D%BA%20beer-yellow)](https://prittt.github.io/pages/beer)
[![Release](https://img.shields.io/github/v/release/prittt/CO2-HopCannon)](https://github.com/prittt/CO2-HopCannon/releases/latest/)
[![License](https://img.shields.io/github/license/prittt/CO2-HopCannon)](https://github.com/prittt/CO2-HopCannon/blob/master/LICENSE)

<!-- <img align="right" width="40%" src="/imgs/photos/preview_00.jpg" > -->

<p align="justify">
I have used the classic hop bags for years, but the result was not as expected. I was unable to get the explosiveness of the hop I was looking for. With the new conical trunk fermenter I tried to increase the effectiveness of the process by leaving the hop free during fermentation. The Result? Worse than before! Hops tend to pack on the bottom of the fermenter and the amount of aromas it releases is ridiculous. This CO2-HopCannon tool creates an automatic system capable of moving the hops inside the fermenter during dry hopping, so as to maximize the effectiveness of the process and aroma extracion.
</p>

<img width="19%" src="/imgs/photos/preview_01.jpg" /> <img width="19%" src="/imgs/photos/preview_02.jpg" /> <img width="19%" src="/imgs/photos/preview_03.jpg" /> <img width="19%" src="/imgs/photos/preview_04.jpg" /> <img width="19%" src="/imgs/photos/preview_05.jpg" />

## Components

<table style="border: 0px">
	<thead>
		<tr>
			<th>Picture</th>
			<th>Component</th>
			<th>Details</th>
			<th>Online</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td><img src="/imgs/components/nano.png" height="100" width="100"></td>
			<td>Arduino <br/> Nano</td>
			<td>V3</td>
			<td><a href="https://www.amazon.it/Elegoo-Scheda-Microcontrollore-ATmega328P-Arduino/dp/B0716S43Q2/ref=sr_1_4?__mk_it_IT=%C3%85M%C3%85%C5%BD%C3%95%C3%91&dchild=1&keywords=arduino+nano&qid=1588104837&sr=8-4">Amazon</a></td>
		</tr>
		<tr>
			<td><img src="/imgs/components/diode.png" height="100" width="100"></td>
			<td>Diode</td>
			<td>1N4007</td>
			<td><a href="https://it.aliexpress.com/item/32664545131.html?spm=a2g0o.productlist.0.0.6899567a3NuF81&algo_pvid=78dc39bc-4ebf-4a9c-8167-5baa3f28a214&algo_expid=78dc39bc-4ebf-4a9c-8167-5baa3f28a214-0&btsid=0ab6f83a15881049263985945e3fc1&ws_ab_test=searchweb0_0,searchweb201602_,searchweb201603_">AliExpress</a></td>
		</tr>
		<tr>
			<td><img src="/imgs/components/transistor.png" height="100" width="100"></td>	
			<td>Transistor <br/> Darlington</td>
			<td>TIP120</td>
			<td><a href="https://it.aliexpress.com/item/2044826574.html?spm=a2g0o.productlist.0.0.3b995ca90w2gKK&algo_pvid=d3cd2bdf-1648-4a3b-a75f-ecba42b60a6c&algo_expid=d3cd2bdf-1648-4a3b-a75f-ecba42b60a6c-0&btsid=0ab6f83a15881050297504456e3fc1&ws_ab_test=searchweb0_0,searchweb201602_,searchweb201603_">AliExpress</a><br/>
			<a href="https://www.amazon.it/gp/product/B079H1JSGD/ref=ppx_yo_dt_b_asin_title_o07_s00?ie=UTF8&psc=1">Amazon</a></td>
		</tr>
		<tr>
			<td><img src="/imgs/components/valve.png" height="100" width="100"></td>
			<td>John Guest <br/> Electrovalve</td>
			<td>DC 12 V <br/> NC (normally close) <br> 0 < P < 0.8 Mpa <br/> 0 < °C < 80 <br/> john guest 9.52mm - 3/8"</td>
			<td><a href="https://it.aliexpress.com/item/32642982184.html?spm=a2g0s.9042311.0.0.3bd14c4d8TaxGj">AliExpress</a></td>
		</tr>
		<tr>
			<td><img src="/imgs/components/switch.png" height="100" width="100"></td>
			<td>Switch Module <br/> with Fuse</td>
			<td></td>
			<td><a href="https://www.amazon.it/gp/product/B07T5D39R3/ref=ppx_yo_dt_b_asin_title_o05_s00?ie=UTF8&psc=1">Amazon</a></td>
		</tr>
		<tr>
			<td><img src="/imgs/components/resistor.png" height="100" width="100"></td>
			<td>Resistors</td>
			<td>2.2 KΩ (1x) and 10 kΩ (3x)</td>
			<td><a href="https://it.aliexpress.com/item/33004978023.html?spm=a2g0o.productlist.0.0.2fe824eaUJMPHF&algo_pvid=77c3954e-7ed1-4a7a-a13f-c69968f4f4a8&algo_expid=77c3954e-7ed1-4a7a-a13f-c69968f4f4a8-1&btsid=0ab6f81e15881056260007023e7d15&ws_ab_test=searchweb0_0,searchweb201602_,searchweb201603_">AliExpress</a><br/>
			<a href="https://www.amazon.it/Elegoo-Resistor-Assortimento-Progetti-Elettronica/dp/B071Z66XDV/ref=sr_1_6?__mk_it_IT=%C3%85M%C3%85%C5%BD%C3%95%C3%91&dchild=1&keywords=resistori&qid=1588105577&sr=8-6">Amazon</a></td>
		</tr>
		<tr>
			<td><img src="/imgs/components/case.png" height="100" width="100"></td>
			<td>Case</td>
			<td>~19x~14x~7 cm (or bigger)</td>
			<td><a href="https://www.ebay.it/itm/Scatola-di-derivazione-da-esterno-con-pareti-lisce-190X140X70mm-2-Pezzi/273594021734?ssPageName=STRK%3AMEBIDX%3AIT&_trksid=p2057872.m2749.l2649">eBay</a>
			</td>
		</tr>
		<tr>
			<td><img src="/imgs/components/lcd.png" height="100" width="100"></td>
			<td>16x2 LCD Screen <br/> with I2C module</td>
			<td></td>
			<td><a href="https://it.aliexpress.com/item/1935576611.html?spm=a2g0o.productlist.0.0.5d00470dE2xTCr&algo_pvid=b9f628c6-a950-4958-a5e6-75095abf762e&algo_expid=b9f628c6-a950-4958-a5e6-75095abf762e-0&btsid=0be3746c15881058703022133e9699&ws_ab_test=searchweb0_0,searchweb201602_,searchweb201603_">AliExpress</a>
			</td>
		</tr>
		<tr>
			<td><img src="/imgs/components/power.png" height="100" width="100"></td>
			<td>Power Supply <br/> Stabilized Transformer</td>
			<td>Input: Depends on your country <br/> Output: DC 12 V, ~2.5A <br/> Size: ~8.6x~5.8x~3.2 cm (or smaller)</td>
			<td><a href="https://www.ebay.it/itm/ALIMENTATORE-TRASFORMATORE-12V-2A-STABILIZZATO-SWITCH-TRIMMER-220V-2-5A-12-VOLT/322668095291?ssPageName=STRK%3AMEBIDX%3AIT&_trksid=p2057872.m2749.l2649">eBay</a>
			</td>
		</tr>
		<tr>
			<td><img src="/imgs/components/terminal.png" height="100" width="100"></td>
			<td>2 PIN Connector</td>
			<td>PIN spacing 5mm</td>
			<td><a href="https://it.aliexpress.com/item/32841198269.html?spm=a2g0o.productlist.0.0.1f8d4082ix0yVo&algo_pvid=af18a170-4631-4fcd-a227-f5b6372b0d3f&algo_expid=af18a170-4631-4fcd-a227-f5b6372b0d3f-1&btsid=0ab6f83115881063575334308e0a7e&ws_ab_test=searchweb0_0,searchweb201602_,searchweb201603_">AliExpress</a>
			</td>
		</tr>
		<tr>
			<td><img src="/imgs/components/push.png" height="100" width="100"></td>
			<td>Push Button</td>
			<td></td>
			<td><a href="https://www.amazon.it/Larcele-Pulsante-Automatico-Momentaneo-Plastica/dp/B077FP8FT3/ref=sr_1_4?__mk_it_IT=%C3%85M%C3%85%C5%BD%C3%95%C3%91&dchild=1&keywords=push+button&qid=1588346553&sr=8-4">Amazon</a> <br/>
			<a href="https://it.aliexpress.com/item/32692164728.html?spm=a2g0o.productlist.0.0.38ea3b76LW0V3j&algo_pvid=be962fe0-d290-41fe-898c-13924c6fc5f4&algo_expid=be962fe0-d290-41fe-898c-13924c6fc5f4-0&btsid=0ab6f82115883482482127687e51fa&ws_ab_test=searchweb0_0,searchweb201602_,searchweb201603_">AliExpress</a>
			</td>
		</tr>
		<tr>
			<td><img src="/imgs/components/pins.png" height="100" width="100"></td>
			<td>Female PINs</td>
			<td>15 PINs (1x), 4 PINs (1x), <br/> 10 PINs (1x), 2 PINs (3x)</td>
			<td><a href="https://it.aliexpress.com/item/4000096276148.html?spm=a2g0o.productlist.0.0.7a3b570bPoAZYM&algo_pvid=53a06124-49cc-427b-9f04-bdd3a25efae1&algo_expid=53a06124-49cc-427b-9f04-bdd3a25efae1-11&btsid=0ab50f0815883528498925959e75c8&ws_ab_test=searchweb0_0,searchweb201602_,searchweb201603_">AliExpress </a>
			</td>
		</tr>
		<tr>
			<td><img src="/imgs/components/cable.png" height="100" width="100"></td>
			<td>Power Cable</td>
			<td></td>
			<td><a href="https://www.amazon.it/Lindy-30346-Cavo-Alimentazione-Angolo/dp/B0058H0XGQ/ref=psdc_460032031_t3_B07DW2XFNM">Amazon </a>
			</td>
		</tr>
	</tbody>
</table>

## How to Reproduce the CO2-HopCannon

### Prepare your Case

<img src="/imgs/photos/case_01.jpg" width="24%" /> <img src="/imgs/photos/case_02.jpg" width="24%" /> <img src="/imgs/photos/case_03.jpg" width="24%" /> <img src="/imgs/photos/case_04.jpg" width="24%" />

<p align="justify">
You have to drill and cut your case for buttons, valve, LCD, and power switch. The drilling models are available in the <a href="/case/case_holes.pdf">case_holes.pdf</a> pdf file, but make sure they match the components you purchased. When this is not the case you can change the models using the PowerPoint file <a href="/case/case_holes.pptx">case_holes.pptx</a>.
</p>

### Create the PCB

<img src="/imgs/photos/pcb_01.jpg" width="24%" /> <img src="/imgs/photos/pcb_02.jpg" width="24%" /> <img src="/imgs/photos/pcb_03.jpg" width="24%" /> <img src="/imgs/photos/pcb_04.jpg" width="24%" />

<img src="/imgs/photos/pcb_05.png" width="24%" /> <img src="/imgs/photos/pcb_06.png" width="24%" /> <img src="/imgs/photos/pcb_07.png" width="24%" /> <img src="/imgs/photos/pcb_08.jpg" width="24%" />

<p align="justify">The PCB fritzing model (single layer) and all the other useful files are available in the <a href="/pcb/">pcb</a> folder. In the <a href="/pcb/export/">export</a> subfolder you can find the exported PCB in three different formats: <a href="/pcb/export/pdf/">pdf</a>, <a href="/pcb/export/gerber/">gerber</a>, and <a href="/pcb/export/svg/">svg</a>. In the <a href="/pcb/flatcam/">flatcam</a> subfolder the <a href="http://flatcam.org/">flatcam</a> project to generate the routes for the CNC milling machine is provided. For convenience, a bunch of gcodes file are grouped in the <a href="/pcb/flatcam/">gcode</a> folder:</p> 

<table style="border: 0px">
	<thead>
		<tr>
			<th>Filename</th>
			<th>Description</th>
			<th>Drilling Tool</th>
			<th>Mandatory</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>isolation_00_v2.nc</td>
			<td>First step of the isolation route. </td>
			<td><table>
				<tr>
					<td>Cut Z</td>
					<td>Travel Z</td>
					<td>Feed Rate</td>
					<td>Tool Diam.</td>
					<td>Spindle Speed</td>
				</tr>
				<tr>
					<td>-0.007 inch</td>
					<td>0.1 inch</td>
					<td>3.0</td>
					<td>0.016 inch</td>
					<td>16500</td>
				</tr>
				</table>
			</td>
			<td>:heavy_check_mark:</td>
		</tr>
		<tr>
			<td>isolation_01_v2.nc</td>
			<td>Second step of the isolation route. </td>
			<td><table>
				<tr>
					<td>Cut Z</td>
					<td>Travel Z</td>
					<td>Feed Rate</td>
					<td>Tool Diam.</td>
					<td>Spindle Speed</td>
				</tr>
				<tr>
					<td>-0.007 inch</td>
					<td>0.1 inch</td>
					<td>3.0</td>
					<td>0.016 inch</td>
					<td>16500</td>
				</tr>
				</table> 
			</td>
			<td>:x:</td>
		</tr>
		<tr>
			<td>cut_out.nc</td>
			<td>Board/Plate cut out route. </td>
			<td><table>
				<tr>
					<td>Cut Z</td>
					<td>Travel Z</td>
					<td>Feed Rate</td>
					<td>Tool Diam.</td>
					<td>Spindle Speed</td>
				</tr>
				<tr>
					<td>-0.063 inch</td>
					<td>0.1 inch</td>
					<td>3.0</td>
					<td>0.0472 inch</td>
					<td>16500</td>
				</tr>
				</table>
			</td>
			<td>:x:</td>
		</tr>
	</tbody>
</table>

<p align="justify">
No gcode is available for the holes, but you can generate it from the flatcam project if you need it! The perfect tool for the isolation routes it the V-shaped engraving cutter. <b>Be careful</b> because the isolation routes have been generated using the non-mirrored PCB fritzing circuit. This means that Arduino nano must be soldered upside down.
</p>

<p align="justify">
The files starting with "AL" contain the same routes described above, but after the auto levelling process carried out with <a href="http://www.autoleveller.co.uk/">this</a> extremely useful software. 
</p>

<p align="justify">
In case you do not have a CNC milling machine you can create the PCB using acid. A detailed explanation is available <a href="https://www.instructables.com/id/Acid-Etching-Printed-Circuit-Boards/" target="_blank">here</a>.
</p>

### Assemble Everything

<img src="/imgs/photos/assemble_01.jpg" width="24%" /> <img src="/imgs/photos/assemble_02.jpg" width="24%" /> <img src="/imgs/photos/assemble_03.jpg" width="24%" /> <img src="/imgs/photos/assemble_04.jpg" width="24%" />

<p align="justify">
Once the PCB is ready and the case has been drilled, you can proceed with the assembly!
</p>

### The Super Cool Frame

<img src="/imgs/photos/frame_01.jpg" width="24%" /> <img src="/imgs/photos/frame_02.jpg" width="24%" /> <img src="/imgs/photos/frame_03.jpg" width="24%" /> <img src="/imgs/photos/frame_04.jpg" width="24%" />

<p align="justify">
If you want to add a frame around the LCD screen like I did, find the 3D (stl) model in the <a href="/case/frame/">/case/frame/</a> folder. At the same path a gcode file is also available for engraving the frame with a 6mm ball nose cutter.
</p>

### Load the Program

#### Requirements

- Arduino IDE (tested with version 1.8.8) to load the program into Arduino's memory;
- Liquid Crystal I2C Arduino library. You can download the library from GitHub or find the specific version I've tested and used in the <i>3rdparties</i> folder of this project.

#### Loading

The CO2-HopCannon implementation is available in the <a href="/CO2-HopCannon/">CO2-HopCannon</a> folder. After installing the Arduino IDE, you have to <a href="https://www.arduino.cc/en/guide/libraries" target="_blank">install the 3rdparty library</a> and upload the CO2-HopCannon sketch.

Is this the first time you are using Arduino and you have no idea how to load a program? You should read <a href="https://www.arduino.cc/en/main/howto" target="_blank">this</a> article. 

### Configuration and Usage

<p align="justify">
If necessary, you can adjust configuration parameters by editing the file <a href="/CO2-HopCannon/settings.h">settings.h</a>. By default, the sketch will exploit the Arduino EEPROM memory to permanently store the configuration parameters (shot length and frequency) between different executions. 
</p>

<img src="/imgs/usage/usage_01.jpg" width="40%" />

<p align="justify">
From left to right the three buttons are respectively <i>setup</i>, <i>+</i>, and <i>-</i> buttons. 
</p>

<p align="justify">
There are basically three state modes for the CO2-HopCannon: 
</p>
<table>
	<tr>
		<td><img src="/imgs/usage/mode_01.jpg" width="100%" /> </td>	
		<td><b>Countdown</b></td> 
		<td>
		<p align="justify">The display shows a countdown timer to the next shot.</p>
		</td>
	</tr>
	<tr>
		<td><img src="/imgs/usage/mode_02.jpg" width="100%" /> </td>	
		<td><b>Settings</b></td>
		<td>
		<p align="justify">The display shows the configuration menu. When the CO2-HopCannon is in configuration mode you can update shot frequency and length by pressing <i>+</i> and/or <i>-</i> buttons. It is possible to enter the configuration mode or switch from frequency to length update by pressing and holding the <i>setup</i> button. After a period of inactivity the CO2-HopCannon will automatically switch to <b>Countdown Mode</b> again.</p>
		</td>
	</tr>
	<tr>
		<td><img src="/imgs/usage/mode_03.jpg" width="100%" /> </td>	
		<td><b>Shooting</b></td>
		<td>
		<p align="justify">The display a firing gun for the period in which the CO2 valve is open.</p>
		</td>
	</tr>
</table>

<p align="justify">
When the CO2-HopCannon is in <b>Countdown</b> or <b>Settings</b> mode you can force a shot by simultaneously pressing and holding the <i>+</i> and <i>-</i> buttons.  After a period of inactivity the CO2-HopCannon will automatically switch the LCD backlight off to save energy. To turn the LCD backlight on again you can press any button for a while.</p>
</p>

## Donation
If this project helped you in any way, you can offer me a beer or a coffee :smiley:

[![paypal](https://www.paypalobjects.com/en_US/i/btn/btn_donateCC_LG.gif)](https://paypal.me/FedericoBolelli)

# Potenzia il tuo Dry Hopping con la CO2 <a name="ita" href="#eng"><img src="/imgs/assets/flag-eng.png" height="30" width="30"/></a>
[![Donate](https://img.shields.io/badge/Donate-PayPal-green.svg)](https://paypal.me/FedericoBolelli) 
[![Beer](https://img.shields.io/badge/made%20with-%F0%9F%8D%BA%20beer-yellow)](https://prittt.github.io/pages/beer)
[![Release](https://img.shields.io/github/v/release/prittt/CO2-HopCannon)](https://github.com/prittt/CO2-HopCannon/releases/latest/)
[![License](https://img.shields.io/github/license/prittt/CO2-HopCannon)](https://github.com/prittt/CO2-HopCannon/blob/master/LICENSE)

<!-- <img align="right" width="40%" src="/imgs/photos/preview_00.jpg" > -->

<p align="justify">
Ho utilizzato le classiche hop bag per anni, ma i risultati non erano quelli sperati: non riuscivo ad ottenere l'esplosività del luppolo che stavo cercando. Con il nuovo fermentatore a tronco conico ho provato ad aumentare l'efficacia del processo lasciando il lupppolo libero durante la fermentazione. Risultato? Peggio di prima! Il luppolo tende ad impaccarsi sul fondo del fermentatore e la quantità di aromi che rilascia è ridicola. Questo progetto, CO2-HopCannon, realizza un sistema automatico in grado di movimentare il luppolo all'interno del fermentatore usando la CO2, così da aumentarne al massimo la resa. 
</p>

<img width="19%" src="/imgs/photos/preview_01.jpg" /> <img width="19%" src="/imgs/photos/preview_02.jpg" /> <img width="19%" src="/imgs/photos/preview_03.jpg" /> <img width="19%" src="/imgs/photos/preview_04.jpg" /> <img width="19%" src="/imgs/photos/preview_05.jpg" />

## Componenti

<table style="border: 0px">
	<thead>
		<tr>
			<th>Foto</th>
			<th>Componente</th>
			<th>Dettagli</th>
			<th>Online</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td><img src="/imgs/components/nano.png" height="100" width="100"></td>
			<td>Arduino <br/> Nano</td>
			<td>V3</td>
			<td><a href="https://www.amazon.it/Elegoo-Scheda-Microcontrollore-ATmega328P-Arduino/dp/B0716S43Q2/ref=sr_1_4?__mk_it_IT=%C3%85M%C3%85%C5%BD%C3%95%C3%91&dchild=1&keywords=arduino+nano&qid=1588104837&sr=8-4">Amazon</a></td>
		</tr>
		<tr>
			<td><img src="/imgs/components/diode.png" height="100" width="100"></td>
			<td>Diodo</td>
			<td>1N4007</td>
			<td><a href="https://it.aliexpress.com/item/32664545131.html?spm=a2g0o.productlist.0.0.6899567a3NuF81&algo_pvid=78dc39bc-4ebf-4a9c-8167-5baa3f28a214&algo_expid=78dc39bc-4ebf-4a9c-8167-5baa3f28a214-0&btsid=0ab6f83a15881049263985945e3fc1&ws_ab_test=searchweb0_0,searchweb201602_,searchweb201603_">AliExpress</a></td>
		</tr>
		<tr>
			<td><img src="/imgs/components/transistor.png" height="100" width="100"></td>	
			<td>Transistor <br/> Darlington</td>
			<td>TIP120</td>
			<td><a href="https://it.aliexpress.com/item/2044826574.html?spm=a2g0o.productlist.0.0.3b995ca90w2gKK&algo_pvid=d3cd2bdf-1648-4a3b-a75f-ecba42b60a6c&algo_expid=d3cd2bdf-1648-4a3b-a75f-ecba42b60a6c-0&btsid=0ab6f83a15881050297504456e3fc1&ws_ab_test=searchweb0_0,searchweb201602_,searchweb201603_">AliExpress</a><br/>
			<a href="https://www.amazon.it/gp/product/B079H1JSGD/ref=ppx_yo_dt_b_asin_title_o07_s00?ie=UTF8&psc=1">Amazon</a></td>
		</tr>
		<tr>
			<td><img src="/imgs/components/valve.png" height="100" width="100"></td>
			<td>Elettrovalvola <br/> John Guest</td>
			<td>DC 12 V <br/> NC (normalmente chiusa) <br> 0 < P < 0.8 Mpa <br/> 0 < °C < 80 <br/> john guest 9.52mm - 3/8"</td>
			<td><a href="https://it.aliexpress.com/item/32642982184.html?spm=a2g0s.9042311.0.0.3bd14c4d8TaxGj">AliExpress</a></td>
		</tr>
		<tr>
			<td><img src="/imgs/components/switch.png" height="100" width="100"></td>
			<td>Modulo Alimentazione <br/> con Fusibile</td>
			<td></td>
			<td><a href="https://www.amazon.it/gp/product/B07T5D39R3/ref=ppx_yo_dt_b_asin_title_o05_s00?ie=UTF8&psc=1">Amazon</a></td>
		</tr>
		<tr>
			<td><img src="/imgs/components/resistor.png" height="100" width="100"></td>
			<td>Resistori</td>
			<td>2.2 KΩ (1x) e 10 kΩ (3x)</td>
			<td><a href="https://it.aliexpress.com/item/33004978023.html?spm=a2g0o.productlist.0.0.2fe824eaUJMPHF&algo_pvid=77c3954e-7ed1-4a7a-a13f-c69968f4f4a8&algo_expid=77c3954e-7ed1-4a7a-a13f-c69968f4f4a8-1&btsid=0ab6f81e15881056260007023e7d15&ws_ab_test=searchweb0_0,searchweb201602_,searchweb201603_">AliExpress</a><br/>
			<a href="https://www.amazon.it/Elegoo-Resistor-Assortimento-Progetti-Elettronica/dp/B071Z66XDV/ref=sr_1_6?__mk_it_IT=%C3%85M%C3%85%C5%BD%C3%95%C3%91&dchild=1&keywords=resistori&qid=1588105577&sr=8-6">Amazon</a></td>
		</tr>
		<tr>
			<td><img src="/imgs/components/case.png" height="100" width="100"></td>
			<td>Case</td>
			<td>~19x~14x~7 cm (o più grande)</td>
			<td><a href="https://www.ebay.it/itm/Scatola-di-derivazione-da-esterno-con-pareti-lisce-190X140X70mm-2-Pezzi/273594021734?ssPageName=STRK%3AMEBIDX%3AIT&_trksid=p2057872.m2749.l2649">eBay</a>
			</td>
		</tr>
		<tr>
			<td><img src="/imgs/components/lcd.png" height="100" width="100"></td>
			<td>Schermo LCD 16x2 <br/> con modulo I2C</td>
			<td></td>
			<td><a href="https://it.aliexpress.com/item/1935576611.html?spm=a2g0o.productlist.0.0.5d00470dE2xTCr&algo_pvid=b9f628c6-a950-4958-a5e6-75095abf762e&algo_expid=b9f628c6-a950-4958-a5e6-75095abf762e-0&btsid=0be3746c15881058703022133e9699&ws_ab_test=searchweb0_0,searchweb201602_,searchweb201603_">AliExpress</a>
			</td>
		</tr>
		<tr>
			<td><img src="/imgs/components/power.png" height="100" width="100"></td>
			<td>Alimentatore</td>
			<td>Input: AC 220V <br/> Output: DC 12 V, ~2.5A <br/> Dimensioni: ~8.6x~5.8x~3.2 cm (o inferiori)</td>
			<td><a href="https://www.ebay.it/itm/ALIMENTATORE-TRASFORMATORE-12V-2A-STABILIZZATO-SWITCH-TRIMMER-220V-2-5A-12-VOLT/322668095291?ssPageName=STRK%3AMEBIDX%3AIT&_trksid=p2057872.m2749.l2649">eBay</a>
			</td>
		</tr>
		<tr>
			<td><img src="/imgs/components/terminal.png" height="100" width="100"></td>
			<td>Morsetti a 2 PIN</td>
			<td>Spaziatura PIN 5mm</td>
			<td><a href="https://it.aliexpress.com/item/32841198269.html?spm=a2g0o.productlist.0.0.1f8d4082ix0yVo&algo_pvid=af18a170-4631-4fcd-a227-f5b6372b0d3f&algo_expid=af18a170-4631-4fcd-a227-f5b6372b0d3f-1&btsid=0ab6f83115881063575334308e0a7e&ws_ab_test=searchweb0_0,searchweb201602_,searchweb201603_">AliExpress</a>
			</td>
		</tr>
		<tr>
			<td><img src="/imgs/components/push.png" height="100" width="100"></td>
			<td>Pulsanti</td>
			<td></td>
			<td><a href="https://www.amazon.it/Larcele-Pulsante-Automatico-Momentaneo-Plastica/dp/B077FP8FT3/ref=sr_1_4?__mk_it_IT=%C3%85M%C3%85%C5%BD%C3%95%C3%91&dchild=1&keywords=push+button&qid=1588346553&sr=8-4">Amazon</a> <br/>
			<a href="https://it.aliexpress.com/item/32692164728.html?spm=a2g0o.productlist.0.0.38ea3b76LW0V3j&algo_pvid=be962fe0-d290-41fe-898c-13924c6fc5f4&algo_expid=be962fe0-d290-41fe-898c-13924c6fc5f4-0&btsid=0ab6f82115883482482127687e51fa&ws_ab_test=searchweb0_0,searchweb201602_,searchweb201603_">AliExpress</a>
			</td>
		</tr>
		<tr>
			<td><img src="/imgs/components/pins.png" height="100" width="100"></td>
			<td>PIN Femmina</td>
			<td>15 PIN (1x), 4 PIN (1x), <br/> 10 PIN (1x), 2 PIN (3x)</td>
			<td><a href="https://it.aliexpress.com/item/4000096276148.html?spm=a2g0o.productlist.0.0.7a3b570bPoAZYM&algo_pvid=53a06124-49cc-427b-9f04-bdd3a25efae1&algo_expid=53a06124-49cc-427b-9f04-bdd3a25efae1-11&btsid=0ab50f0815883528498925959e75c8&ws_ab_test=searchweb0_0,searchweb201602_,searchweb201603_">AliExpress </a>
			</td>
		</tr>
		<tr>
			<td><img src="/imgs/components/cable.png" height="100" width="100"></td>
			<td>Cavo di <br />Alimentazione</td>
			<td></td>
			<td><a href="https://www.amazon.it/Lindy-30346-Cavo-Alimentazione-Angolo/dp/B0058H0XGQ/ref=psdc_460032031_t3_B07DW2XFNM">Amazon </a>
			</td>
		</tr>
	</tbody>
</table>

## Come Realizzare il CO2-HopCannon

### Preparare il Case

<img src="/imgs/photos/case_01.jpg" width="24%" /> <img src="/imgs/photos/case_02.jpg" width="24%" /> <img src="/imgs/photos/case_03.jpg" width="24%" /> <img src="/imgs/photos/case_04.jpg" width="24%" />

<p align="justify">
Prima di tutto occorre forare il case così che possa ospitare pulsanti, valvola, LCD e slot di alimentazione. I modelli di foratura sono disponibili nella file pdf <a href="/case/case_holes.pdf">case_holes.pdf</a>, ma dovete assicuravi che le misure coincidano con i componenti acquistati. Se così non fosse potete modificare i modelli usando il file PowerPoint <a href="/case/case_holes.pptx">case_holes.pptx</a>.
</p>

### Creazione del PCB

<img src="/imgs/photos/pcb_01.jpg" width="24%" /> <img src="/imgs/photos/pcb_02.jpg" width="24%" /> <img src="/imgs/photos/pcb_03.jpg" width="24%" /> <img src="/imgs/photos/pcb_04.jpg" width="24%" />

<img src="/imgs/photos/pcb_05.png" width="24%" /> <img src="/imgs/photos/pcb_06.png" width="24%" /> <img src="/imgs/photos/pcb_07.png" width="24%" /> <img src="/imgs/photos/pcb_08.jpg" width="24%" />

<p align="justify">Il modello del PCB realizzato con fritzing (singola faccia) e tutti gli altri file utili per l'incisione del PCB sono disponibili nella cartella <a href="/pcb/">pcb</a>. Nella sottocartella <a href="/pcb/export/">export</a> potete trovare il progetto esportato in tre differenti formati: <a href="/pcb/export/pdf/">pdf</a>, <a href="/pcb/export/gerber/">gerber</a>, e <a href="/pcb/export/svg/">svg</a>. Nella sottocartella <a href="/pcb/flatcam/">flatcam</a> è disponibile il progetto <a href="http://flatcam.org/">flatcam</a> per generare i percorsi di incisione per la fresa CNC. Per comodità, un seria di file gcode sono riportati nell'omonima cartella <a href="/pcb/flatcam/">gcode</a>:</p> 

<table style="border: 0px">
	<thead>
		<tr>
			<th>Nome del File</th>
			<th>Descrizione</th>
			<th>Strumento di Taglio</th>
			<th>Obbligatorio</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>isolation_00_v2.nc</td>
			<td>Prima parte del percorso di isolamento delle piste. </td>
			<td><table>
				<tr>
					<td>Cut Z</td>
					<td>Travel Z</td>
					<td>Feed Rate</td>
					<td>Tool Diam.</td>
					<td>Spindle Speed</td>
				</tr>
				<tr>
					<td>-0.007 pollici</td>
					<td>0.1 pollici</td>
					<td>3.0</td>
					<td>0.016 pollici</td>
					<td>16500</td>
				</tr>
				</table>
			</td>
			<td>:heavy_check_mark:</td>
		</tr>
		<tr>
			<td>isolation_01_v2.nc</td>
			<td>Seconda parte del percorso di isolamento delle piste. </td>
			<td><table>
				<tr>
					<td>Cut Z</td>
					<td>Travel Z</td>
					<td>Feed Rate</td>
					<td>Tool Diam.</td>
					<td>Spindle Speed</td>
				</tr>
				<tr>
					<td>-0.007 pollici</td>
					<td>0.1 pollici</td>
					<td>3.0</td>
					<td>0.016 pollici</td>
					<td>16500</td>
				</tr>
				</table> 
			</td>
			<td>:x:</td>
		</tr>
		<tr>
			<td>cut_out.nc</td>
			<td>Percorso di ritaglio della scheda. </td>
			<td><table>
				<tr>
					<td>Cut Z</td>
					<td>Travel Z</td>
					<td>Feed Rate</td>
					<td>Tool Diam.</td>
					<td>Spindle Speed</td>
				</tr>
				<tr>
					<td>-0.063 pollici</td>
					<td>0.1 pollici</td>
					<td>3.0</td>
					<td>0.0472 pollici</td>
					<td>16500</td>
				</tr>
				</table>
			</td>
			<td>:x:</td>
		</tr>
	</tbody>
</table>

<p align="justify">
Non è disponibile alcun file gcode per i fori, ma se ne avete bisogno potete generalo voi stessi dal progetto flatcam! La fresa "V-shaped" è la migliore per realizzare le piste del circuito. <b>Prestate attenzione</b> al fatto che i percorsi di isolamento (piste) del circuito sono stati generati usando la versione non-specchiata del progetto fritzing. Questo significa che i pin di Arduino devono essere saldati al contrario perché il sistema funzioni a dovere.
</p>

<p align="justify">
I file che iniziano con "AL" contengono gli stessi percorsi descritti in precedenza, ma dopo averli sottoposti al processo di auto livellatura effettuato con <a href="http://www.autoleveller.co.uk/">questo</a> software. 
</p>

<p align="justify">
Se non disponete di una fresa CNC potete realizzare il vostro PCB usando l'acido. Una spiegazione dettagliata su come fare è disponibile <a href="https://www.instructables.com/id/Acid-Etching-Printed-Circuit-Boards/" target="_blank">qui</a>.
</p>

### Assemblare il Tutto

<img src="/imgs/photos/assemble_01.jpg" width="24%" /> <img src="/imgs/photos/assemble_02.jpg" width="24%" /> <img src="/imgs/photos/assemble_03.jpg" width="24%" /> <img src="/imgs/photos/assemble_04.jpg" width="24%" />

<p align="justify">
Una volta che avete preparato il PCB e inciso il case potete procedere con l'assemblaggio!
</p>

### La Cornice Super Cool

<img src="/imgs/photos/frame_01.jpg" width="24%" /> <img src="/imgs/photos/frame_02.jpg" width="24%" /> <img src="/imgs/photos/frame_03.jpg" width="24%" /> <img src="/imgs/photos/frame_04.jpg" width="24%" />

<p align="justify">
Se volete aggiungere una cornice allo schermo LCD per abbellire il case e nascondere il taglio trovate il modello 3D (stl) nella cartella <a href="/case/frame/">/case/frame/</a>. Allo stesso percorso è anche disponbile il codice gcode per incidere la cornice con una fresa "naso a sfera" da 6mm.
</p>

### Caricare il Programma

#### Prerequisiti

- Arduino IDE (testato con la versione 1.8.8) per caricare il programma su Arduino;
- Libreria Liquid Crystal I2C di Arduino. È possibile scaricare la libreria da GitHub o potete trovare la versione specifica che ho testato e usato in questo progetto nella cartella <i>3rdparties</i>.

#### Caricamento

L'implementazione del CO2-HopCannon è disponibile nella cartella <a href="/CO2-HopCannon/">CO2-HopCannon</a>. Dopo aver installato l'IDE di Arduino, è necessario <a href="https://www.arduino.cc/en/guide/libraries" target="_blank">installare le librerie di terze parti</a> e caricare lo sketch.

Se è la prima volta che usi Arduino e non sai come fare puoi leggere <a href="https://www.arduino.cc/en/main/howto" target="_blank">questa</a> guida. 

### Configurazione e Prime Prove

<p align="justify">
Se necessario, è possibile aggiustare i parametri di configurazione modificando opportunamente il file <a href="/CO2-HopCannon/settings.h">settings.h</a>. Di default lo sketch sfrutta la memoria EEPROM di Arduino per memorizzare permanentemente i parametri di configurazione (lunghezza e frequenza dello sparo) tra un'esecuzione e la successiva. 
</p>

<img src="/imgs/usage/usage_01.jpg" width="40%" />

<p align="justify">
Da sinistra a destra i tre pulsanti sono rispettivamente i pulsanti di <i>setup</i>, <i>+</i>, e <i>-</i>. 
</p>

<p align="justify">
Esistono fondamentalmente tre stati per il CO2-HopCannon: 
</p>
<table>
	<tr>
		<td><img src="/imgs/usage/mode_01.jpg" width="100%" /> </td>	
		<td><b>Countdown</b></td> 
		<td>
		<p align="justify">Il display mostra il tempo mancante al prossimo sparo.</p>
		</td>
	</tr>
	<tr>
		<td><img src="/imgs/usage/mode_02.jpg" width="100%" /> </td>	
		<td><b>Settings</b></td>
		<td>
		<p align="justify">Il display mostra il menu di configurazione. Quando il CO2-HopCannon si trova in modalità di configurazione è possibile aggiornare la frequenza e/o la lunghezza di sparo premendo i pulsanti <i>+</i> e/o <i>-</i>. Per entrare in modalità di configurazione o passare dalla configurazione delle frequenza alla configurazione della lunghezza occorre premere e tener premuto il pulsante di <i>setup</i>. Dopo un periodo di inattività il CO2-HopCannon torna automaticamente in modalità <b>Countdown</b>.</p>
		</td>
	</tr>
	<tr>
		<td><img src="/imgs/usage/mode_03.jpg" width="100%" /> </td>	
		<td><b>Shooting</b></td>
		<td>
		<p align="justify">Il display mostra una pistola che spara durante tutto il periodo in cui la valvola della CO2 è aperta.</p>
		</td>
	</tr>
</table>

<p align="justify">
Quando il CO2-HopCannon si trova in modalità <b>Countdown</b> o <b>Settings</b> puoi forzare lo sparo premendo e tenendo premuti contemporaneamente i pulsanti <i>+</i> e <i>-</i> Dopo un periodo di inattività il CO2-HopCannon disattiva automaticamente la retroilluminazione LCD per risparmiare energia. Per riattivare la retroilluminazione LCD è sufficiente premere per qualche secondo uno qualunque dei pulsanti.
</p>

## Donazioni
Se questo progetto ti ha aiutato in qualche modo offrirmi una birra o un caffè :smiley:

[![paypal](https://www.paypalobjects.com/en_US/i/btn/btn_donateCC_LG.gif)](https://paypal.me/FedericoBolelli)
