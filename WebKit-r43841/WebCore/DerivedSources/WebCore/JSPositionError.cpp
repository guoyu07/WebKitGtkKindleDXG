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

#include "JSPositionError.h"

#include <wtf/GetPtr.h>

#include "KURL.h"
#include "PositionError.h"

#include <runtime/JSNumberCell.h>
#include <runtime/JSString.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSPositionError);

/* Hash table */

static const HashTableValue JSPositionErrorTableValues[4] =
{
    { "code", DontDelete|ReadOnly, (intptr_t)jsPositionErrorCode, (intptr_t)0 },
    { "message", DontDelete|ReadOnly, (intptr_t)jsPositionErrorMessage, (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsPositionErrorConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSPositionErrorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 15, JSPositionErrorTableValues, 0 };
#else
    { 9, 7, JSPositionErrorTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSPositionErrorConstructorTableValues[5] =
{
    { "UNKNOWN_ERROR", DontDelete|ReadOnly, (intptr_t)jsPositionErrorUNKNOWN_ERROR, (intptr_t)0 },
    { "PERMISSION_DENIED", DontDelete|ReadOnly, (intptr_t)jsPositionErrorPERMISSION_DENIED, (intptr_t)0 },
    { "POSITION_UNAVAILABLE", DontDelete|ReadOnly, (intptr_t)jsPositionErrorPOSITION_UNAVAILABLE, (intptr_t)0 },
    { "TIMEOUT", DontDelete|ReadOnly, (intptr_t)jsPositionErrorTIMEOUT, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSPositionErrorConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 127, JSPositionErrorConstructorTableValues, 0 };
#else
    { 10, 7, JSPositionErrorConstructorTableValues, 0 };
#endif

class JSPositionErrorConstructor : public DOMObject {
public:
    JSPositionErrorConstructor(ExecState* exec)
        : DOMObject(JSPositionErrorConstructor::createStructure(exec->lexicalGlobalObject()->objectPrototype()))
    {
        putDirect(exec->propertyNames().prototype, JSPositionErrorPrototype::self(exec, exec->lexicalGlobalObject()), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValue proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, ImplementsHasInstance)); 
    }
};

const ClassInfo JSPositionErrorConstructor::s_info = { "PositionErrorConstructor", 0, &JSPositionErrorConstructorTable, 0 };

bool JSPositionErrorConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSPositionErrorConstructor, DOMObject>(exec, &JSPositionErrorConstructorTable, this, propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSPositionErrorPrototypeTableValues[5] =
{
    { "UNKNOWN_ERROR", DontDelete|ReadOnly, (intptr_t)jsPositionErrorUNKNOWN_ERROR, (intptr_t)0 },
    { "PERMISSION_DENIED", DontDelete|ReadOnly, (intptr_t)jsPositionErrorPERMISSION_DENIED, (intptr_t)0 },
    { "POSITION_UNAVAILABLE", DontDelete|ReadOnly, (intptr_t)jsPositionErrorPOSITION_UNAVAILABLE, (intptr_t)0 },
    { "TIMEOUT", DontDelete|ReadOnly, (intptr_t)jsPositionErrorTIMEOUT, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSPositionErrorPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 127, JSPositionErrorPrototypeTableValues, 0 };
#else
    { 10, 7, JSPositionErrorPrototypeTableValues, 0 };
#endif

const ClassInfo JSPositionErrorPrototype::s_info = { "PositionErrorPrototype", 0, &JSPositionErrorPrototypeTable, 0 };

JSObject* JSPositionErrorPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSPositionError>(exec, globalObject);
}

bool JSPositionErrorPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSPositionErrorPrototype, JSObject>(exec, &JSPositionErrorPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSPositionError::s_info = { "PositionError", 0, &JSPositionErrorTable, 0 };

JSPositionError::JSPositionError(PassRefPtr<Structure> structure, PassRefPtr<PositionError> impl)
    : DOMObject(structure)
    , m_impl(impl)
{
}

JSPositionError::~JSPositionError()
{
    forgetDOMObject(*Heap::heap(this)->globalData(), m_impl.get());
}

JSObject* JSPositionError::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSPositionErrorPrototype(JSPositionErrorPrototype::createStructure(globalObject->objectPrototype()));
}

bool JSPositionError::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSPositionError, Base>(exec, &JSPositionErrorTable, this, propertyName, slot);
}

JSValue jsPositionErrorCode(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    PositionError* imp = static_cast<PositionError*>(static_cast<JSPositionError*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->code());
}

JSValue jsPositionErrorMessage(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    PositionError* imp = static_cast<PositionError*>(static_cast<JSPositionError*>(asObject(slot.slotBase()))->impl());
    return jsString(exec, imp->message());
}

JSValue jsPositionErrorConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    return static_cast<JSPositionError*>(asObject(slot.slotBase()))->getConstructor(exec);
}
JSValue JSPositionError::getConstructor(ExecState* exec)
{
    return getDOMConstructor<JSPositionErrorConstructor>(exec);
}

// Constant getters

JSValue jsPositionErrorUNKNOWN_ERROR(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(0));
}

JSValue jsPositionErrorPERMISSION_DENIED(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(1));
}

JSValue jsPositionErrorPOSITION_UNAVAILABLE(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(2));
}

JSValue jsPositionErrorTIMEOUT(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(3));
}

JSC::JSValue toJS(JSC::ExecState* exec, PositionError* object)
{
    return getDOMObjectWrapper<JSPositionError>(exec, object);
}
PositionError* toPositionError(JSC::JSValue value)
{
    return value.isObject(&JSPositionError::s_info) ? static_cast<JSPositionError*>(asObject(value))->impl() : 0;
}

}