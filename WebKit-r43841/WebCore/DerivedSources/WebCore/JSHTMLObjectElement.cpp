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

#include "JSHTMLObjectElement.h"

#include <wtf/GetPtr.h>

#include "AtomicString.h"
#include "Document.h"
#include "HTMLFormElement.h"
#include "HTMLObjectElement.h"
#include "JSDOMBinding.h"
#include "JSDocument.h"
#include "JSHTMLFormElement.h"
#include "JSHTMLObjectElementCustom.h"
#include "KURL.h"

#include <runtime/JSNumberCell.h>
#include <runtime/JSString.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLObjectElement);

/* Hash table */

static const HashTableValue JSHTMLObjectElementTableValues[20] =
{
    { "form", DontDelete|ReadOnly, (intptr_t)jsHTMLObjectElementForm, (intptr_t)0 },
    { "code", DontDelete, (intptr_t)jsHTMLObjectElementCode, (intptr_t)setJSHTMLObjectElementCode },
    { "align", DontDelete, (intptr_t)jsHTMLObjectElementAlign, (intptr_t)setJSHTMLObjectElementAlign },
    { "archive", DontDelete, (intptr_t)jsHTMLObjectElementArchive, (intptr_t)setJSHTMLObjectElementArchive },
    { "border", DontDelete, (intptr_t)jsHTMLObjectElementBorder, (intptr_t)setJSHTMLObjectElementBorder },
    { "codeBase", DontDelete, (intptr_t)jsHTMLObjectElementCodeBase, (intptr_t)setJSHTMLObjectElementCodeBase },
    { "codeType", DontDelete, (intptr_t)jsHTMLObjectElementCodeType, (intptr_t)setJSHTMLObjectElementCodeType },
    { "data", DontDelete, (intptr_t)jsHTMLObjectElementData, (intptr_t)setJSHTMLObjectElementData },
    { "declare", DontDelete, (intptr_t)jsHTMLObjectElementDeclare, (intptr_t)setJSHTMLObjectElementDeclare },
    { "height", DontDelete, (intptr_t)jsHTMLObjectElementHeight, (intptr_t)setJSHTMLObjectElementHeight },
    { "hspace", DontDelete, (intptr_t)jsHTMLObjectElementHspace, (intptr_t)setJSHTMLObjectElementHspace },
    { "name", DontDelete, (intptr_t)jsHTMLObjectElementName, (intptr_t)setJSHTMLObjectElementName },
    { "standby", DontDelete, (intptr_t)jsHTMLObjectElementStandby, (intptr_t)setJSHTMLObjectElementStandby },
    { "type", DontDelete, (intptr_t)jsHTMLObjectElementType, (intptr_t)setJSHTMLObjectElementType },
    { "useMap", DontDelete, (intptr_t)jsHTMLObjectElementUseMap, (intptr_t)setJSHTMLObjectElementUseMap },
    { "vspace", DontDelete, (intptr_t)jsHTMLObjectElementVspace, (intptr_t)setJSHTMLObjectElementVspace },
    { "width", DontDelete, (intptr_t)jsHTMLObjectElementWidth, (intptr_t)setJSHTMLObjectElementWidth },
    { "contentDocument", DontDelete|ReadOnly, (intptr_t)jsHTMLObjectElementContentDocument, (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsHTMLObjectElementConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLObjectElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 127, JSHTMLObjectElementTableValues, 0 };
#else
    { 66, 63, JSHTMLObjectElementTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSHTMLObjectElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLObjectElementConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSHTMLObjectElementConstructorTableValues, 0 };
#else
    { 1, 0, JSHTMLObjectElementConstructorTableValues, 0 };
#endif

class JSHTMLObjectElementConstructor : public DOMObject {
public:
    JSHTMLObjectElementConstructor(ExecState* exec)
        : DOMObject(JSHTMLObjectElementConstructor::createStructure(exec->lexicalGlobalObject()->objectPrototype()))
    {
        putDirect(exec->propertyNames().prototype, JSHTMLObjectElementPrototype::self(exec, exec->lexicalGlobalObject()), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValue proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, ImplementsHasInstance)); 
    }
};

const ClassInfo JSHTMLObjectElementConstructor::s_info = { "HTMLObjectElementConstructor", 0, &JSHTMLObjectElementConstructorTable, 0 };

bool JSHTMLObjectElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLObjectElementConstructor, DOMObject>(exec, &JSHTMLObjectElementConstructorTable, this, propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLObjectElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLObjectElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSHTMLObjectElementPrototypeTableValues, 0 };
#else
    { 1, 0, JSHTMLObjectElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSHTMLObjectElementPrototype::s_info = { "HTMLObjectElementPrototype", 0, &JSHTMLObjectElementPrototypeTable, 0 };

JSObject* JSHTMLObjectElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLObjectElement>(exec, globalObject);
}

const ClassInfo JSHTMLObjectElement::s_info = { "HTMLObjectElement", &JSHTMLElement::s_info, &JSHTMLObjectElementTable, 0 };

JSHTMLObjectElement::JSHTMLObjectElement(PassRefPtr<Structure> structure, PassRefPtr<HTMLObjectElement> impl)
    : JSHTMLElement(structure, impl)
{
}

JSObject* JSHTMLObjectElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHTMLObjectElementPrototype(JSHTMLObjectElementPrototype::createStructure(JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLObjectElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    if (canGetItemsForName(exec, static_cast<HTMLObjectElement*>(impl()), propertyName)) {
        slot.setCustom(this, nameGetter);
        return true;
    }
    if (customGetOwnPropertySlot(exec, propertyName, slot))
        return true;
    return getStaticValueSlot<JSHTMLObjectElement, Base>(exec, &JSHTMLObjectElementTable, this, propertyName, slot);
}

JSValue jsHTMLObjectElementForm(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    HTMLObjectElement* imp = static_cast<HTMLObjectElement*>(static_cast<JSHTMLObjectElement*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->form()));
}

JSValue jsHTMLObjectElementCode(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    HTMLObjectElement* imp = static_cast<HTMLObjectElement*>(static_cast<JSHTMLObjectElement*>(asObject(slot.slotBase()))->impl());
    return jsString(exec, imp->code());
}

JSValue jsHTMLObjectElementAlign(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    HTMLObjectElement* imp = static_cast<HTMLObjectElement*>(static_cast<JSHTMLObjectElement*>(asObject(slot.slotBase()))->impl());
    return jsString(exec, imp->align());
}

JSValue jsHTMLObjectElementArchive(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    HTMLObjectElement* imp = static_cast<HTMLObjectElement*>(static_cast<JSHTMLObjectElement*>(asObject(slot.slotBase()))->impl());
    return jsString(exec, imp->archive());
}

JSValue jsHTMLObjectElementBorder(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    HTMLObjectElement* imp = static_cast<HTMLObjectElement*>(static_cast<JSHTMLObjectElement*>(asObject(slot.slotBase()))->impl());
    return jsString(exec, imp->border());
}

JSValue jsHTMLObjectElementCodeBase(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    HTMLObjectElement* imp = static_cast<HTMLObjectElement*>(static_cast<JSHTMLObjectElement*>(asObject(slot.slotBase()))->impl());
    return jsString(exec, imp->codeBase());
}

JSValue jsHTMLObjectElementCodeType(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    HTMLObjectElement* imp = static_cast<HTMLObjectElement*>(static_cast<JSHTMLObjectElement*>(asObject(slot.slotBase()))->impl());
    return jsString(exec, imp->codeType());
}

JSValue jsHTMLObjectElementData(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    HTMLObjectElement* imp = static_cast<HTMLObjectElement*>(static_cast<JSHTMLObjectElement*>(asObject(slot.slotBase()))->impl());
    return jsString(exec, imp->data());
}

JSValue jsHTMLObjectElementDeclare(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    HTMLObjectElement* imp = static_cast<HTMLObjectElement*>(static_cast<JSHTMLObjectElement*>(asObject(slot.slotBase()))->impl());
    return jsBoolean(imp->declare());
}

JSValue jsHTMLObjectElementHeight(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    HTMLObjectElement* imp = static_cast<HTMLObjectElement*>(static_cast<JSHTMLObjectElement*>(asObject(slot.slotBase()))->impl());
    return jsString(exec, imp->height());
}

JSValue jsHTMLObjectElementHspace(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    HTMLObjectElement* imp = static_cast<HTMLObjectElement*>(static_cast<JSHTMLObjectElement*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->hspace());
}

JSValue jsHTMLObjectElementName(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    HTMLObjectElement* imp = static_cast<HTMLObjectElement*>(static_cast<JSHTMLObjectElement*>(asObject(slot.slotBase()))->impl());
    return jsString(exec, imp->name());
}

JSValue jsHTMLObjectElementStandby(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    HTMLObjectElement* imp = static_cast<HTMLObjectElement*>(static_cast<JSHTMLObjectElement*>(asObject(slot.slotBase()))->impl());
    return jsString(exec, imp->standby());
}

JSValue jsHTMLObjectElementType(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    HTMLObjectElement* imp = static_cast<HTMLObjectElement*>(static_cast<JSHTMLObjectElement*>(asObject(slot.slotBase()))->impl());
    return jsString(exec, imp->type());
}

JSValue jsHTMLObjectElementUseMap(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    HTMLObjectElement* imp = static_cast<HTMLObjectElement*>(static_cast<JSHTMLObjectElement*>(asObject(slot.slotBase()))->impl());
    return jsString(exec, imp->useMap());
}

JSValue jsHTMLObjectElementVspace(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    HTMLObjectElement* imp = static_cast<HTMLObjectElement*>(static_cast<JSHTMLObjectElement*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->vspace());
}

JSValue jsHTMLObjectElementWidth(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    HTMLObjectElement* imp = static_cast<HTMLObjectElement*>(static_cast<JSHTMLObjectElement*>(asObject(slot.slotBase()))->impl());
    return jsString(exec, imp->width());
}

JSValue jsHTMLObjectElementContentDocument(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    HTMLObjectElement* imp = static_cast<HTMLObjectElement*>(static_cast<JSHTMLObjectElement*>(asObject(slot.slotBase()))->impl());
    return checkNodeSecurity(exec, imp->contentDocument()) ? toJS(exec, WTF::getPtr(imp->contentDocument())) : jsUndefined();
}

JSValue jsHTMLObjectElementConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    return static_cast<JSHTMLObjectElement*>(asObject(slot.slotBase()))->getConstructor(exec);
}
void JSHTMLObjectElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    if (customPut(exec, propertyName, value, slot))
        return;
    lookupPut<JSHTMLObjectElement, Base>(exec, propertyName, value, &JSHTMLObjectElementTable, this, slot);
}

void setJSHTMLObjectElementCode(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLObjectElement* imp = static_cast<HTMLObjectElement*>(static_cast<JSHTMLObjectElement*>(thisObject)->impl());
    imp->setCode(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLObjectElementAlign(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLObjectElement* imp = static_cast<HTMLObjectElement*>(static_cast<JSHTMLObjectElement*>(thisObject)->impl());
    imp->setAlign(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLObjectElementArchive(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLObjectElement* imp = static_cast<HTMLObjectElement*>(static_cast<JSHTMLObjectElement*>(thisObject)->impl());
    imp->setArchive(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLObjectElementBorder(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLObjectElement* imp = static_cast<HTMLObjectElement*>(static_cast<JSHTMLObjectElement*>(thisObject)->impl());
    imp->setBorder(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLObjectElementCodeBase(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLObjectElement* imp = static_cast<HTMLObjectElement*>(static_cast<JSHTMLObjectElement*>(thisObject)->impl());
    imp->setCodeBase(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLObjectElementCodeType(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLObjectElement* imp = static_cast<HTMLObjectElement*>(static_cast<JSHTMLObjectElement*>(thisObject)->impl());
    imp->setCodeType(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLObjectElementData(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLObjectElement* imp = static_cast<HTMLObjectElement*>(static_cast<JSHTMLObjectElement*>(thisObject)->impl());
    imp->setData(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLObjectElementDeclare(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLObjectElement* imp = static_cast<HTMLObjectElement*>(static_cast<JSHTMLObjectElement*>(thisObject)->impl());
    imp->setDeclare(value.toBoolean(exec));
}

void setJSHTMLObjectElementHeight(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLObjectElement* imp = static_cast<HTMLObjectElement*>(static_cast<JSHTMLObjectElement*>(thisObject)->impl());
    imp->setHeight(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLObjectElementHspace(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLObjectElement* imp = static_cast<HTMLObjectElement*>(static_cast<JSHTMLObjectElement*>(thisObject)->impl());
    imp->setHspace(value.toInt32(exec));
}

void setJSHTMLObjectElementName(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLObjectElement* imp = static_cast<HTMLObjectElement*>(static_cast<JSHTMLObjectElement*>(thisObject)->impl());
    imp->setName(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLObjectElementStandby(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLObjectElement* imp = static_cast<HTMLObjectElement*>(static_cast<JSHTMLObjectElement*>(thisObject)->impl());
    imp->setStandby(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLObjectElementType(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLObjectElement* imp = static_cast<HTMLObjectElement*>(static_cast<JSHTMLObjectElement*>(thisObject)->impl());
    imp->setType(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLObjectElementUseMap(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLObjectElement* imp = static_cast<HTMLObjectElement*>(static_cast<JSHTMLObjectElement*>(thisObject)->impl());
    imp->setUseMap(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLObjectElementVspace(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLObjectElement* imp = static_cast<HTMLObjectElement*>(static_cast<JSHTMLObjectElement*>(thisObject)->impl());
    imp->setVspace(value.toInt32(exec));
}

void setJSHTMLObjectElementWidth(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLObjectElement* imp = static_cast<HTMLObjectElement*>(static_cast<JSHTMLObjectElement*>(thisObject)->impl());
    imp->setWidth(valueToStringWithNullCheck(exec, value));
}

JSValue JSHTMLObjectElement::getConstructor(ExecState* exec)
{
    return getDOMConstructor<JSHTMLObjectElementConstructor>(exec);
}


}