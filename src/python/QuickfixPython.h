/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.12
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_quickfix_WRAP_H_
#define SWIG_quickfix_WRAP_H_

#include <map>
#include <string>


class SwigDirector_Application : public FIX::Application, public Swig::Director {

public:
    SwigDirector_Application(PyObject *self);
    virtual ~SwigDirector_Application();
    virtual void onCreate(FIX::SessionID const &arg0);
    virtual void onLogon(FIX::SessionID const &arg0);
    virtual void onLogout(FIX::SessionID const &arg0);
    virtual void toAdmin(FIX::Message &arg0, FIX::SessionID const &arg1);
    virtual void toApp(FIX::Message &arg0, FIX::SessionID const &arg1) EXCEPT(FIX::DoNotSend);
    virtual void fromAdmin(FIX::Message const &arg0, FIX::SessionID const &arg1) EXCEPT(FIX::FieldNotFound, FIX::IncorrectDataFormat, FIX::IncorrectTagValue, FIX::RejectLogon);
    virtual void fromApp(FIX::Message const &arg0, FIX::SessionID const &arg1) EXCEPT(FIX::FieldNotFound, FIX::IncorrectDataFormat, FIX::IncorrectTagValue, FIX::UnsupportedMessageType);

/* Internal director utilities */
public:
    bool swig_get_inner(const char *swig_protected_method_name) const {
      std::map<std::string, bool>::const_iterator iv = swig_inner.find(swig_protected_method_name);
      return (iv != swig_inner.end() ? iv->second : false);
    }
    void swig_set_inner(const char *swig_protected_method_name, bool swig_val) const {
      swig_inner[swig_protected_method_name] = swig_val;
    }
private:
    mutable std::map<std::string, bool> swig_inner;

#if defined(SWIG_PYTHON_DIRECTOR_VTABLE)
/* VTable implementation */
    PyObject *swig_get_method(size_t method_index, const char *method_name) const {
      PyObject *method = vtable[method_index];
      if (!method) {
        swig::SwigVar_PyObject name = SWIG_Python_str_FromChar(method_name);
        method = PyObject_GetAttr(swig_get_self(), name);
        if (!method) {
          std::string msg = "Method in class Application doesn't exist, undefined ";
          msg += method_name;
          Swig::DirectorMethodException::raise(msg.c_str());
        }
        vtable[method_index] = method;
      }
      return method;
    }
private:
    mutable swig::SwigVar_PyObject vtable[7];
#endif

};


#endif
