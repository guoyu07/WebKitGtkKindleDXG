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

#include "JSOverflowEvent.h"

#include <wtf/GetPtr.h>

#include "OverflowEvent.h"

#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSOverflowEvent);

/* Hash table */

static const HashTableValue JSOverflowEventTableValues[5] =
{
    { "orient", DontDelete|ReadOnly, (intptr_t)jsOverflowEventOrient, (intptr_t)0 },
    { "horizontalOverflow", DontDelete|ReadOnly, (intptr_t)jsOverflowEventHorizontalOverflow, (intptr_t)0 },
    { "verticalOverflow", DontDelete|ReadOnly, (intptr_t)jsOverflowEventVerticalOverflow, (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsOverflowEventConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSOverflowEventTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 31, JSOverflowEventTableValues, 0 };
#else
    { 9, 7, JSOverflowEventTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSOverflowEventConstructorTableValues[4] =
{
    { "HORIZONTAL", DontDelete|ReadOnly, (intptr_t)jsOverflowEventHORIZONTAL, (intptr_t)0 },
    { "VERTICAL", DontDelete|ReadOnly, (intptr_t)jsOverflowEventVERTICAL, (intptr_t)0 },
    { "BOTH", DontDelete|ReadOnly, (intptr_t)jsOverflowEventBOTH, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSOverflowEventConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 15, JSOverflowEventConstructorTableValues, 0 };
#else
    { 9, 7, JSOverflowEventConstructorTableValues, 0 };
#endif

class JSOverflowEventConstructor : public DOMObject {
public:
    JSOverflowEventConstructor(ExecState* exec)
        : DOMObject(JSOverflowEventConstructor::createStructure(exec->lexicalGlobalObject()->objectPrototype()))
    {
        putDirect(exec->propertyNames().prototype, JSOverflowEventPrototype::self(exec, exec->lexicalGlobalObject()), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValue proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, ImplementsHasInstance)); 
    }
};

const ClassInfo JSOverflowEventConstructor::s_info = { "OverflowEventConstructor", 0, &JSOverflowEventConstructorTable, 0 };

bool JSOverflowEventConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSOverflowEventConstructor, DOMObject>(exec, &JSOverflowEventConstructorTable, this, propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSOverflowEventPrototypeTableValues[5] =
{
    { "HORIZONTAL", DontDelete|ReadOnly, (intptr_t)jsOverflowEventHORIZONTAL, (intptr_t)0 },
    { "VERTICAL", DontDelete|ReadOnly, (intptr_t)jsOverflowEventVERTICAL, (intptr_t)0 },
    { "BOTH", DontDelete|ReadOnly, (intptr_t)jsOverflowEventBOTH, (intptr_t)0 },
    { "initOverflowEvent", DontDelete|Function, (intptr_t)jsOverflowEventPrototypeFunctionInitOverflowEvent, (intptr_t)3 },
    { 0, 0, 0, 0 }
};

static const HashTable JSOverflowEventPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 15, JSOverflowEventPrototypeTableValues, 0 };
#else
    { 9, 7, JSOverflowEventPrototypeTableValues, 0 };
#endif

const ClassInfo JSOverflowEventPrototype::s_info = { "OverflowEventPrototype", 0, &JSOverflowEventPrototypeTable, 0 };

JSObject* JSOverflowEventPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSOverflowEvent>(exec, globalObject);
}

bool JSOverflowEventPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSOverflowEventPrototype, JSObject>(exec, &JSOverflowEventPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSOverflowEvent::s_info = { "OverflowEvent", &JSEvent::s_info, &JSOverflowEventTable, 0 };

JSOverflowEvent::JSOverflowEvent(PassRefPtr<Structure> structure, PassRefPtr<OverflowEvent> impl)
    : JSEvent(structure, impl)
{
}

JSObject* JSOverflowEvent::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSOverflowEventPrototype(JSOverflowEventPrototype::createStructure(JSEventPrototype::self(exec, globalObject)));
}

bool JSOverflowEvent::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSOverflowEvent, Base>(exec, &JSOverflowEventTable, this, propertyName, slot);
}

JSValue jsOverflowEventOrient(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    OverflowEvent* imp = static_cast<OverflowEvent*>(static_cast<JSOverflowEvent*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->orient());
}

JSValue jsOverflowEventHorizontalOverflow(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    OverflowEvent* imp = static_cast<OverflowEvent*>(static_cast<JSOverflowEvent*>(asObject(slot.slotBase()))->impl());
    return jsBoolean(imp->horizontalOverflow());
}

JSValue jsOverflowEventVerticalOverflow(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    OverflowEvent* imp = static_cast<OverflowEvent*>(static_cast<JSOverflowEvent*>(asObject(slot.slotBase()))->impl());
    return jsBoolean(imp->verticalOverflow());
}

JSValue jsOverflowEventConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    return static_cast<JSOverflowEvent*>(asObject(slot.slotBase()))->getConstructor(exec);
}
JSValue JSOverflowEvent::getConstructor(ExecState* exec)
{
    return getDOMConstructor<JSOverflowEventConstructor>(exec);
}

JSValue JSC_HOST_CALL jsOverflowEventPrototypeFunctionInitOverflowEvent(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSOverflowEvent::s_info))
        return throwError(exec, TypeError);
    JSOverflowEvent* castedThisObj = static_cast<JSOverflowEvent*>(asObject(thisValue));
    OverflowEvent* imp = static_cast<OverflowEvent*>(castedThisObj->impl());
    unsigned short orient = args.at(0).toInt32(exec);
    bool horizontalOverflow = args.at(1).toBoolean(exec);
    bool verticalOverflow = args.at(2).toBoolean(exec);

    imp->initOverflowEvent(orient, horizontalOverflow, verticalOverflow);
    return jsUndefined();
}

// Constant getters

JSValue jsOverflowEventHORIZONTAL(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(0));
}

JSValue jsOverflowEventVERTICAL(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(1));
}

JSValue jsOverflowEventBOTH(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(2));
}


}