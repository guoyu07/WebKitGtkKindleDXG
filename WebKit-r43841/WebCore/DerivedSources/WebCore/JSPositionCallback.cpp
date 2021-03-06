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

#include "JSPositionCallback.h"

#include <wtf/GetPtr.h>

#include "JSGeoposition.h"
#include "PositionCallback.h"

#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSPositionCallback);

/* Hash table */

static const HashTableValue JSPositionCallbackTableValues[2] =
{
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsPositionCallbackConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSPositionCallbackTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSPositionCallbackTableValues, 0 };
#else
    { 2, 1, JSPositionCallbackTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSPositionCallbackConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSPositionCallbackConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSPositionCallbackConstructorTableValues, 0 };
#else
    { 1, 0, JSPositionCallbackConstructorTableValues, 0 };
#endif

class JSPositionCallbackConstructor : public DOMObject {
public:
    JSPositionCallbackConstructor(ExecState* exec)
        : DOMObject(JSPositionCallbackConstructor::createStructure(exec->lexicalGlobalObject()->objectPrototype()))
    {
        putDirect(exec->propertyNames().prototype, JSPositionCallbackPrototype::self(exec, exec->lexicalGlobalObject()), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValue proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, ImplementsHasInstance)); 
    }
};

const ClassInfo JSPositionCallbackConstructor::s_info = { "PositionCallbackConstructor", 0, &JSPositionCallbackConstructorTable, 0 };

bool JSPositionCallbackConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSPositionCallbackConstructor, DOMObject>(exec, &JSPositionCallbackConstructorTable, this, propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSPositionCallbackPrototypeTableValues[2] =
{
    { "handleEvent", DontDelete|Function, (intptr_t)jsPositionCallbackPrototypeFunctionHandleEvent, (intptr_t)1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSPositionCallbackPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSPositionCallbackPrototypeTableValues, 0 };
#else
    { 2, 1, JSPositionCallbackPrototypeTableValues, 0 };
#endif

const ClassInfo JSPositionCallbackPrototype::s_info = { "PositionCallbackPrototype", 0, &JSPositionCallbackPrototypeTable, 0 };

JSObject* JSPositionCallbackPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSPositionCallback>(exec, globalObject);
}

bool JSPositionCallbackPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSPositionCallbackPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSPositionCallback::s_info = { "PositionCallback", 0, &JSPositionCallbackTable, 0 };

JSPositionCallback::JSPositionCallback(PassRefPtr<Structure> structure, PassRefPtr<PositionCallback> impl)
    : DOMObject(structure)
    , m_impl(impl)
{
}

JSPositionCallback::~JSPositionCallback()
{
    forgetDOMObject(*Heap::heap(this)->globalData(), m_impl.get());
}

JSObject* JSPositionCallback::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSPositionCallbackPrototype(JSPositionCallbackPrototype::createStructure(globalObject->objectPrototype()));
}

bool JSPositionCallback::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSPositionCallback, Base>(exec, &JSPositionCallbackTable, this, propertyName, slot);
}

JSValue jsPositionCallbackConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    return static_cast<JSPositionCallback*>(asObject(slot.slotBase()))->getConstructor(exec);
}
JSValue JSPositionCallback::getConstructor(ExecState* exec)
{
    return getDOMConstructor<JSPositionCallbackConstructor>(exec);
}

JSValue JSC_HOST_CALL jsPositionCallbackPrototypeFunctionHandleEvent(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSPositionCallback::s_info))
        return throwError(exec, TypeError);
    JSPositionCallback* castedThisObj = static_cast<JSPositionCallback*>(asObject(thisValue));
    PositionCallback* imp = static_cast<PositionCallback*>(castedThisObj->impl());
    Geoposition* position = toGeoposition(args.at(0));

    imp->handleEvent(position);
    return jsUndefined();
}

JSC::JSValue toJS(JSC::ExecState* exec, PositionCallback* object)
{
    return getDOMObjectWrapper<JSPositionCallback>(exec, object);
}
PositionCallback* toPositionCallback(JSC::JSValue value)
{
    return value.isObject(&JSPositionCallback::s_info) ? static_cast<JSPositionCallback*>(asObject(value))->impl() : 0;
}

}
