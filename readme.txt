1) download gsoap2.8 from http://www.cs.fsu.edu/~engelen/soap.html
2) install gsoap2.8 (assume ${gsoap_home} is your gsoap home directory)
3) you can download the enrima-ws-gsoap-client example:
   if you installed git: 
   git clone git//github.com/h-t-ren/enrima-ws-gsoap-client.git
   if you haven't installed git:
   go to the webpage  https://github.com/h-t-ren/enrima-ws-gsoap-client and click "zip" button to download 
4) copy gsoap files to your project:
   cp  ${gsoap_home}/gsoap/typemap.dat enrima-ws-gsoap-client/src
   cp  ${gsoap_home}/gsoap/stdsoap2.h enrima-ws-gsoap-client/src
   cp  ${gsoap_home}/gsoap/stdsoap2.cpp enrima-ws-gsoap-client/src
5) generate header file:
   cd enrima-ws-gsoap-client/src
   wsdl2h -o enrima.h -t typemap.dat  http://www.ime.iiasa.ac.at/enrima_ws_tst1/enrima.wsdl  
6) generate cpp files:
   soapcpp2  -C -i  enrima.h -I ${gsoap_home}/gsoap/import/     