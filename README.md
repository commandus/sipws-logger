SIPWS logger shared library example
===================================

Example how to write shared library (or Windows DLL) for [simple all-in-one SIP server UDP, TCP, WS (websocket) transport] (https://github.com/commandus/sipws).

Every SIP packet sent by server can be logged by external function in the database or other persistent storage.

For instance, external function can store text messages in the database.

External function resides in the .so or .dll in the directory of sipws.

This sample just print messages to the stderr.

Build
-----

./configure  
make  

### Building Windows

Open logger.vcxproj.

Dependencies
------------

* [LoggerFunc.h]	(https://github.com/commandus/sipws)  

