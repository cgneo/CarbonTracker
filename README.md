# CarbonTracker

## Teams

    ### UI Team

    - Andrés Orduña - team leader
    - Dain Jung
    - Jane Peltier
    - Nina Bili Rossi
    - Cyrine Ben Tanfous
    - Steven van Heiningen
    - (Zhihui Li)


    ### Data Team

    - Amine Lamouchi - team leader
    - Marc Saouda
    - Lucas Serog
    - Jade Rakotondradano
    - (Alejandro Christlieb)

    ### Server Team

    - Alexandra-Catalina Negoita - team leader
    - Alejandro Christlieb Picazo
    - Zhihui Li
    - (Amine Lamouchi)


# How to run your project
- Transport_API

  - Requires an account at https://climatiq.io .As soon as you create an account you can get an API key for example ABCDEFGH which you have to write in a txt file as 
“Bearer ABCDEFGH” (without quotations of course). Then you have to copy the path of that file and modify the existing path in the constructor in transport_API.cpp  .


- Peer-to-Peer (netclient, netserver):
  - Requires at least Qt 5.15 above (preferably the latest Qt 6.2.2: you can update your Qt by opening MaintenanceTool)
  1. You can test peer-to-peer functionality by first going into /Server/example-QTcpSocket/QTCPClient, and build it;
  2. After building the testing client, you'll find a folder called "build-*", which we will use later;
  3. Go to CarbonTracker, open and run it inside Qt.
  4. Go to /Server/example-QTcpSocket/build*..., open the executable, and you will be able to send message to CarbonTracker (by looking at the console output).


## Introduction
CarbonTracker is a desktop GUI app that quantifies and analyzes CO2 emissions, using databases, by retrieving and computing the environmental impact
of food, transport, and shopping on our everyday lifestyle.

Examples of databases used: OpenFood Facts, Good on You, ... .

An interactive and friendly user interface gathers the data, displays it in graphics, and implements rewards and ranking to boost usability of the app.
After analyzing the user's input data, CarbonTracker provides a personalized feedback proposing specific improvements on their lifestyle.
Another feature of the app is creating a network that connects the app users to generate a healthy competition among individuals.

##Members

- Alejandro Christlieb Picazo, alexchristlieb, alejandrochristliebpicazo, project leader
- Zhihui Li, cgneo, ZVapp, git leader
- Jade Rakotondradano, jaderakoton, jaderakoton, trello leader
- Amine Lamouchi, amine-lamouchi, aminelamouchi11
- Alexandra-Catalina Negoita, Catalina-13, alexandracatalinanegoita
- Andrés Orduña, andres_ordunya, andresorduna2
- Cyrine Ben Tanfous, GitHub name, cyrinebentanfous1
- Dain Jung, DainjungBX, dainjung3
- Jane Peltier, janepeltier, janepeltier
- Lucas Serog, lserog, lucasserog1
- Marc Saouda, marc-saouda, marcsaouda
- Nina Bili Rossi, nina-bilirossi, ninabilirossi
- Steven van Heiningen, Steven-van-Heiningen, stevenvanheiningen