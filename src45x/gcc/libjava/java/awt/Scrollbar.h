
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_Scrollbar__
#define __java_awt_Scrollbar__

#pragma interface

#include <java/awt/Component.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class AWTEvent;
        class Scrollbar;
      namespace event
      {
          class AdjustmentEvent;
          class AdjustmentListener;
      }
    }
  }
  namespace javax
  {
    namespace accessibility
    {
        class AccessibleContext;
    }
  }
}

class java::awt::Scrollbar : public ::java::awt::Component
{

public:
  Scrollbar();
  Scrollbar(jint);
  Scrollbar(jint, jint, jint, jint, jint);
  virtual jint getOrientation();
  virtual void setOrientation(jint);
  virtual jint getValue();
  virtual void setValue(jint);
  virtual jint getMaximum();
  virtual void setMaximum(jint);
  virtual jint getMinimum();
  virtual void setMinimum(jint);
  virtual jint getVisibleAmount();
  virtual jint getVisible();
  virtual void setVisibleAmount(jint);
  virtual void setValues(jint, jint, jint, jint);
  virtual jint getUnitIncrement();
  virtual jint getLineIncrement();
  virtual void setUnitIncrement(jint);
  virtual void setLineIncrement(jint);
  virtual jint getBlockIncrement();
  virtual jint getPageIncrement();
  virtual void setBlockIncrement(jint);
  virtual void setPageIncrement(jint);
  virtual void addNotify();
  virtual void addAdjustmentListener(::java::awt::event::AdjustmentListener *);
  virtual void removeAdjustmentListener(::java::awt::event::AdjustmentListener *);
public: // actually protected
  virtual void processEvent(::java::awt::AWTEvent *);
  virtual void processAdjustmentEvent(::java::awt::event::AdjustmentEvent *);
public: // actually package-private
  virtual void dispatchEventImpl(::java::awt::AWTEvent *);
public: // actually protected
  virtual ::java::lang::String * paramString();
public:
  virtual JArray< ::java::util::EventListener * > * getListeners(::java::lang::Class *);
  virtual JArray< ::java::awt::event::AdjustmentListener * > * getAdjustmentListeners();
  virtual jboolean getValueIsAdjusting();
  virtual void setValueIsAdjusting(jboolean);
public: // actually package-private
  virtual ::java::lang::String * generateName();
private:
  static jlong getUniqueLong();
public:
  virtual ::javax::accessibility::AccessibleContext * getAccessibleContext();
  static const jint HORIZONTAL = 0;
  static const jint VERTICAL = 1;
private:
  static const jlong serialVersionUID = 8451667562882310543LL;
  jint __attribute__((aligned(__alignof__( ::java::awt::Component)))) lineIncrement;
  jint pageIncrement;
  jint maximum;
  jint minimum;
  jint orientation;
  jint value;
  jint visibleAmount;
  ::java::awt::event::AdjustmentListener * adjustment_listeners;
  jboolean valueIsAdjusting;
  static jlong next_scrollbar_number;
public:
  static ::java::lang::Class class$;
};

#endif // __java_awt_Scrollbar__