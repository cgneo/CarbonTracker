# Jade Rakotondradano
This week I managed to complete the consumption class which will be used to complete the link between the API and the graphs. Due to some technical problems (issues with QT), we could not link together the classes and the graphs, however, will now start doing so. This week I was also able to test certain classes. In particular, consumption, base consumption and object classes. I fixed certain issues and can now begin using these classes to further the project.

# Marc Salida Saouda
This week, I was able to accomplish two crucial leaps for our project. I finally understood how signals and slots work and created a class to be able to send and handles queries to the API while having a QEventLoop which will prevent us from having callbacks messing up the general code. This class will be also used for the food API with modifications to it of course. Now we can very easily merge the UI with the data because I was able to get rid of the annoying feature in the old code where we connected the query to a button and we didn't know how to integrate it in the UI. Also, I fixed the transport.cpp and transport.h files to better adapt them to the Object class and to the transport_api class. Transport is now ready to merge with other branches in the project.

Next week, I will be enjoying Christmas :p as well as helping other members of the team with their tasks and helping with the merging process.

# Zhihui Li
This week I implemented the console version of the client using QTcp.
Right now, everything is working as intended, and I have been working closely with the UI team and orchestrate the whole user experience.
The sequence of events is first: instantantiate the server <netserver> ⇒ server listens at 8080 port, the server is responsible for receiving information from other users ⇒ instantantiate the client <netclient> ⇒ the client is reponsible for talking to some other users.

As Git leader, I provided support on merging files while maintaining every member's commit history.
