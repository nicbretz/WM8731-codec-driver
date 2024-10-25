# WM8731-audio codec-driver

This is my codec for the WM8731, written for an embedded project. Anyone who spent some time with this codec and the datasheet is aware of the idiosyncrasies of its register mapping. 

Drivers for this codec can be found online but I just couldn't get them to work with my board so I assumed those drivers were potentially somehow buggy. What was actually buggy was the brand new board, but I didn't know that, so I wrote this driver from scratch. Eventually I found out about the confusing hardware design and I gave up on that board. 

I experimented a lot while writing the driver and probing with the scope anything I could on that board. As it so often happens, we learn a lot from things that don't work. 
