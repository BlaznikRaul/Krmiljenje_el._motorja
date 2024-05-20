# Krmiljenje_el._motorja

Projekt_UPN-P

<br>

Navodila:

Krmiljenje el. motorja:  S tipko b1 vklopimo vrtenje motorja (preko tranzistorja) v DESNO, s tipko b2 pa v LEVO. Smer vrtenja je možno spremeniti le tako, da najprej ustavimo motor s tipko b3. Ukaz za izklop ima prednost pred vklopom. Pogon naj se izklopi in ponovni vklop ni možen, dokler: 1) vgrajen senzor tlaka olja OT v ležajih, da je tlak prenizek (potencimeter!) ALI 2) ko je uporabljeno varnostno stikalo za zasilni izklop (stikalo)

<br>
<br>
<br>

Kosovnica:

- 19x kabel
- 3x tipka
- 2x tranzistor
- 1x potenciometer
- 6x 10k upor
- 2x LED dioda
- 1x stikalo
- 1x breadboard
- 1x Arduino uno
  
<br>
<br>
<br>

Vhodi:

| Oznaka v načrtu | Naslov operanda | Vrsta kontakta | Pomen |
| -------- | ------- | -------- | ------- |
| SS | Potenciometer | O, potencimeter | Poteciometer predstavlja senzor tlaka OT v ležajih. Ko je tlak (vrednost potenciometra) manjši od 200 se motor (LED diode) izklopi  |
| SS | Stikalo | menjalno stikalo | Zasilni izklop |
| S5 | Tipka | O, tipka | Sprememba vrtenja motorja(prižig desne LED diode) |
| S6 | Tipka | O, tipka | Sprememba vrtenja motorja(prižig leve LED diode) |
| S7 | Tipka | O, tipka | Izklopi motor(izklopi obe LED diode), in s tem omogoči spremembo vrtenja motorja(prižig druge LED diode) |

<br>
<br>
<br>

Izhodi:

| Oznaka v načrtu | Naslov operanda | Aktiven pin | Pomen |
| -------- | ------- | -------- | ------- |
| LED1 | LED | 12 | Predstavlja smer vrtenja motorja v levo smer |
| LED2 | LED | 13 | Predstavlja smer vrtenja motorja v desno smer |

<br>
<br>
<br>

