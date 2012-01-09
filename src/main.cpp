/*
 * test.cpp
 *
 *  Created on: Dec 25, 2011
 *      Author: hongtao
 */

#include <iostream>
#include <fstream>
#include <vector>
#include "soapenrimaSoap11Proxy.h"
#include "enrimaSoap11.nsmap"

using namespace std;
enrimaSoap11Proxy enrimaSoap11Proxy(SOAP_XML_INDENT);
int getModelList(_ns2__getModelListResponse *res);
int getModel(int idModel, _ns2__getModelDescriptionResponse *res);
int saveModel(_ns2__saveModelDescriptionRequest *req,_ns2__saveModelDescriptionResponse *res);
void printModel(ns2__model *model);

int main() {

	// get model list test
	_ns2__getModelListResponse *modelListRes = new _ns2__getModelListResponse;
	int returnCode = getModelList(modelListRes);
	if(returnCode==SOAP_OK)
	{
                cout <<"model list:"<<endl;
		for (unsigned short i = 0; i < modelListRes->model.size(); i++) {
			ns2__model *model = modelListRes->model.at(i);
			printModel(model);
		}
	}


	// get a model by model id test
	_ns2__getModelDescriptionResponse *modelRes =new _ns2__getModelDescriptionResponse;
	returnCode = getModel(38, modelRes);
	if(returnCode==SOAP_OK)
	{
                cout <<"get model with id=38"<<endl;
		printModel(modelRes->model);
	}


	//update model test
	_ns2__saveModelDescriptionRequest *req = new _ns2__saveModelDescriptionRequest;
	req->model = modelRes->model;
	//update model name
	req->model->name="test1.1.1";
	_ns2__saveModelDescriptionResponse *res = new _ns2__saveModelDescriptionResponse;
	returnCode = saveModel(req,res);
	if(returnCode==SOAP_OK)
	{
               cout <<"update model with id=38"<<endl;
		printModel(res->model);
	}

	return 0;
}


int getModelList(_ns2__getModelListResponse *res) {

	if (enrimaSoap11Proxy.getModelList(NULL, res) == SOAP_OK)
	{
		return SOAP_OK;
	} else {
		enrimaSoap11Proxy.soap_stream_fault(cerr);
		return enrimaSoap11Proxy.error;
	}
}

int getModel(int idModel, _ns2__getModelDescriptionResponse *res) {
	_ns2__getModelDescriptionRequest *req = new _ns2__getModelDescriptionRequest;
	req->idModel = idModel;
	if (enrimaSoap11Proxy.getModelDescription(req, res) == SOAP_OK)
	{
		return SOAP_OK;
	} else {
		enrimaSoap11Proxy.soap_stream_fault(cerr);
		return enrimaSoap11Proxy.error;
	}
}

int saveModel(_ns2__saveModelDescriptionRequest *req,_ns2__saveModelDescriptionResponse *res) {

	if (enrimaSoap11Proxy.saveModelDescription(req, res) == SOAP_OK)
	{
		return SOAP_OK;
	} else {
		enrimaSoap11Proxy.soap_stream_fault(cerr);
		return enrimaSoap11Proxy.error;
	}

}

void printModel(ns2__model *model) {
	cout << "model id: " << model->id << " name: " << model->name
			<< " creator: " << model->auditable->createdBy->login
			<< " created at: " << model->auditable->creationDate << endl;
}
