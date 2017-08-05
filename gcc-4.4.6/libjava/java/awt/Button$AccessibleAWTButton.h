
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_Button$AccessibleAWTButton__
#define __java_awt_Button$AccessibleAWTButton__

#pragma interface

#include <java/awt/Component$AccessibleAWTComponent.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Button;
        class Button$AccessibleAWTButton;
    }
  }
  namespace javax
  {
    namespace accessibility
    {
        class AccessibleAction;
        class AccessibleRole;
        class AccessibleValue;
    }
  }
}

class java::awt::Button$AccessibleAWTButton : public ::java::awt::Component$AccessibleAWTComponent
{

public: // actually protected
  Button$AccessibleAWTButton(::java::awt::Button *);
public:
  virtual jint getAccessibleActionCount();
  virtual ::java::lang::String * getAccessibleActionDescription(jint);
  virtual jboolean doAccessibleAction(jint);
  virtual ::java::lang::String * getAccessibleName();
  virtual ::javax::accessibility::AccessibleAction * getAccessibleAction();
  virtual ::javax::accessibility::AccessibleValue * getAccessibleValue();
  virtual ::java::lang::Number * getCurrentAccessibleValue();
  virtual jboolean setCurrentAccessibleValue(::java::lang::Number *);
  virtual ::java::lang::Number * getMinimumAccessibleValue();
  virtual ::java::lang::Number * getMaximumAccessibleValue();
  virtual ::javax::accessibility::AccessibleRole * getAccessibleRole();
private:
  static const jlong serialVersionUID = -5932203980244017102LL;
public: // actually package-private
  ::java::awt::Button * __attribute__((aligned(__alignof__( ::java::awt::Component$AccessibleAWTComponent)))) this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __java_awt_Button$AccessibleAWTButton__