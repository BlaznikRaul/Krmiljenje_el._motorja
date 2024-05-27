# Krmiljenje elektro-motorja

Projekt UPN-P

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
| R14 | Potenciometer | O, potencimeter | Poteciometer predstavlja senzor tlaka OT v ležajih. Ko je tlak (vrednost potenciometra) manjši od 200 se motor (LED diode) izklopi  |
| S8 | Stikalo | menjalno stikalo | Zasilni izklop |
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

![slika_vezja](https://github.com/BlaznikRaul/Krmiljenje_el._motorja/assets/123101962/d691db58-45a7-4ba8-96cb-408c0f7235e8)
![slika_vezja2](https://github.com/BlaznikRaul/Krmiljenje_el._motorja/assets/123101962/0d312ee9-71a2-4f2a-b46d-57aaaf9c4779)
![slika_sheme](https://github.com/BlaznikRaul/Krmiljenje_el._motorja/assets/123101962/65883557-72a4-4e3d-ad38-44ff3b316ca9)



https://github.com/BlaznikRaul/Krmiljenje_el._motorja/assets/123101962/c03ec2a3-2faa-4c07-972e-550b74fe8b2c

<br>
<br>
KOMENTAR:
Delovanje nama je bilo občasno oteženo, ker se tipke niso pravilno priključile v breadboard. Prav tako tudi nekateri kabli niso delovali. Meniva, da bi za izboljšavo projekta morala dodati še eno LED diodo, ki bi nakazovala izklop drugih dveh LED diod.
Poteciometer predstavlja senzor tlaka OT v ležajih na pinu A0.
Stikalo za zasilni izklop je na pinu 4.
Tipka za spremembo vrtenja motorja (prižig desne LED diode) je an pinu 1.
Tipka za spremembo vrtenja motorja (prižig leve LED diode) je an pinu 2.
Tipka za izklop motorja je na pinu 3.


