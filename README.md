# Krmiljenje_el._motorja

Projekt_UPN-P

<br>
<br>
<br>

Navodila:

Krmiljenje el. motorja:  S tipko b1 vklopimo vrtenje motorja (preko tranzistorja) v DESNO, s tipko b2 pa v LEVO. Smer vrtenja je možno spremeniti le tako, da najprej ustavimo motor s tipko b3. Ukaz za izklop ima prednost pred vklopom. Pogon naj se izklopi in ponovni vklop ni možen, dokler: 1) vgrajen senzor tlaka olja OT v ležajih, da je tlak prenizek (potencimeter!) ALI 2) ko je uporabljeno varnostno stikalo za zasilni izklop (stikalo)

<br>
<br>
<br>

Kosovnica:

- 8x kablov
- 1x 10k upor
- 1x 22k upor
- 1x LED dioda
- 1x svetlobni senzor
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
| LED1 | LED |  |  |

<br>
<br>
<br>

![slika_vezave](https://github.com/BlaznikRaul/Krmiljenje_el._motorja/assets/123101962/627646cb-945f-455d-ab8a-e8e0d3184ba0)
