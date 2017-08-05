
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_CORBA_CDR_UnknownExceptionCtxHandler__
#define __gnu_CORBA_CDR_UnknownExceptionCtxHandler__

#pragma interface

#include <gnu/CORBA/CDR/Vio.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace CORBA
    {
      namespace CDR
      {
          class BufferedCdrOutput;
          class BufferredCdrInput;
          class UnknownExceptionCtxHandler;
      }
      namespace GIOP
      {
          class ServiceContext;
      }
    }
  }
}

class gnu::CORBA::CDR::UnknownExceptionCtxHandler : public ::gnu::CORBA::CDR::Vio
{

public:
  UnknownExceptionCtxHandler();
  static JArray< ::gnu::CORBA::GIOP::ServiceContext * > * addExceptionContext(JArray< ::gnu::CORBA::GIOP::ServiceContext * > *, ::java::lang::Throwable *, ::java::lang::Object *);
  static void write(::gnu::CORBA::CDR::BufferedCdrOutput *, ::java::lang::Throwable *);
  static ::java::lang::Throwable * read(::gnu::CORBA::CDR::BufferredCdrInput *, JArray< ::gnu::CORBA::GIOP::ServiceContext * > *);
public: // actually package-private
  static ::java::lang::Object * createInstance(::java::lang::String *, JArray< ::java::lang::String * > *, ::java::lang::String *);
  static ::java::lang::Object * _createInstance(::java::lang::String *, ::java::lang::String *);
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_CORBA_CDR_UnknownExceptionCtxHandler__