# Steven van Heiningen 
This week started with the meeting on Monday during which we decided the teams for the UI team. I will be working with Andres on the profile set-up. For this I worked on tutorials with Andres in which we learned the basics of building widget applications in Qt Creator.
Next week I will continue following the tutorials and I plan on creating a clear vision of the lay-out of the profile-setup. That way, we can focus on the parts of Qt that we specifically need.


# Cyrine Ben Tanfous 
This week, we first started with Monday’s meeting, during which we, the UI team, discussed the general output that we wanted to have for our user’s interface. Hence, we ended up divided in 3 subgroups of 2 people each. Dain and I, are mainly focusing on the general design of the interface, dividing each section, and giving it the different features, to which will be added the work of the other groups.
To this purpose, we looked up on the internet on different method to get the design that we wanted, one of the possibilities that we discussed was Figma, which is an app that allows us to go from our own drawings and convert them to the website we want. On the other hand, I also went deeper in the use of Qt creator trying to generate a general draft of what we wanted to implement. I tried to understand more the different functionalities of Qtwidget, creating a finder of words from a resource file. Hence, I plan on using what I understood from this tutorial to create a more concrete draft of the general user interface with Dain next week.

# Lucas Serog
This week Jade and I found some pieces to the project. Together, we found how to use .json files representing grocery products in order to track the carbon footprint of each item. Now we need to figure out how to extract the carbon footprint of any item using its barcode, in c++. I am now currently working on creating classes for the different types of objects we have in our code such as food, receipts, etc. I hope that we can finish creating the classes by the end of this week as well as implementing the c++ aspect of getting carbon footprints.

# Marc Saouda
This week, after attending the data meetings, I tried on multiple attempts to try and embed Python in our cpp code but failed. I tried to do it using QDesktopServices and Python.h. I also started working on the transport.cpp and transport.hpp files and have done a big part of it. Next week, I'll finalize the transport classes and work even more on Python.h because I think it's the best solution to access the database we want to access because they have a Python library.

# Nina Bili Rossi
This week started off with a GUI meeting. We decided on a structure for the team. I am now in the graphs subbranch with Jane. We talked about potential graph structures (pie charts, histograms, ...). I took some time this week to figure out how QtWidget works and how to use different useful libraries, as well as watching and reading tutorials on graphs. I used QtPaint to create my first pie chart (created a pieChart class). I want to get comfortable with more chart/graph types next week and ultimately manage to link file with our data (in the next few weeks).

# Jade Rakotondradano
This week we set new targets whilst meetting with the data team. With @lucasserog1 we looked at how we could use .json files to retrieve the information from openfoodfacts. We found a link that would work for any product given barcode. What we need to do now is to see how we could implement this in c++. We found a jsoncpp library which we will be able to use to read .json files. Otherwise, we have another option which remains to use python scripts on which other team members are working. On top of this, I worked with the server team to create the plan for the classes. With @marcsaouda, we saw how we would implement different attributes and objects to the transport and food class. Next week I will be working on completing the classes for receipt and footprint (see class architecture draft). I continue to work on the .json files and will attempt to do a test read.

# Alejandro Christlieb Picazo
This week I worked with the sub-leaders of the team to map out the class archictecture of the project, defining the main attributes and brainstorming the methods that eqch class could have. I also did a simple UML diagram where this is stored, although next week we will finalize some of the details for each class. I also researched more about Qmake and edited the Qmake file to include the different Qt libraries the project will need. Finally, I worked with Marc on writing a C++ script to embed a python interpreter to the program, but we were not able to import the library to the project. Next week I will be working more on this last thing and helping everyone installed the necessary libraries.

# Andrés Orduña
This week we decided the division of the UI team. I will be the sub-leader of the team and working precisely with Steven in the profile setup and imputing data. We will be in communication with the other teams to link the UI with the back end (data analysis mainly). We decided on the general structure and design of the desktop application.
I followed several tutorials of QT and specifically learned how to create several windows, link them to a main window with a menu bar. I learned and tested the basic properties of the basic widgets and how to connect them between them with their respective functions and slots. For that I created a draft in QT on how the GUI would look like.
Next week I want to look more into detail in the profile set up with a tutorial that I have already selected and advance in building the display of our GUI.

# Dain Jung
This week, after the UI team meeting, I decided to work on general UI to make the layout with @cyrinebentanfous1 . We decided on how the general layout will be. It is going to be divided into four main parts: profile section, info/challenges/tips section, graph section and network section where you can see other friend's activity on Carbon Tracker. I also looked into how to use Figma to have different design demos for the theme.
Next week, I will have different demos of design for the theme, then make the general layout (dividing the section) using QT.


# Jane Peltier
This week we had a meeting with the UI team to determine the three subteams in UI. I am thus in the graphics subteam and am in charge of presenting results with graphs. Therefore this week I learned how to create pie charts and learned the basic features of Opengl which allows me to create more animated and interactive graphic designs.
Next week I plan on continuing to create graphs other than pie charts (maybe bar charts and line graphs) so that I extend the variety of ways to present the results.


# Alexandra Catalina Negoita
This week, I worked on the general design of the classes and their relationships, and then, I implemented the User class with different methods like set_username, set_name, set_birthday, set_country, set_email, set_footprint, set_friends, and set_seeds. Also, I created the destructor that deletes the information of the users once they want to delete their account. As compared to the design of the classes that we posted on Git, I changed the "Age" method and I preferred to use the birthday of the user instead, because, like this, the user's age could be automatically changed every year though computation. If I used the age as method, then, the program would not know when to update the user's age.
Next week, along with the other members of the Server team, we will make the real server. We will open a port and make sure that the real server can be linked to the program. I will update our txt document to be a secure SQL database and I will do some research into how we can read and write from the database.


# Zhihui Li
This week, I implemented server session_management (Session class), which include several methods such as addNewSession(), removeSession(sessionID), checkSessionExist(sessionID), removeAllSession(), displayAllSession(). The sessionID is a 64-character long random string. This is based on the open-source project https://github.com/varshneydevansh/Qchat.
As git leader, I also helped created different branches for people to work on (so that the main branch stays clean).
To test my program (which is under Server-Zhihui branch), you run my project under Server/server folder, which will bring a GUI, and then you can click the button: "Start", which should give a 0 (it's a boolean false converted to string, because when clicking start, it will first create instance: Session* a = new Session(); and then test if addNewSession() works: string tempID = a->addNewSession(); and then I test if removeSession() works by: a->removeSession(tempID); at this point, if I call checkSessionExist(), it should return False because I already removed it: QString line = QString::fromUtf8( to_string(a->checkSessionExist(tempID)) ).trimmed(); finally I display this to the GUI: addMessage(line);)
Next week, I will along with the other members of the Server team, we will make the real server. We will open a port and make sure that the real server can be linked to the program. I will update our txt document to be a secure SQL database and I will do some research into how we can read and write from the database.
