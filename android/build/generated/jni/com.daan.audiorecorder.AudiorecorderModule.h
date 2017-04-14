/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011-2016 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This is generated, do not edit by hand. **/

#include <jni.h>

#include "Proxy.h"

namespace com {
namespace daan {
namespace audiorecorder {

class AudiorecorderModule : public titanium::Proxy
{
public:
	explicit AudiorecorderModule(jobject javaObject);

	static void bindProxy(v8::Local<v8::Object>, v8::Local<v8::Context>);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Isolate*);
	static void dispose(v8::Isolate*);

	static jclass javaClass;

private:
	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;

	// Methods -----------------------------------------------------------
	static void setRecordingState(const v8::FunctionCallbackInfo<v8::Value>&);
	static void fileName(const v8::FunctionCallbackInfo<v8::Value>&);
	static void filePath(const v8::FunctionCallbackInfo<v8::Value>&);
	static void start(const v8::FunctionCallbackInfo<v8::Value>&);
	static void configRecorder(const v8::FunctionCallbackInfo<v8::Value>&);
	static void recording(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getFile(const v8::FunctionCallbackInfo<v8::Value>&);
	static void isRecording(const v8::FunctionCallbackInfo<v8::Value>&);
	static void startRec(const v8::FunctionCallbackInfo<v8::Value>&);
	static void stop(const v8::FunctionCallbackInfo<v8::Value>&);
	static void fileSize(const v8::FunctionCallbackInfo<v8::Value>&);
	static void startRecording(const v8::FunctionCallbackInfo<v8::Value>&);
	static void locationString(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getRecordingState(const v8::FunctionCallbackInfo<v8::Value>&);
	static void config(const v8::FunctionCallbackInfo<v8::Value>&);
	static void stopRecording(const v8::FunctionCallbackInfo<v8::Value>&);

	// Dynamic property accessors ----------------------------------------
	static void getter_fileName(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_recordingState(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void setter_recordingState(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void getter_fileSize(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_filePath(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_locationString(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_recording(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);

};

} // audiorecorder
} // daan
} // com
