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


#if ENABLE(SVG)

#include "SVGElement.h"
#include "JSSVGLocatable.h"

#include <wtf/GetPtr.h>

#include "JSSVGElement.h"
#include "JSSVGMatrix.h"
#include "JSSVGRect.h"
#include "SVGElement.h"
#include "SVGLocatable.h"

#include <runtime/Error.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGLocatable);

/* Hash table */

static const HashTableValue JSSVGLocatableTableValues[3] =
{
    { "nearestViewportElement", DontDelete|ReadOnly, (intptr_t)jsSVGLocatableNearestViewportElement, (intptr_t)0 },
    { "farthestViewportElement", DontDelete|ReadOnly, (intptr_t)jsSVGLocatableFarthestViewportElement, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGLocatableTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 3, JSSVGLocatableTableValues, 0 };
#else
    { 4, 3, JSSVGLocatableTableValues, 0 };
#endif

/* Hash table for prototype */

static const HashTableValue JSSVGLocatablePrototypeTableValues[5] =
{
    { "getBBox", DontDelete|Function, (intptr_t)jsSVGLocatablePrototypeFunctionGetBBox, (intptr_t)0 },
    { "getCTM", DontDelete|Function, (intptr_t)jsSVGLocatablePrototypeFunctionGetCTM, (intptr_t)0 },
    { "getScreenCTM", DontDelete|Function, (intptr_t)jsSVGLocatablePrototypeFunctionGetScreenCTM, (intptr_t)0 },
    { "getTransformToElement", DontDelete|Function, (intptr_t)jsSVGLocatablePrototypeFunctionGetTransformToElement, (intptr_t)1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGLocatablePrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 3, JSSVGLocatablePrototypeTableValues, 0 };
#else
    { 8, 7, JSSVGLocatablePrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGLocatablePrototype::s_info = { "SVGLocatablePrototype", 0, &JSSVGLocatablePrototypeTable, 0 };

JSObject* JSSVGLocatablePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGLocatable>(exec, globalObject);
}

bool JSSVGLocatablePrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGLocatablePrototypeTable, this, propertyName, slot);
}

const ClassInfo JSSVGLocatable::s_info = { "SVGLocatable", 0, &JSSVGLocatableTable, 0 };

JSSVGLocatable::JSSVGLocatable(PassRefPtr<Structure> structure, PassRefPtr<SVGLocatable> impl, SVGElement* context)
    : DOMObject(structure)
    , m_context(context)
    , m_impl(impl)
{
}

JSSVGLocatable::~JSSVGLocatable()
{
    forgetDOMObject(*Heap::heap(this)->globalData(), m_impl.get());
}

JSObject* JSSVGLocatable::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGLocatablePrototype(JSSVGLocatablePrototype::createStructure(globalObject->objectPrototype()));
}

bool JSSVGLocatable::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGLocatable, Base>(exec, &JSSVGLocatableTable, this, propertyName, slot);
}

JSValue jsSVGLocatableNearestViewportElement(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    SVGLocatable* imp = static_cast<SVGLocatable*>(static_cast<JSSVGLocatable*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->nearestViewportElement()));
}

JSValue jsSVGLocatableFarthestViewportElement(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    SVGLocatable* imp = static_cast<SVGLocatable*>(static_cast<JSSVGLocatable*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->farthestViewportElement()));
}

JSValue JSC_HOST_CALL jsSVGLocatablePrototypeFunctionGetBBox(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSSVGLocatable::s_info))
        return throwError(exec, TypeError);
    JSSVGLocatable* castedThisObj = static_cast<JSSVGLocatable*>(asObject(thisValue));
    SVGLocatable* imp = static_cast<SVGLocatable*>(castedThisObj->impl());


    JSC::JSValue result = toJS(exec, JSSVGStaticPODTypeWrapper<FloatRect>::create(imp->getBBox()).get(), castedThisObj->context());
    return result;
}

JSValue JSC_HOST_CALL jsSVGLocatablePrototypeFunctionGetCTM(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSSVGLocatable::s_info))
        return throwError(exec, TypeError);
    JSSVGLocatable* castedThisObj = static_cast<JSSVGLocatable*>(asObject(thisValue));
    SVGLocatable* imp = static_cast<SVGLocatable*>(castedThisObj->impl());


    JSC::JSValue result = toJS(exec, JSSVGStaticPODTypeWrapper<TransformationMatrix>::create(imp->getCTM()).get(), castedThisObj->context());
    return result;
}

JSValue JSC_HOST_CALL jsSVGLocatablePrototypeFunctionGetScreenCTM(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSSVGLocatable::s_info))
        return throwError(exec, TypeError);
    JSSVGLocatable* castedThisObj = static_cast<JSSVGLocatable*>(asObject(thisValue));
    SVGLocatable* imp = static_cast<SVGLocatable*>(castedThisObj->impl());


    JSC::JSValue result = toJS(exec, JSSVGStaticPODTypeWrapper<TransformationMatrix>::create(imp->getScreenCTM()).get(), castedThisObj->context());
    return result;
}

JSValue JSC_HOST_CALL jsSVGLocatablePrototypeFunctionGetTransformToElement(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSSVGLocatable::s_info))
        return throwError(exec, TypeError);
    JSSVGLocatable* castedThisObj = static_cast<JSSVGLocatable*>(asObject(thisValue));
    SVGLocatable* imp = static_cast<SVGLocatable*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    SVGElement* element = toSVGElement(args.at(0));


    JSC::JSValue result = toJS(exec, JSSVGStaticPODTypeWrapper<TransformationMatrix>::create(imp->getTransformToElement(element, ec)).get(), castedThisObj->context());
    setDOMException(exec, ec);
    return result;
}

JSC::JSValue toJS(JSC::ExecState* exec, SVGLocatable* object, SVGElement* context)
{
    return getDOMObjectWrapper<JSSVGLocatable>(exec, object, context);
}
SVGLocatable* toSVGLocatable(JSC::JSValue value)
{
    return value.isObject(&JSSVGLocatable::s_info) ? static_cast<JSSVGLocatable*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(SVG)
