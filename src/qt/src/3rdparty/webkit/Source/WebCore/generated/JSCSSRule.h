/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef JSCSSRule_h
#define JSCSSRule_h

#include "JSDOMBinding.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObjectWithGlobalObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class CSSRule;

class JSCSSRule : public JSDOMWrapper {
    typedef JSDOMWrapper Base;
public:
    JSCSSRule(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<CSSRule>);
    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }

    virtual void visitChildren(JSC::SlotVisitor&);

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
    CSSRule* impl() const { return m_impl.get(); }

private:
    RefPtr<CSSRule> m_impl;
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::OverridesVisitChildren | Base::StructureFlags;
};

class JSCSSRuleOwner : public JSC::WeakHandleOwner {
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, CSSRule*)
{
    DEFINE_STATIC_LOCAL(JSCSSRuleOwner, jsCSSRuleOwner, ());
    return &jsCSSRuleOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, CSSRule*)
{
    return world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, CSSRule*);
CSSRule* toCSSRule(JSC::JSValue);

class JSCSSRulePrototype : public JSC::JSObjectWithGlobalObject {
    typedef JSC::JSObjectWithGlobalObject Base;
public:
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static const JSC::ClassInfo s_info;
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }
    JSCSSRulePrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure) : JSC::JSObjectWithGlobalObject(globalData, globalObject, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::OverridesVisitChildren | Base::StructureFlags;
};

// Attributes

JSC::JSValue jsCSSRuleType(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsCSSRuleCssText(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSCSSRuleCssText(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsCSSRuleParentStyleSheet(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsCSSRuleParentRule(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsCSSRuleConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
// Constants

JSC::JSValue jsCSSRuleUNKNOWN_RULE(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsCSSRuleSTYLE_RULE(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsCSSRuleCHARSET_RULE(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsCSSRuleIMPORT_RULE(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsCSSRuleMEDIA_RULE(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsCSSRuleFONT_FACE_RULE(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsCSSRulePAGE_RULE(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsCSSRuleWEBKIT_KEYFRAMES_RULE(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsCSSRuleWEBKIT_KEYFRAME_RULE(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif