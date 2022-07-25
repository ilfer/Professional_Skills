# Delta robot

doelstellingen in ruil voor professional skills:

1. [LabVIEW code op CompactRIO zetten (BEHAALD)](#1)
2. [LabVIEW ZMQ](#2)
    - 2.1 [Home via API](#2.1)
    - 2.2 [MOVE (X, Y, Z) via API](#2.2)
3. [Bij opstarten automatisch laten homen (BEHAALD)](#3)

##

#### 1. LabVIEW code op CompactRIO zetten <a name="1"></a>

Om de LabVIEW code niet op de computer maar wel op de CompactRIO te laten werken moeten we de VIs verplaatsen/kopiëren in de project explorer. De VIs die onder 'My computer' staan worden standaard op de computer gedraaid. Om de programma's op de CompactRIO te laten werken kopiëren we de VIs die onder 'My computer' staan naar onder het systeem 'NI-cRIO-9068-198D84E' die we gebruiken.

Wanneer deze stap correct is gedaan en het programma afgespeeld wordt zien we enkel de block diagram waarop er handeling kunnen uitgevoerd worden. De tweede venster (front panel) in LabVIEW wordt verdwenen.

[![explorer.png](https://i.postimg.cc/W14MJZkH/explorer.png)](https://postimg.cc/Vd3Sxd4q)

#### 2. LabVIEW ZMQ <a name="2"></a>
##### 2.1 Home via API <a name="2.1"></a>
##### 2.2 MOVE (X, Y, Z) via API <a name="2.2"></a>

#### 3. Bij opstarten automatisch laten homen <a name="3"></a>

Om een programma autonoom via de CompactRIO af te spelen hebben we een applicatie gegeneerd. Deze applicatie is vergelijkbaar met een EXE. Maar binnen LabVIEW maken we een Real-Time application aan (RTEXE). Dit doen we door met de rechtermuisknop te klikken op 'Build Specifications'. 

[![rtexel.png](https://i.postimg.cc/jqWK2ttT/rtexel.png)](https://postimg.cc/w3dnbK14)

In properties klikken we op 'Source Files' en zetten we de Main onder 'Startup VIs' en de rest van de VIs onder 'Always Included'. Verder kan destination path nagekeken/aangepast worden. Wanneer deze twee hoofdzaken gereed zijn klikken we onderaan op 'Build'.

[![sourcefiles.png](https://i.postimg.cc/4xHBH2nm/sourcefiles.png)](https://postimg.cc/gxdvfDVW)

Hierna klikken we met de rechtermuisknop op 'My Real-Time Application' en klikken we op Deploy. Vervolgens met hetzelfde methode op 'Run as startup'.

[![deploy.png](https://i.postimg.cc/9MsNk345/deploy.png)](https://postimg.cc/YGf34sfb)

Hierop kunnen we de CompactRio herstarten en testen of het applicatie werkt.

<br />

*zomervakantie: 18/07, 20/07, 22/07 => +- 15u => samenwerking met Cas Truyers*
