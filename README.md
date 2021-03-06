# CarbonTracker

## Introduction
CarbonTracker is a desktop GUI app that quantifies and analyzes CO2 emissions, using databases, by retrieving and computing the environmental impact
of food, transport, and shopping on our everyday lifestyle.

Examples of databases used: OpenFood Facts, Good on You, ... .

An interactive and friendly user interface gathers the data, displays it in graphics, and implements rewards and ranking to boost usability of the app.
After analyzing the user's input data, CarbonTracker provides a personalized feedback proposing specific improvements on their lifestyle.
Another feature of the app is creating a network that connects the app users to generate a healthy competition among individuals.

## Members

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


# External Dependencies
## OCR Dependencies

The OCR module depends on two libraries: Tesseract and Leptonica. For Mac users, we first need to install a package manager (Homebrew) before downloading the libraries.

To install Homebrew, run the following command in the terminal :

    /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"

Once Homebrew is installed, we download Tesseract by running the following command: 
    
    brew install tesseract
    
After Tesseract is installed we run this command to enable optical character recognition on different languages aside from English:

    brew install tesseract-lang
    
Finally, we run this command to install Leptonica (for some users, this library may already be installed as a dependency of Tesseract):

    brew install leptonica
    
Now that the libraries are downloaded, we need to specify their path. To do so:

    Open the project on QtCreator
    Right-click on the project folder
    Select "Add libraries"
    Select "External libraries"
    Add include path and library path of Tesseract (/usr/local/Cellar/Tesseract)
    Add include path and library path of Leptonica (/usr/local/Cellar/Leptonica)
    
This finishes setting the libraries and we can now execute the project.

# Compiling the project
In order for the project to compile properly and all functionalities to run, it is important to specify the "build directory". If the project is being built on QT Creator, then the following steps should be followed to do so:

    Open "CO2_Tracker.pro" on QT Creator
    On the left toolbar, click "Projects"
    Under "Build & Run" select "Build"
    In the window for "General" in "Build Settings", click "Choose" to select a directory path
    Enter the following relative path "../CarbonTracker/CO2_Tracker/resources/build/"
    This will be the specified location where the building will happen (needed for the project to work properly) and where the executable will be 
   

# How to run your project
## Transport_API

  - Requires an account at https://climatiq.io. As soon as you create an account you can get an API key for example ABCDEFGH which you have to write in a txt file as 
“Bearer ABCDEFGH” (without quotations of course). Then you have to copy the path of that file and modify the existing path in the constructor in transport_API.cpp  

## Peer-to-Peer (netclient, netserver):
  - Requires at least Qt 5.15 above (preferably the latest Qt 6.2.2: you can update your Qt by opening MaintenanceTool)
  1. You can test peer-to-peer functionality by first going into /Server/example-QTcpSocket/QTCPClient, and build it;
  2. After building the testing client, you'll find a folder called "build-*", which we will use later;
  3. Go to CarbonTracker, open and run it inside Qt.
  4. Go to /Server/example-QTcpSocket/build*..., open the executable, and you will be able to send message to CarbonTracker (by looking at the console output).

Finally, to run the project as a new user (first time), it is important to corroborate that on the folder "resources", there is no .json file.


