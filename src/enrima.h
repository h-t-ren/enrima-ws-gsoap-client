// Reminder: Modify typemap.dat to customize the header file generated by wsdl2h
/* enrima.h
   Generated by wsdl2h 2.8.3 from http://www.ime.iiasa.ac.at/enrima_ws_tst1/enrima.wsdl and typemap.dat
   2011-12-25 11:12:12 GMT

   DO NOT INCLUDE THIS FILE DIRECTLY INTO YOUR PROJECT BUILDS
   USE THE soapcpp2-GENERATED SOURCE CODE FILES FOR YOUR PROJECT BUILDS

   gSOAP XML Web services tools.
   Copyright (C) 2001-2010 Robert van Engelen, Genivia Inc. All Rights Reserved.
   Part of this software is released under one of the following licenses:
   GPL or Genivia's license for commercial use.
*/

/** @page page_notes Usage Notes

NOTE:

 - Run soapcpp2 on enrima.h to generate the SOAP/XML processing logic.
   Use soapcpp2 option -I to specify paths for #import
   To build with STL, 'stlvector.h' is imported from 'import' dir in package.
   Use soapcpp2 option -i to generate improved proxy and server classes.
 - Use wsdl2h options -c and -s to generate pure C code or C++ code without STL.
 - Use 'typemap.dat' to control namespace bindings and type mappings.
   It is strongly recommended to customize the names of the namespace prefixes
   generated by wsdl2h. To do so, modify the prefix bindings in the Namespaces
   section below and add the modified lines to 'typemap.dat' to rerun wsdl2h.
 - Use Doxygen (www.doxygen.org) on this file to generate documentation.
 - Use wsdl2h options -nname and -Nname to globally rename the prefix 'ns'.
 - Use wsdl2h option -d to enable DOM support for xsd:anyType.
 - Use wsdl2h option -g to auto-generate readers and writers for root elements.
 - Struct/class members serialized as XML attributes are annotated with a '@'.
 - Struct/class members that have a special role are annotated with a '$'.

WARNING:

   DO NOT INCLUDE THIS FILE DIRECTLY INTO YOUR PROJECT BUILDS.
   USE THE SOURCE CODE FILES GENERATED BY soapcpp2 FOR YOUR PROJECT BUILDS:
   THE soapStub.h FILE CONTAINS THIS CONTENT WITHOUT ANNOTATIONS.

LICENSE:

@verbatim
--------------------------------------------------------------------------------
gSOAP XML Web services tools
Copyright (C) 2000-2011, Robert van Engelen, Genivia Inc. All Rights Reserved.

This software is released under one of the following two licenses:
1) GPL or 2) Genivia's license for commercial use.
--------------------------------------------------------------------------------
1) GPL license.

This program is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation; either version 2 of the License, or (at your option) any later
version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program; if not, write to the Free Software Foundation, Inc., 59 Temple
Place, Suite 330, Boston, MA 02111-1307 USA

Author contact information:
engelen@genivia.com / engelen@acm.org

This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
2) A commercial-use license is available from Genivia, Inc., contact@genivia.com
--------------------------------------------------------------------------------
@endverbatim

*/


//gsoapopt w

/******************************************************************************\
 *                                                                            *
 * Definitions                                                                *
 *   http://ime.iiasa.ac.at/enrima/example                                    *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Import                                                                     *
 *                                                                            *
\******************************************************************************/


// STL vector containers (use option -s to remove STL dependency)
#import "stlvector.h"

/******************************************************************************\
 *                                                                            *
 * Schema Namespaces                                                          *
 *                                                                            *
\******************************************************************************/


/* NOTE:

It is strongly recommended to customize the names of the namespace prefixes
generated by wsdl2h. To do so, modify the prefix bindings below and add the
modified lines to typemap.dat to rerun wsdl2h:

ns1 = "http://ime.iiasa.ac.at/enrima/example"
ns2 = "http://www.ime.iiasa.ac.at/enrima/model/example"

*/

#define SOAP_NAMESPACE_OF_ns2	"http://www.ime.iiasa.ac.at/enrima/model/example"
//gsoap ns2   schema namespace:	http://www.ime.iiasa.ac.at/enrima/model/example
//gsoap ns2   schema form:	unqualified

/******************************************************************************\
 *                                                                            *
 * Built-in Schema Types and Top-Level Elements and Attributes                *
 *                                                                            *
\******************************************************************************/


/// Primitive built-in type "xs:date"
typedef std::string xsd__date;

/******************************************************************************\
 *                                                                            *
 * Forward Declarations                                                       *
 *                                                                            *
\******************************************************************************/



//  Forward declaration of class ns2__model.
class ns2__model;

//  Forward declaration of class ns2__modelRev.
class ns2__modelRev;

//  Forward declaration of class ns2__set.
class ns2__set;

//  Forward declaration of class ns2__entity.
class ns2__entity;

//  Forward declaration of class ns2__iteratorContainer.
class ns2__iteratorContainer;

//  Forward declaration of class ns2__user.
class ns2__user;

//  Forward declaration of class ns2__auditable.
class ns2__auditable;

/// Top-level root element "http://www.ime.iiasa.ac.at/enrima/model/example":getModelListRequest.
/// Note: use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

//  Forward declaration of class _ns2__getModelListResponse.
class _ns2__getModelListResponse;

//  Forward declaration of class _ns2__getModelDescriptionRequest.
class _ns2__getModelDescriptionRequest;

//  Forward declaration of class _ns2__getModelDescriptionResponse.
class _ns2__getModelDescriptionResponse;

//  Forward declaration of class _ns2__saveModelDescriptionRequest.
class _ns2__saveModelDescriptionRequest;

//  Forward declaration of class _ns2__saveModelDescriptionResponse.
class _ns2__saveModelDescriptionResponse;

/******************************************************************************\
 *                                                                            *
 * Schema Types and Top-Level Elements and Attributes                         *
 *   http://www.ime.iiasa.ac.at/enrima/model/example                          *
 *                                                                            *
\******************************************************************************/


/// "http://www.ime.iiasa.ac.at/enrima/model/example":status is a simpleType restriction of xs:string.
/// Note: enum values are prefixed with 'ns2__status' to avoid name clashes, please use wsdl2h option -e to omit this prefix
enum ns2__status
{
	ns2__status__EDIT,	///< xs:string value="EDIT"
	ns2__status__TEST,	///< xs:string value="TEST"
	ns2__status__COMMIT,	///< xs:string value="COMMIT"
};

/// "http://www.ime.iiasa.ac.at/enrima/model/example":setType is a simpleType restriction of xs:string.
/// Note: enum values are prefixed with 'ns2__setType' to avoid name clashes, please use wsdl2h option -e to omit this prefix
enum ns2__setType
{
	ns2__setType__COLLECTION,	///< xs:string value="COLLECTION"
	ns2__setType__SEQUENCE,	///< xs:string value="SEQUENCE"
};

/// "http://www.ime.iiasa.ac.at/enrima/model/example":entityRole is a simpleType restriction of xs:string.
/// Note: enum values are prefixed with 'ns2__entityRole' to avoid name clashes, please use wsdl2h option -e to omit this prefix
enum ns2__entityRole
{
	ns2__entityRole__CONSTANT,	///< xs:string value="CONSTANT"
	ns2__entityRole__PARAMETER,	///< xs:string value="PARAMETER"
	ns2__entityRole__DECISION_USCOREVAR,	///< xs:string value="DECISION_VAR"
	ns2__entityRole__EXTERNAL_USCOREDECISION_USCOREVAR,	///< xs:string value="EXTERNAL_DECISION_VAR"
	ns2__entityRole__OUTCOME_USCOREVAR,	///< xs:string value="OUTCOME_VAR"
	ns2__entityRole__AUXILIARY_USCOREVAR,	///< xs:string value="AUXILIARY_VAR"
	ns2__entityRole__ASSIGNMENT,	///< xs:string value="ASSIGNMENT"
	ns2__entityRole__CONSTRAINT,	///< xs:string value="CONSTRAINT"
};

/// "http://www.ime.iiasa.ac.at/enrima/model/example":mathType is a simpleType restriction of xs:string.
/// Note: enum values are prefixed with 'ns2__mathType' to avoid name clashes, please use wsdl2h option -e to omit this prefix
enum ns2__mathType
{
	ns2__mathType__INTEGER,	///< xs:string value="INTEGER"
	ns2__mathType__BINARY,	///< xs:string value="BINARY"
	ns2__mathType__REAL,	///< xs:string value="REAL"
};

/******************************************************************************\
 *                                                                            *
 * Schema Complex Types and Top-Level Elements                                *
 *   http://www.ime.iiasa.ac.at/enrima/model/example                          *
 *                                                                            *
\******************************************************************************/


/// "http://www.ime.iiasa.ac.at/enrima/model/example":model is a complexType.
class ns2__model
{ public:
/// Element id of type xs:int.
    int                                  id                             1;	///< Required element.
/// Element name of type xs:string.
    std::string                          name                           1;	///< Required element.
/// Element version of type xs:string.
    std::string                          version                        1;	///< Required element.
/// Element description of type xs:string.
    std::string                          description                    1;	///< Required element.
/// Element note of type xs:string.
    std::string                          note                           1;	///< Required element.
/// Element auditable of type "http://www.ime.iiasa.ac.at/enrima/model/example":auditable.
    ns2__auditable*                      auditable                      1;	///< Required element.
/// Vector of ns2__modelRev* with length 1..unbounded
    std::vector<ns2__modelRev*         > revision                       1;
/// A handle to the soap struct that manages this instance (automatically set)
    struct soap                         *soap                          ;
};

/// "http://www.ime.iiasa.ac.at/enrima/model/example":modelRev is a complexType.
class ns2__modelRev
{ public:
/// Element id of type xs:int.
    int                                  id                             1;	///< Required element.
/// Element idModel of type xs:int.
    int                                  idModel                        1;	///< Required element.
/// Element revNo of type xs:int.
    int                                  revNo                          1;	///< Required element.
/// Element description of type xs:string.
    std::string                          description                    1;	///< Required element.
/// Element note of type xs:string.
    std::string                          note                           1;	///< Required element.
/// Element auditable of type "http://www.ime.iiasa.ac.at/enrima/model/example":auditable.
    ns2__auditable*                      auditable                      1;	///< Required element.
/// Element status of type "http://www.ime.iiasa.ac.at/enrima/model/example":status.
    enum ns2__status                     status                         1;	///< Required element.
/// Vector of ns2__set* with length 1..unbounded
    std::vector<ns2__set*              > set                            1;
/// Vector of ns2__entity* with length 1..unbounded
    std::vector<ns2__entity*           > entity                         1;
/// A handle to the soap struct that manages this instance (automatically set)
    struct soap                         *soap                          ;
};

/// "http://www.ime.iiasa.ac.at/enrima/model/example":set is a complexType.
class ns2__set
{ public:
/// Element id of type xs:int.
    int                                  id                             1;	///< Required element.
/// Element parentSetId of type xs:int.
    int                                  parentSetId                    1;	///< Required element.
/// Element label of type xs:string.
    std::string                          label                          1;	///< Required element.
/// Element description of type xs:string.
    std::string                          description                    1;	///< Required element.
/// Element note of type xs:string.
    std::string                          note                           1;	///< Required element.
/// Element type of type "http://www.ime.iiasa.ac.at/enrima/model/example":setType.
    enum ns2__setType                    type                           1;	///< Required element.
/// Element iteratorContainer of type "http://www.ime.iiasa.ac.at/enrima/model/example":iteratorContainer.
    ns2__iteratorContainer*              iteratorContainer              1;	///< Required element.
/// A handle to the soap struct that manages this instance (automatically set)
    struct soap                         *soap                          ;
};

/// "http://www.ime.iiasa.ac.at/enrima/model/example":entity is a complexType.
class ns2__entity
{ public:
/// Element id of type xs:int.
    int                                  id                             1;	///< Required element.
/// Element label of type xs:string.
    std::string                          label                          1;	///< Required element.
/// Element description of type xs:string.
    std::string                          description                    1;	///< Required element.
/// Element note of type xs:string.
    std::string                          note                           1;	///< Required element.
/// Element constantValue of type xs:double.
    double                               constantValue                  1;	///< Required element.
/// Element iteratorContainer of type "http://www.ime.iiasa.ac.at/enrima/model/example":iteratorContainer.
    ns2__iteratorContainer*              iteratorContainer              1;	///< Required element.
/// Element role of type "http://www.ime.iiasa.ac.at/enrima/model/example":entityRole.
    enum ns2__entityRole                 role                           1;	///< Required element.
/// Element mathType of type "http://www.ime.iiasa.ac.at/enrima/model/example":mathType.
    enum ns2__mathType                   mathType                       1;	///< Required element.
/// Element unit of type xs:string.
    std::string                          unit                           1;	///< Required element.
/// Element formula of type xs:string.
    std::string                          formula                        1;	///< Required element.
/// A handle to the soap struct that manages this instance (automatically set)
    struct soap                         *soap                          ;
};

/// "http://www.ime.iiasa.ac.at/enrima/model/example":iteratorContainer is a complexType.
class ns2__iteratorContainer
{ public:
/// Vector of int with length 1..unbounded
    std::vector<int                    > idSet                          1;
/// A handle to the soap struct that manages this instance (automatically set)
    struct soap                         *soap                          ;
};

/// "http://www.ime.iiasa.ac.at/enrima/model/example":user is a complexType.
class ns2__user
{ public:
/// Element id of type xs:int.
    int                                  id                             1;	///< Required element.
/// Element login of type xs:string.
    std::string                          login                          1;	///< Required element.
/// A handle to the soap struct that manages this instance (automatically set)
    struct soap                         *soap                          ;
};

/// "http://www.ime.iiasa.ac.at/enrima/model/example":auditable is a complexType.
class ns2__auditable
{ public:
/// Element creationDate of type xs:date.
    xsd__date                            creationDate                   1;	///< Required element.
/// Element createdBy of type "http://www.ime.iiasa.ac.at/enrima/model/example":user.
    ns2__user*                           createdBy                      1;	///< Required element.
/// Element modificationDate of type xs:date.
    xsd__date                            modificationDate               1;	///< Required element.
/// Element modifieddBy of type "http://www.ime.iiasa.ac.at/enrima/model/example":user.
    ns2__user*                           modifieddBy                    1;	///< Required element.
/// A handle to the soap struct that manages this instance (automatically set)
    struct soap                         *soap                          ;
};


/// Top-level root element "http://www.ime.iiasa.ac.at/enrima/model/example":getModelListResponse

/// "http://www.ime.iiasa.ac.at/enrima/model/example":getModelListResponse is a complexType.
class _ns2__getModelListResponse
{ public:
/// Vector of ns2__model* with length 1..unbounded
    std::vector<ns2__model*            > model                          1;
/// A handle to the soap struct that manages this instance (automatically set)
    struct soap                         *soap                          ;
};


/// Top-level root element "http://www.ime.iiasa.ac.at/enrima/model/example":getModelDescriptionRequest

/// "http://www.ime.iiasa.ac.at/enrima/model/example":getModelDescriptionRequest is a complexType.
class _ns2__getModelDescriptionRequest
{ public:
/// Element idModel of type xs:int.
    int                                  idModel                        1;	///< Required element.
/// A handle to the soap struct that manages this instance (automatically set)
    struct soap                         *soap                          ;
};


/// Top-level root element "http://www.ime.iiasa.ac.at/enrima/model/example":getModelDescriptionResponse

/// "http://www.ime.iiasa.ac.at/enrima/model/example":getModelDescriptionResponse is a complexType.
class _ns2__getModelDescriptionResponse
{ public:
/// Element model of type "http://www.ime.iiasa.ac.at/enrima/model/example":model.
    ns2__model*                          model                          0;	///< Optional element.
/// A handle to the soap struct that manages this instance (automatically set)
    struct soap                         *soap                          ;
};


/// Top-level root element "http://www.ime.iiasa.ac.at/enrima/model/example":saveModelDescriptionRequest

/// "http://www.ime.iiasa.ac.at/enrima/model/example":saveModelDescriptionRequest is a complexType.
class _ns2__saveModelDescriptionRequest
{ public:
/// Element model of type "http://www.ime.iiasa.ac.at/enrima/model/example":model.
    ns2__model*                          model                          1;	///< Required element.
/// A handle to the soap struct that manages this instance (automatically set)
    struct soap                         *soap                          ;
};


/// Top-level root element "http://www.ime.iiasa.ac.at/enrima/model/example":saveModelDescriptionResponse

/// "http://www.ime.iiasa.ac.at/enrima/model/example":saveModelDescriptionResponse is a complexType.
class _ns2__saveModelDescriptionResponse
{ public:
/// Element model of type "http://www.ime.iiasa.ac.at/enrima/model/example":model.
    ns2__model*                          model                          1;	///< Required element.
/// A handle to the soap struct that manages this instance (automatically set)
    struct soap                         *soap                          ;
};

/******************************************************************************\
 *                                                                            *
 * Additional Top-Level Elements                                              *
 *   http://www.ime.iiasa.ac.at/enrima/model/example                          *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Additional Top-Level Attributes                                            *
 *   http://www.ime.iiasa.ac.at/enrima/model/example                          *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Services                                                                   *
 *                                                                            *
\******************************************************************************/


//gsoap ns1  service name:	enrimaSoap11 
//gsoap ns1  service type:	enrima 
//gsoap ns1  service port:	http://www.ime.iiasa.ac.at:80/enrima_ws_tst1/enrima/ 
//gsoap ns1  service namespace:	http://ime.iiasa.ac.at/enrima/example 
//gsoap ns1  service transport:	http://schemas.xmlsoap.org/soap/http 

/** @mainpage Service Definitions

@section Service_bindings Service Bindings

  - @ref enrimaSoap11

@section Service_more More Information

  - @ref page_notes "Usage Notes"

  - @ref page_XMLDataBinding "XML Data Binding"

  - @ref SOAP_ENV__Header "SOAP Header Content" (when applicable)

  - @ref SOAP_ENV__Detail "SOAP Fault Detail Content" (when applicable)


*/

/**

@page enrimaSoap11 Binding "enrimaSoap11"

@section enrimaSoap11_operations Operations of Binding  "enrimaSoap11"

  - @ref __ns1__getModelDescription

  - @ref __ns1__saveModelDescription

  - @ref __ns1__getModelList

@section enrimaSoap11_ports Endpoints of Binding  "enrimaSoap11"

  - http://www.ime.iiasa.ac.at:80/enrima_ws_tst1/enrima/

Note: use wsdl2h option -N to change the service binding prefix name

*/

/******************************************************************************\
 *                                                                            *
 * Service Binding                                                            *
 *   enrimaSoap11                                                             *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Service Operation                                                          *
 *   __ns1__getModelDescription                                               *
 *                                                                            *
\******************************************************************************/


/// Operation "__ns1__getModelDescription" of service binding "enrimaSoap11"

/**

Operation details:


  - SOAP document/literal style messaging

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___ns1__getModelDescription(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // request parameters:
    _ns2__getModelDescriptionRequest*   ns2__getModelDescriptionRequest,
    // response parameters:
    _ns2__getModelDescriptionResponse*  ns2__getModelDescriptionResponse
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __ns1__getModelDescription(
    struct soap *soap,
    // request parameters:
    _ns2__getModelDescriptionRequest*   ns2__getModelDescriptionRequest,
    // response parameters:
    _ns2__getModelDescriptionResponse*  ns2__getModelDescriptionResponse
  );
@endcode

C++ proxy class (defined in soapenrimaSoap11Proxy.h):
@code
  class enrimaSoap11Proxy;
@endcode
Important: use soapcpp2 option '-i' to generate greatly improved and easy-to-use proxy classes;

C++ service class (defined in soapenrimaSoap11Service.h):
@code
  class enrimaSoap11Service;
@endcode
Important: use soapcpp2 option '-i' to generate greatly improved and easy-to-use service classes;

*/

//gsoap ns1  service method-style:	getModelDescription document
//gsoap ns1  service method-encoding:	getModelDescription literal
//gsoap ns1  service method-action:	getModelDescription ""
int __ns1__getModelDescription(
    _ns2__getModelDescriptionRequest*   ns2__getModelDescriptionRequest,	///< Request parameter
    _ns2__getModelDescriptionResponse*  ns2__getModelDescriptionResponse	///< Response parameter
);

/******************************************************************************\
 *                                                                            *
 * Service Operation                                                          *
 *   __ns1__saveModelDescription                                              *
 *                                                                            *
\******************************************************************************/


/// Operation "__ns1__saveModelDescription" of service binding "enrimaSoap11"

/**

Operation details:


  - SOAP document/literal style messaging

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___ns1__saveModelDescription(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // request parameters:
    _ns2__saveModelDescriptionRequest*  ns2__saveModelDescriptionRequest,
    // response parameters:
    _ns2__saveModelDescriptionResponse* ns2__saveModelDescriptionResponse
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __ns1__saveModelDescription(
    struct soap *soap,
    // request parameters:
    _ns2__saveModelDescriptionRequest*  ns2__saveModelDescriptionRequest,
    // response parameters:
    _ns2__saveModelDescriptionResponse* ns2__saveModelDescriptionResponse
  );
@endcode

C++ proxy class (defined in soapenrimaSoap11Proxy.h):
@code
  class enrimaSoap11Proxy;
@endcode
Important: use soapcpp2 option '-i' to generate greatly improved and easy-to-use proxy classes;

C++ service class (defined in soapenrimaSoap11Service.h):
@code
  class enrimaSoap11Service;
@endcode
Important: use soapcpp2 option '-i' to generate greatly improved and easy-to-use service classes;

*/

//gsoap ns1  service method-style:	saveModelDescription document
//gsoap ns1  service method-encoding:	saveModelDescription literal
//gsoap ns1  service method-action:	saveModelDescription ""
int __ns1__saveModelDescription(
    _ns2__saveModelDescriptionRequest*  ns2__saveModelDescriptionRequest,	///< Request parameter
    _ns2__saveModelDescriptionResponse* ns2__saveModelDescriptionResponse	///< Response parameter
);

/******************************************************************************\
 *                                                                            *
 * Service Operation                                                          *
 *   __ns1__getModelList                                                      *
 *                                                                            *
\******************************************************************************/


/// Operation "__ns1__getModelList" of service binding "enrimaSoap11"

/**

Operation details:


  - SOAP document/literal style messaging

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___ns1__getModelList(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // request parameters:
    _XML                                ns2__getModelListRequest,
    // response parameters:
    _ns2__getModelListResponse*         ns2__getModelListResponse
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __ns1__getModelList(
    struct soap *soap,
    // request parameters:
    _XML                                ns2__getModelListRequest,
    // response parameters:
    _ns2__getModelListResponse*         ns2__getModelListResponse
  );
@endcode

C++ proxy class (defined in soapenrimaSoap11Proxy.h):
@code
  class enrimaSoap11Proxy;
@endcode
Important: use soapcpp2 option '-i' to generate greatly improved and easy-to-use proxy classes;

C++ service class (defined in soapenrimaSoap11Service.h):
@code
  class enrimaSoap11Service;
@endcode
Important: use soapcpp2 option '-i' to generate greatly improved and easy-to-use service classes;

*/

//gsoap ns1  service method-style:	getModelList document
//gsoap ns1  service method-encoding:	getModelList literal
//gsoap ns1  service method-action:	getModelList ""
int __ns1__getModelList(
    _XML                                ns2__getModelListRequest,	///< Request parameter
    _ns2__getModelListResponse*         ns2__getModelListResponse	///< Response parameter
);

/******************************************************************************\
 *                                                                            *
 * XML Data Binding                                                           *
 *                                                                            *
\******************************************************************************/


/**

@page page_XMLDataBinding XML Data Binding

SOAP/XML services use data bindings contractually bound by WSDL and auto-
generated by wsdl2h and soapcpp2 (see Service Bindings). Plain data bindings
are adopted from XML schemas as part of the WSDL types section or when running
wsdl2h on a set of schemas to produce non-SOAP-based XML data bindings.

The following readers and writers are C/C++ data type (de)serializers auto-
generated by wsdl2h and soapcpp2. Run soapcpp2 on this file to generate the
(de)serialization code, which is stored in soapC.c[pp]. Include "soapH.h" in
your code to import these data type and function declarations. Only use the
soapcpp2-generated files in your project build. Do not include the wsdl2h-
generated .h file in your code.

XML content can be retrieved from:
  - a file descriptor, using soap->recvfd = fd
  - a socket, using soap->socket = ...
  - a C++ stream, using soap->is = ...
  - a buffer, using the soap->frecv() callback

XML content can be stored to:
  - a file descriptor, using soap->sendfd = fd
  - a socket, using soap->socket = ...
  - a C++ stream, using soap->os = ...
  - a buffer, using the soap->fsend() callback


@section ns2 Top-level root elements of schema "http://www.ime.iiasa.ac.at/enrima/model/example"

  - <ns2:getModelListRequest> @ref _ns2__getModelListRequest
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns2__getModelListRequest(struct soap*, _XML);
    // Writer (returns SOAP_OK on success):
    soap_write__ns2__getModelListRequest(struct soap*, _XML);
    @endcode

  - <ns2:getModelListResponse> @ref _ns2__getModelListResponse
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns2__getModelListResponse(struct soap*, _ns2__getModelListResponse*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns2__getModelListResponse(struct soap*, _ns2__getModelListResponse*);
    @endcode

  - <ns2:getModelDescriptionRequest> @ref _ns2__getModelDescriptionRequest
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns2__getModelDescriptionRequest(struct soap*, _ns2__getModelDescriptionRequest*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns2__getModelDescriptionRequest(struct soap*, _ns2__getModelDescriptionRequest*);
    @endcode

  - <ns2:getModelDescriptionResponse> @ref _ns2__getModelDescriptionResponse
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns2__getModelDescriptionResponse(struct soap*, _ns2__getModelDescriptionResponse*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns2__getModelDescriptionResponse(struct soap*, _ns2__getModelDescriptionResponse*);
    @endcode

  - <ns2:saveModelDescriptionRequest> @ref _ns2__saveModelDescriptionRequest
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns2__saveModelDescriptionRequest(struct soap*, _ns2__saveModelDescriptionRequest*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns2__saveModelDescriptionRequest(struct soap*, _ns2__saveModelDescriptionRequest*);
    @endcode

  - <ns2:saveModelDescriptionResponse> @ref _ns2__saveModelDescriptionResponse
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns2__saveModelDescriptionResponse(struct soap*, _ns2__saveModelDescriptionResponse*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns2__saveModelDescriptionResponse(struct soap*, _ns2__saveModelDescriptionResponse*);
    @endcode

*/

/* End of enrima.h */
