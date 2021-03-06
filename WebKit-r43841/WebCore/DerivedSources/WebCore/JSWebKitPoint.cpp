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

#include "JSWebKitPoint.h"

#include <wtf/GetPtr.h>

#include "WebKitPoint.h"

#include <runtime/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSWebKitPoint);

/* Hash table */

static const HashTableValue JSWebKitPointTableValues[3] =
{
    { "x", DontDelete, (intptr_t)jsWebKitPointX, (intptr_t)setJSWebKitPointX },
    { "y", DontDelete, (intptr_t)jsWebKitPointY, (intptr_t)setJSWebKitPointY },
    { 0, 0, 0, 0 }
};

static const HashTable JSWebKitPointTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 1, JSWebKitPointTableValues, 0 };
#else
    { 4, 3, JSWebKitPointTableValues, 0 };
#endif

/* Hash table for prototype */

static const HashTableValue JSWebKitPointPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSWebKitPointPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSWebKitPointPrototypeTableValues, 0 };
#else
    { 1, 0, JSWebKitPointPrototypeTableValues, 0 };
#endif

const ClassInfo JSWebKitPointPrototype::s_info = { "WebKitPointPrototype", 0, &JSWebKitPointPrototypeTable, 0 };

JSObject* JSWebKitPointPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWebKitPoint>(exec, globalObject);
}

const ClassInfo JSWebKitPoint::s_info = { "WebKitPoint", 0, &JSWebKitPointTable, 0 };

JSWebKitPoint::JSWebKitPoint(PassRefPtr<Structure> structure, PassRefPtr<WebKitPoint> impl)
    : DOMObject(structure)
    , m_impl(impl)
{
}

JSWebKitPoint::~JSWebKitPoint()
{
    forgetDOMObject(*Heap::heap(this)->globalData(), m_impl.get());
}

JSObject* JSWebKitPoint::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSWebKitPointPrototype(JSWebKitPointPrototype::createStructure(globalObject->objectPrototype()));
}

bool JSWebKitPoint::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSWebKitPoint, Base>(exec, &JSWebKitPointTable, this, propertyName, slot);
}

JSValue jsWebKitPointX(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    WebKitPoint* imp = static_cast<WebKitPoint*>(static_cast<JSWebKitPoint*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->x());
}

JSValue jsWebKitPointY(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    WebKitPoint* imp = static_cast<WebKitPoint*>(static_cast<JSWebKitPoint*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->y());
}

void JSWebKitPoint::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSWebKitPoint, Base>(exec, propertyName, value, &JSWebKitPointTable, this, slot);
}

void setJSWebKitPointX(ExecState* exec, JSObject* thisObject, JSValue value)
{
    WebKitPoint* imp = static_cast<WebKitPoint*>(static_cast<JSWebKitPoint*>(thisObject)->impl());
    imp->setX(value.toFloat(exec));
}

void setJSWebKitPointY(ExecState* exec, JSObject* thisObject, JSValue value)
{
    WebKitPoint* imp = static_cast<WebKitPoint*>(static_cast<JSWebKitPoint*>(thisObject)->impl());
    imp->setY(value.toFloat(exec));
}

JSC::JSValue toJS(JSC::ExecState* exec, WebKitPoint* object)
{
    return getDOMObjectWrapper<JSWebKitPoint>(exec, object);
}
WebKitPoint* toWebKitPoint(JSC::JSValue value)
{
    return value.isObject(&JSWebKitPoint::s_info) ? static_cast<JSWebKitPoint*>(asObject(value))->impl() : 0;
}

}
