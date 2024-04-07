# Krmiljenje_el._motorja

Krmiljenje el. motorja:  S tipko b1 vklopimo vrtenje motorja (preko tranzistorja) v DESNO, s tipko b2 pa v LEVO. Smer vrtenja je možno spremeniti le tako, da najprej ustavimo motor s tipko b3. Ukaz za izklop ima prednost pred vklopom. Pogon naj se izklopi in ponovni vklop ni možen, dokler: 1) vgrajen senzor tlaka olja OT v ležajih, da je tlak prenizek (potencimeter!) ALI 2) ko je uporabljeno varnostno stikalo za zasilni izklop (stikalo)

Kosovnica:

- 8x kablov
- 1x 10k upor
- 1x 22k upor
- 1x LED dioda
- 1x svetlobni senzor
- 1x breadboard
- 1x Arduino uno


Vhodi:

| Oznaka v načrtu | Naslov operanda | Vrsta kontakta | Pomen |
| -------- | ------- | -------- | ------- |
| Svetlobni senzor | Svetlobni senzor | Svetlobni senzor | Meri svetlobo in glede na moč svetlobe regulira moč svetlobe lediode |

Izhodi:

| Oznaka v načrtu | Naslov operanda | Aktiven pin | Pomen |
| -------- | ------- | -------- | ------- |
| LED1 | LED | 
