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
| SS | Svetlobni senzor | svetlobni senzor | Meri svetlobo in glede na moč svetlobe regulira moč svetlobe lediode |

<br>
<br>
<br>

Izhodi:

| Oznaka v načrtu | Naslov operanda | Aktiven pin | Pomen |
| -------- | ------- | -------- | ------- |
| LED1 | LED | 8 | LEDioda gori z močjo, ki je odvisna od svetlobnega senzorja |

<br>
<br>
<br>

