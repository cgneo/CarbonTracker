# CarbonTracker

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
- Amine Lamouchi, amine-lamouchi, aminelamouchi11, data team leader
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
