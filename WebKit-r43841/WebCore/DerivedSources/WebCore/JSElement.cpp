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

#include "config.h"

#include "JSElement.h"

#include <wtf/GetPtr.h>

#include "Attr.h"
#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "ClientRect.h"
#include "ClientRectList.h"
#include "Element.h"
#include "JSAttr.h"
#include "JSCSSStyleDeclaration.h"
#include "JSClientRect.h"
#include "JSClientRectList.h"
#include "JSElement.h"
#include "JSNodeList.h"
#include "KURL.h"
#include "NameNodeList.h"
#include "NodeList.h"

#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <runtime/JSString.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSElement);

/* Hash table */

static const HashTableValue JSElementTableValues[22] =
{
    { "tagName", DontDelete|ReadOnly, (intptr_t)jsElementTagName, (intptr_t)0 },
    { "style", DontDelete|ReadOnly, (intptr_t)jsElementStyle, (intptr_t)0 },
    { "offsetLeft", DontDelete|ReadOnly, (intptr_t)jsElementOffsetLeft, (intptr_t)0 },
    { "offsetTop", DontDelete|ReadOnly, (intptr_t)jsElementOffsetTop, (intptr_t)0 },
    { "offsetWidth", DontDelete|ReadOnly, (intptr_t)jsElementOffsetWidth, (intptr_t)0 },
    { "offsetHeight", DontDelete|ReadOnly, (intptr_t)jsElementOffsetHeight, (intptr_t)0 },
    { "offsetParent", DontDelete|ReadOnly, (intptr_t)jsElementOffsetParent, (intptr_t)0 },
    { "clientLeft", DontDelete|ReadOnly, (intptr_t)jsElementClientLeft, (intptr_t)0 },
    { "clientTop", DontDelete|ReadOnly, (intptr_t)jsElementClientTop, (intptr_t)0 },
    { "clientWidth", DontDelete|ReadOnly, (intptr_t)jsElementClientWidth, (intptr_t)0 },
    { "clientHeight", DontDelete|ReadOnly, (intptr_t)jsElementClientHeight, (intptr_t)0 },
    { "scrollLeft", DontDelete, (intptr_t)jsElementScrollLeft, (intptr_t)setJSElementScrollLeft },
    { "scrollTop", DontDelete, (intptr_t)jsElementScrollTop, (intptr_t)setJSElementScrollTop },
    { "scrollWidth", DontDelete|ReadOnly, (intptr_t)jsElementScrollWidth, (intptr_t)0 },
    { "scrollHeight", DontDelete|ReadOnly, (intptr_t)jsElementScrollHeight, (intptr_t)0 },
    { "firstElementChild", DontDelete|ReadOnly, (intptr_t)jsElementFirstElementChild, (intptr_t)0 },
    { "lastElementChild", DontDelete|ReadOnly, (intptr_t)jsElementLastElementChild, (intptr_t)0 },
    { "previousElementSibling", DontDelete|ReadOnly, (intptr_t)jsElementPreviousElementSibling, (intptr_t)0 },
    { "nextElementSibling", DontDelete|ReadOnly, (intptr_t)jsElementNextElementSibling, (intptr_t)0 },
    { "childElementCount", DontDelete|ReadOnly, (intptr_t)jsElementChildElementCount, (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsElementConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 8191, JSElementTableValues, 0 };
#else
    { 68, 63, JSElementTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSElementConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSElementConstructorTableValues, 0 };
#else
    { 1, 0, JSElementConstructorTableValues, 0 };
#endif

class JSElementConstructor : public DOMObject {
public:
    JSElementConstructor(ExecState* exec)
        : DOMObject(JSElementConstructor::createStructure(exec->lexicalGlobalObject()->objectPrototype()))
    {
        putDirect(exec->propertyNames().prototype, JSElementPrototype::self(exec, exec->lexicalGlobalObject()), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValue proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, ImplementsHasInstance)); 
    }
};

const ClassInfo JSElementConstructor::s_info = { "ElementConstructor", 0, &JSElementConstructorTable, 0 };

bool JSElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSElementConstructor, DOMObject>(exec, &JSElementConstructorTable, this, propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSElementPrototypeTableValues[28] =
{
    { "getAttribute", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionGetAttribute, (intptr_t)1 },
    { "setAttribute", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionSetAttribute, (intptr_t)2 },
    { "removeAttribute", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionRemoveAttribute, (intptr_t)1 },
    { "getAttributeNode", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionGetAttributeNode, (intptr_t)1 },
    { "setAttributeNode", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionSetAttributeNode, (intptr_t)1 },
    { "removeAttributeNode", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionRemoveAttributeNode, (intptr_t)1 },
    { "getElementsByTagName", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionGetElementsByTagName, (intptr_t)1 },
    { "getAttributeNS", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionGetAttributeNS, (intptr_t)2 },
    { "setAttributeNS", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionSetAttributeNS, (intptr_t)3 },
    { "removeAttributeNS", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionRemoveAttributeNS, (intptr_t)2 },
    { "getElementsByTagNameNS", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionGetElementsByTagNameNS, (intptr_t)2 },
    { "getAttributeNodeNS", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionGetAttributeNodeNS, (intptr_t)2 },
    { "setAttributeNodeNS", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionSetAttributeNodeNS, (intptr_t)1 },
    { "hasAttribute", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionHasAttribute, (intptr_t)1 },
    { "hasAttributeNS", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionHasAttributeNS, (intptr_t)2 },
    { "focus", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionFocus, (intptr_t)0 },
    { "blur", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionBlur, (intptr_t)0 },
    { "scrollIntoView", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionScrollIntoView, (intptr_t)1 },
    { "contains", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionContains, (intptr_t)1 },
    { "scrollIntoViewIfNeeded", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionScrollIntoViewIfNeeded, (intptr_t)1 },
    { "scrollByLines", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionScrollByLines, (intptr_t)1 },
    { "scrollByPages", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionScrollByPages, (intptr_t)1 },
    { "getElementsByClassName", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionGetElementsByClassName, (intptr_t)1 },
    { "querySelector", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionQuerySelector, (intptr_t)1 },
    { "querySelectorAll", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionQuerySelectorAll, (intptr_t)1 },
    { "getClientRects", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionGetClientRects, (intptr_t)0 },
    { "getBoundingClientRect", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionGetBoundingClientRect, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 1023, JSElementPrototypeTableValues, 0 };
#else
    { 69, 63, JSElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSElementPrototype::s_info = { "ElementPrototype", 0, &JSElementPrototypeTable, 0 };

JSObject* JSElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSElement>(exec, globalObject);
}

bool JSElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSElementPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSElement::s_info = { "Element", &JSNode::s_info, &JSElementTable, 0 };

JSElement::JSElement(PassRefPtr<Structure> structure, PassRefPtr<Element> impl)
    : JSNode(structure, impl)
{
}

JSObject* JSElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSElementPrototype(JSElementPrototype::createStructure(JSNodePrototype::self(exec, globalObject)));
}

JSValue jsElementTagName(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(asObject(slot.slotBase()))->impl());
    return jsStringOrNull(exec, imp->tagName());
}

JSValue jsElementStyle(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->style()));
}

JSValue jsElementOffsetLeft(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->offsetLeft());
}

JSValue jsElementOffsetTop(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->offsetTop());
}

JSValue jsElementOffsetWidth(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->offsetWidth());
}

JSValue jsElementOffsetHeight(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->offsetHeight());
}

JSValue jsElementOffsetParent(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->offsetParent()));
}

JSValue jsElementClientLeft(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->clientLeft());
}

JSValue jsElementClientTop(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->clientTop());
}

JSValue jsElementClientWidth(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->clientWidth());
}

JSValue jsElementClientHeight(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->clientHeight());
}

JSValue jsElementScrollLeft(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->scrollLeft());
}

JSValue jsElementScrollTop(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->scrollTop());
}

JSValue jsElementScrollWidth(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->scrollWidth());
}

JSValue jsElementScrollHeight(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->scrollHeight());
}

JSValue jsElementFirstElementChild(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->firstElementChild()));
}

JSValue jsElementLastElementChild(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->lastElementChild()));
}

JSValue jsElementPreviousElementSibling(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->previousElementSibling()));
}

JSValue jsElementNextElementSibling(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->nextElementSibling()));
}

JSValue jsElementChildElementCount(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->childElementCount());
}

JSValue jsElementConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    return static_cast<JSElement*>(asObject(slot.slotBase()))->getConstructor(exec);
}
void JSElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSElement, Base>(exec, propertyName, value, &JSElementTable, this, slot);
}

void setJSElementScrollLeft(ExecState* exec, JSObject* thisObject, JSValue value)
{
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(thisObject)->impl());
    imp->setScrollLeft(value.toInt32(exec));
}

void setJSElementScrollTop(ExecState* exec, JSObject* thisObject, JSValue value)
{
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(thisObject)->impl());
    imp->setScrollTop(value.toInt32(exec));
}

JSValue JSElement::getConstructor(ExecState* exec)
{
    return getDOMConstructor<JSElementConstructor>(exec);
}

JSValue JSC_HOST_CALL jsElementPrototypeFunctionGetAttribute(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    const UString& name = args.at(0).toString(exec);


    JSC::JSValue result = jsStringOrNull(exec, imp->getAttribute(name));
    return result;
}

JSValue JSC_HOST_CALL jsElementPrototypeFunctionSetAttribute(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    return castedThisObj->setAttribute(exec, args);
}

JSValue JSC_HOST_CALL jsElementPrototypeFunctionRemoveAttribute(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& name = args.at(0).toString(exec);

    imp->removeAttribute(name, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsElementPrototypeFunctionGetAttributeNode(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    const UString& name = args.at(0).toString(exec);


    JSC::JSValue result = toJS(exec, WTF::getPtr(imp->getAttributeNode(name)));
    return result;
}

JSValue JSC_HOST_CALL jsElementPrototypeFunctionSetAttributeNode(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    return castedThisObj->setAttributeNode(exec, args);
}

JSValue JSC_HOST_CALL jsElementPrototypeFunctionRemoveAttributeNode(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    Attr* oldAttr = toAttr(args.at(0));


    JSC::JSValue result = toJS(exec, WTF::getPtr(imp->removeAttributeNode(oldAttr, ec)));
    setDOMException(exec, ec);
    return result;
}

JSValue JSC_HOST_CALL jsElementPrototypeFunctionGetElementsByTagName(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    const UString& name = args.at(0).toString(exec);


    JSC::JSValue result = toJS(exec, WTF::getPtr(imp->getElementsByTagName(name)));
    return result;
}

JSValue JSC_HOST_CALL jsElementPrototypeFunctionGetAttributeNS(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    const UString& namespaceURI = valueToStringWithNullCheck(exec, args.at(0));
    const UString& localName = args.at(1).toString(exec);


    JSC::JSValue result = jsString(exec, imp->getAttributeNS(namespaceURI, localName));
    return result;
}

JSValue JSC_HOST_CALL jsElementPrototypeFunctionSetAttributeNS(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    return castedThisObj->setAttributeNS(exec, args);
}

JSValue JSC_HOST_CALL jsElementPrototypeFunctionRemoveAttributeNS(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& namespaceURI = valueToStringWithNullCheck(exec, args.at(0));
    const UString& localName = args.at(1).toString(exec);

    imp->removeAttributeNS(namespaceURI, localName, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsElementPrototypeFunctionGetElementsByTagNameNS(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    const UString& namespaceURI = valueToStringWithNullCheck(exec, args.at(0));
    const UString& localName = args.at(1).toString(exec);


    JSC::JSValue result = toJS(exec, WTF::getPtr(imp->getElementsByTagNameNS(namespaceURI, localName)));
    return result;
}

JSValue JSC_HOST_CALL jsElementPrototypeFunctionGetAttributeNodeNS(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    const UString& namespaceURI = valueToStringWithNullCheck(exec, args.at(0));
    const UString& localName = args.at(1).toString(exec);


    JSC::JSValue result = toJS(exec, WTF::getPtr(imp->getAttributeNodeNS(namespaceURI, localName)));
    return result;
}

JSValue JSC_HOST_CALL jsElementPrototypeFunctionSetAttributeNodeNS(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    return castedThisObj->setAttributeNodeNS(exec, args);
}

JSValue JSC_HOST_CALL jsElementPrototypeFunctionHasAttribute(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    const UString& name = args.at(0).toString(exec);


    JSC::JSValue result = jsBoolean(imp->hasAttribute(name));
    return result;
}

JSValue JSC_HOST_CALL jsElementPrototypeFunctionHasAttributeNS(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    const UString& namespaceURI = valueToStringWithNullCheck(exec, args.at(0));
    const UString& localName = args.at(1).toString(exec);


    JSC::JSValue result = jsBoolean(imp->hasAttributeNS(namespaceURI, localName));
    return result;
}

JSValue JSC_HOST_CALL jsElementPrototypeFunctionFocus(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());

    imp->focus();
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsElementPrototypeFunctionBlur(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());

    imp->blur();
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsElementPrototypeFunctionScrollIntoView(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());

    int argsCount = args.size();
    if (argsCount < 1) {
        imp->scrollIntoView();
        return jsUndefined();
    }

    bool alignWithTop = args.at(0).toBoolean(exec);

    imp->scrollIntoView(alignWithTop);
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsElementPrototypeFunctionContains(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    Element* element = toElement(args.at(0));


    JSC::JSValue result = jsBoolean(imp->contains(element));
    return result;
}

JSValue JSC_HOST_CALL jsElementPrototypeFunctionScrollIntoViewIfNeeded(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());

    int argsCount = args.size();
    if (argsCount < 1) {
        imp->scrollIntoViewIfNeeded();
        return jsUndefined();
    }

    bool centerIfNeeded = args.at(0).toBoolean(exec);

    imp->scrollIntoViewIfNeeded(centerIfNeeded);
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsElementPrototypeFunctionScrollByLines(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    int lines = args.at(0).toInt32(exec);

    imp->scrollByLines(lines);
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsElementPrototypeFunctionScrollByPages(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    int pages = args.at(0).toInt32(exec);

    imp->scrollByPages(pages);
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsElementPrototypeFunctionGetElementsByClassName(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    const UString& name = args.at(0).toString(exec);


    JSC::JSValue result = toJS(exec, WTF::getPtr(imp->getElementsByClassName(name)));
    return result;
}

JSValue JSC_HOST_CALL jsElementPrototypeFunctionQuerySelector(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& selectors = args.at(0).toString(exec);


    JSC::JSValue result = toJS(exec, WTF::getPtr(imp->querySelector(selectors, ec)));
    setDOMException(exec, ec);
    return result;
}

JSValue JSC_HOST_CALL jsElementPrototypeFunctionQuerySelectorAll(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& selectors = args.at(0).toString(exec);


    JSC::JSValue result = toJS(exec, WTF::getPtr(imp->querySelectorAll(selectors, ec)));
    setDOMException(exec, ec);
    return result;
}

JSValue JSC_HOST_CALL jsElementPrototypeFunctionGetClientRects(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());


    JSC::JSValue result = toJS(exec, WTF::getPtr(imp->getClientRects()));
    return result;
}

JSValue JSC_HOST_CALL jsElementPrototypeFunctionGetBoundingClientRect(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());


    JSC::JSValue result = toJS(exec, WTF::getPtr(imp->getBoundingClientRect()));
    return result;
}

Element* toElement(JSC::JSValue value)
{
    return value.isObject(&JSElement::s_info) ? static_cast<JSElement*>(asObject(value))->impl() : 0;
}

}
