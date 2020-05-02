# Boost Your Dry Hopping with CO2 <a name="eng" href="#ita"><img src="/imgs/assets/flag-ita.png" height="30" width="30"/></a>
[![Donate](https://img.shields.io/badge/Donate-PayPal-green.svg)](https://paypal.me/FedericoBolelli) 
[![Beer](https://img.shields.io/badge/made%20with-%F0%9F%8D%BA%20beer-yellow)](https://prittt.github.io/pages/beer)

<img align="right" width="50%" src="/imgs/circuit.png" >

<p align="justify">
I have used the classic hop bags for years, but the result was not what I hoped for: I could not get the explosiveness of the hop I wanted. With the new conical trunk fermenter I tried to increase the effectiveness of the process by leaving the hop free. Result? Worse than before! Hops tend to pack on the bottom of the fermenter and the amount of aromas it releases is ridiculous. This CO2-HopCannon project creates an automatic system capable of moving the hops inside the fermenter during dry hopping, so as to maximize the yield of the hops.
</p>

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
			<td>Male/Female PINs</td>
			<td></td>
			<td><a href="https://it.aliexpress.com/item/4000096249321.html?spm=a2g0o.productlist.0.0.6b15309aepL3hx&algo_pvid=eea3be9a-8bcf-4ccc-ae7d-1c7f33251343&algo_expid=eea3be9a-8bcf-4ccc-ae7d-1c7f33251343-10&btsid=0ab50f6215883505235385007efdd3&ws_ab_test=searchweb0_0,searchweb201602_,searchweb201603_">AliExpress (Male)</a> <br/>
			<a href="https://it.aliexpress.com/item/4000096276148.html?spm=a2g0o.productlist.0.0.7a3b570bPoAZYM&algo_pvid=53a06124-49cc-427b-9f04-bdd3a25efae1&algo_expid=53a06124-49cc-427b-9f04-bdd3a25efae1-11&btsid=0ab50f0815883528498925959e75c8&ws_ab_test=searchweb0_0,searchweb201602_,searchweb201603_">AliExpress (Female)</a>
			</td>
		</tr>
	</tbody>
</table>

## How to Reproduce the CO2-HopCannon

### Prepare your Case

You have to drill and cut your case for buttons, valve, LCD, and power switch. The drilling models are available in the <a href="/case_holes.pdf">case_holes.pdf</a> pdf file, but make sure they match the components you purchased. When this is not the case you can change the models using the PowerPoint file <a href="/case_holes.pptx">case_holes.pptx</a>.


<img src="/photos/case_01.jpg" width="20%" /> <img src="/photos/case_02.jpg" width="20%" /> <img src="/photos/case_03.jpg" width="20%" /> <img src="/photos/case_04.jpg" width="20%" />

### Print the PCB

<img src="/photos/pcb_01.png" width="50%" /> <img src="/photos/pcb_02.png" width="50%" /> <img src="/photos/pcb_03.png" width="50%" /> <img src="/photos/pcb_04.png" width="50%" />

### Assemble Everything

<img src="/photos/assemble_01.png" width="50%" /> <img src="/photos/assemble_02.png" width="50%" /> <img src="/photos/assemble_03.png" width="50%" /> <img src="/photos/assemble_04.png" width="50%" />

### Load the Program

#### Requirements

- Arduino IDE (tested with version 1.8.8) to load the program into Arduino's memory;
- Liquid Crystal I2C Arduino library. You can download the last version from <a href=""></a> or you can find the specific version I've tested and used in the <i>3rdparties</i> folder of this project.

The CO2-HopCannon implementation is available in the <i>CO2-HopCannon</i> folder. After installing the Arduino IDE, you have to add the 3rdparty library and ...


### Configure and Test


[![paypal](https://www.paypalobjects.com/en_US/i/btn/btn_donateCC_LG.gif)](https://paypal.me/FedericoBolelli)

# Potenzia il tuo Dry Hopping con la CO2 <a name="ita" href="#eng"><img src="/imgs/assets/flag-eng.png" height="30" width="30"/></a>
[![Donate](https://img.shields.io/badge/Donate-PayPal-green.svg)](https://paypal.me/FedericoBolelli)
[![Beer](https://img.shields.io/badge/made%20with-%F0%9F%8D%BA%20beer-yellow)](https://prittt.github.io/pages/beer)

<p align="justify">
Ho utilizzato le classiche hop bag per anni, ma i risultato non era quello sperato: non riuscivo ad ottenere l'esplosività del luppolo che desideravo. Con il nuovo fermentatore a tronco conico ho provato ad aumentare l'efficacia del processo lasciando il lupppolo libero. Risultato? Peggio di prima! Il luppolo tende ad impaccarsi sul fondo del fermentatore e la quantità di aromi che rilascia è ridicola. Questo progetto, CO2-HopCannon, realizzaza un sistema automatico in grado di movimentare il luppolo all'interno del fermentatore durante il dry hopping, così da aumentare al massimo la resa del luppolo. 
</p>

[![paypal](https://www.paypalobjects.com/en_US/i/btn/btn_donateCC_LG.gif)](https://paypal.me/FedericoBolelli)
