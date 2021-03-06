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


#if ENABLE(SVG_ANIMATION)

#include "SVGElement.h"
#include "JSSVGAnimationElement.h"

#include <wtf/GetPtr.h>

#include "JSSVGAnimatedBoolean.h"
#include "JSSVGElement.h"
#include "JSSVGStringList.h"
#include "SVGAnimationElement.h"
#include "SVGElement.h"
#include "SVGStringList.h"

#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGAnimationElement);

/* Hash table */

static const HashTableValue JSSVGAnimationElementTableValues[6] =
{
    { "targetElement", DontDelete|ReadOnly, (intptr_t)jsSVGAnimationElementTargetElement, (intptr_t)0 },
    { "requiredFeatures", DontDelete|ReadOnly, (intptr_t)jsSVGAnimationElementRequiredFeatures, (intptr_t)0 },
    { "requiredExtensions", DontDelete|ReadOnly, (intptr_t)jsSVGAnimationElementRequiredExtensions, (intptr_t)0 },
    { "systemLanguage", DontDelete|ReadOnly, (intptr_t)jsSVGAnimationElementSystemLanguage, (intptr_t)0 },
    { "externalResourcesRequired", DontDelete|ReadOnly, (intptr_t)jsSVGAnimationElementExternalResourcesRequired, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGAnimationElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 15, JSSVGAnimationElementTableValues, 0 };
#else
    { 16, 15, JSSVGAnimationElementTableValues, 0 };
#endif

/* Hash table for prototype */

static const HashTableValue JSSVGAnimationElementPrototypeTableValues[9] =
{
    { "getStartTime", DontDelete|Function, (intptr_t)jsSVGAnimationElementPrototypeFunctionGetStartTime, (intptr_t)0 },
    { "getCurrentTime", DontDelete|Function, (intptr_t)jsSVGAnimationElementPrototypeFunctionGetCurrentTime, (intptr_t)0 },
    { "getSimpleDuration", DontDelete|Function, (intptr_t)jsSVGAnimationElementPrototypeFunctionGetSimpleDuration, (intptr_t)0 },
    { "hasExtension", DontDelete|Function, (intptr_t)jsSVGAnimationElementPrototypeFunctionHasExtension, (intptr_t)1 },
    { "beginElement", DontDelete|Function, (intptr_t)jsSVGAnimationElementPrototypeFunctionBeginElement, (intptr_t)0 },
    { "beginElementAt", DontDelete|Function, (intptr_t)jsSVGAnimationElementPrototypeFunctionBeginElementAt, (intptr_t)1 },
    { "endElement", DontDelete|Function, (intptr_t)jsSVGAnimationElementPrototypeFunctionEndElement, (intptr_t)0 },
    { "endElementAt", DontDelete|Function, (intptr_t)jsSVGAnimationElementPrototypeFunctionEndElementAt, (intptr_t)1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGAnimationElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 63, JSSVGAnimationElementPrototypeTableValues, 0 };
#else
    { 17, 15, JSSVGAnimationElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGAnimationElementPrototype::s_info = { "SVGAnimationElementPrototype", 0, &JSSVGAnimationElementPrototypeTable, 0 };

JSObject* JSSVGAnimationElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGAnimationElement>(exec, globalObject);
}

bool JSSVGAnimationElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGAnimationElementPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSSVGAnimationElement::s_info = { "SVGAnimationElement", &JSSVGElement::s_info, &JSSVGAnimationElementTable, 0 };

JSSVGAnimationElement::JSSVGAnimationElement(PassRefPtr<Structure> structure, PassRefPtr<SVGAnimationElement> impl)
    : JSSVGElement(structure, impl)
{
}

JSObject* JSSVGAnimationElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGAnimationElementPrototype(JSSVGAnimationElementPrototype::createStructure(JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGAnimationElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGAnimationElement, Base>(exec, &JSSVGAnimationElementTable, this, propertyName, slot);
}

JSValue jsSVGAnimationElementTargetElement(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    SVGAnimationElement* imp = static_cast<SVGAnimationElement*>(static_cast<JSSVGAnimationElement*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->targetElement()));
}

JSValue jsSVGAnimationElementRequiredFeatures(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    SVGAnimationElement* imp = static_cast<SVGAnimationElement*>(static_cast<JSSVGAnimationElement*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->requiredFeatures()), imp);
}

JSValue jsSVGAnimationElementRequiredExtensions(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    SVGAnimationElement* imp = static_cast<SVGAnimationElement*>(static_cast<JSSVGAnimationElement*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->requiredExtensions()), imp);
}

JSValue jsSVGAnimationElementSystemLanguage(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    SVGAnimationElement* imp = static_cast<SVGAnimationElement*>(static_cast<JSSVGAnimationElement*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->systemLanguage()), imp);
}

JSValue jsSVGAnimationElementExternalResourcesRequired(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    SVGAnimationElement* imp = static_cast<SVGAnimationElement*>(static_cast<JSSVGAnimationElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedBoolean> obj = imp->externalResourcesRequiredAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValue JSC_HOST_CALL jsSVGAnimationElementPrototypeFunctionGetStartTime(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSSVGAnimationElement::s_info))
        return throwError(exec, TypeError);
    JSSVGAnimationElement* castedThisObj = static_cast<JSSVGAnimationElement*>(asObject(thisValue));
    SVGAnimationElement* imp = static_cast<SVGAnimationElement*>(castedThisObj->impl());


    JSC::JSValue result = jsNumber(exec, imp->getStartTime());
    return result;
}

JSValue JSC_HOST_CALL jsSVGAnimationElementPrototypeFunctionGetCurrentTime(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSSVGAnimationElement::s_info))
        return throwError(exec, TypeError);
    JSSVGAnimationElement* castedThisObj = static_cast<JSSVGAnimationElement*>(asObject(thisValue));
    SVGAnimationElement* imp = static_cast<SVGAnimationElement*>(castedThisObj->impl());


    JSC::JSValue result = jsNumber(exec, imp->getCurrentTime());
    return result;
}

JSValue JSC_HOST_CALL jsSVGAnimationElementPrototypeFunctionGetSimpleDuration(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSSVGAnimationElement::s_info))
        return throwError(exec, TypeError);
    JSSVGAnimationElement* castedThisObj = static_cast<JSSVGAnimationElement*>(asObject(thisValue));
    SVGAnimationElement* imp = static_cast<SVGAnimationElement*>(castedThisObj->impl());
    ExceptionCode ec = 0;


    JSC::JSValue result = jsNumber(exec, imp->getSimpleDuration(ec));
    setDOMException(exec, ec);
    return result;
}

JSValue JSC_HOST_CALL jsSVGAnimationElementPrototypeFunctionHasExtension(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSSVGAnimationElement::s_info))
        return throwError(exec, TypeError);
    JSSVGAnimationElement* castedThisObj = static_cast<JSSVGAnimationElement*>(asObject(thisValue));
    SVGAnimationElement* imp = static_cast<SVGAnimationElement*>(castedThisObj->impl());
    const UString& extension = args.at(0).toString(exec);


    JSC::JSValue result = jsBoolean(imp->hasExtension(extension));
    return result;
}

JSValue JSC_HOST_CALL jsSVGAnimationElementPrototypeFunctionBeginElement(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSSVGAnimationElement::s_info))
        return throwError(exec, TypeError);
    JSSVGAnimationElement* castedThisObj = static_cast<JSSVGAnimationElement*>(asObject(thisValue));
    SVGAnimationElement* imp = static_cast<SVGAnimationElement*>(castedThisObj->impl());
    ExceptionCode ec = 0;


    JSC::JSValue result = jsBoolean(imp->beginElement(ec));
    setDOMException(exec, ec);
    return result;
}

JSValue JSC_HOST_CALL jsSVGAnimationElementPrototypeFunctionBeginElementAt(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSSVGAnimationElement::s_info))
        return throwError(exec, TypeError);
    JSSVGAnimationElement* castedThisObj = static_cast<JSSVGAnimationElement*>(asObject(thisValue));
    SVGAnimationElement* imp = static_cast<SVGAnimationElement*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    float offset = args.at(0).toFloat(exec);


    JSC::JSValue result = jsBoolean(imp->beginElementAt(offset, ec));
    setDOMException(exec, ec);
    return result;
}

JSValue JSC_HOST_CALL jsSVGAnimationElementPrototypeFunctionEndElement(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSSVGAnimationElement::s_info))
        return throwError(exec, TypeError);
    JSSVGAnimationElement* castedThisObj = static_cast<JSSVGAnimationElement*>(asObject(thisValue));
    SVGAnimationElement* imp = static_cast<SVGAnimationElement*>(castedThisObj->impl());
    ExceptionCode ec = 0;


    JSC::JSValue result = jsBoolean(imp->endElement(ec));
    setDOMException(exec, ec);
    return result;
}

JSValue JSC_HOST_CALL jsSVGAnimationElementPrototypeFunctionEndElementAt(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSSVGAnimationElement::s_info))
        return throwError(exec, TypeError);
    JSSVGAnimationElement* castedThisObj = static_cast<JSSVGAnimationElement*>(asObject(thisValue));
    SVGAnimationElement* imp = static_cast<SVGAnimationElement*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    float offset = args.at(0).toFloat(exec);


    JSC::JSValue result = jsBoolean(imp->endElementAt(offset, ec));
    setDOMException(exec, ec);
    return result;
}


}

#endif // ENABLE(SVG_ANIMATION)
