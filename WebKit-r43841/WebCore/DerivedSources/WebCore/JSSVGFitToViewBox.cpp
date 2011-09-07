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
#include "JSSVGFitToViewBox.h"

#include <wtf/GetPtr.h>

#include "JSSVGAnimatedPreserveAspectRatio.h"
#include "JSSVGAnimatedRect.h"
#include "SVGFitToViewBox.h"


using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGFitToViewBox);

/* Hash table */

static const HashTableValue JSSVGFitToViewBoxTableValues[3] =
{
    { "viewBox", DontDelete|ReadOnly, (intptr_t)jsSVGFitToViewBoxViewBox, (intptr_t)0 },
    { "preserveAspectRatio", DontDelete|ReadOnly, (intptr_t)jsSVGFitToViewBoxPreserveAspectRatio, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGFitToViewBoxTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 15, JSSVGFitToViewBoxTableValues, 0 };
#else
    { 5, 3, JSSVGFitToViewBoxTableValues, 0 };
#endif

/* Hash table for prototype */

static const HashTableValue JSSVGFitToViewBoxPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGFitToViewBoxPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGFitToViewBoxPrototypeTableValues, 0 };
#else
    { 1, 0, JSSVGFitToViewBoxPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGFitToViewBoxPrototype::s_info = { "SVGFitToViewBoxPrototype", 0, &JSSVGFitToViewBoxPrototypeTable, 0 };

JSObject* JSSVGFitToViewBoxPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFitToViewBox>(exec, globalObject);
}

const ClassInfo JSSVGFitToViewBox::s_info = { "SVGFitToViewBox", 0, &JSSVGFitToViewBoxTable, 0 };

JSSVGFitToViewBox::JSSVGFitToViewBox(PassRefPtr<Structure> structure, PassRefPtr<SVGFitToViewBox> impl, SVGElement* context)
    : DOMObject(structure)
    , m_context(context)
    , m_impl(impl)
{
}

JSSVGFitToViewBox::~JSSVGFitToViewBox()
{
    forgetDOMObject(*Heap::heap(this)->globalData(), m_impl.get());
}

JSObject* JSSVGFitToViewBox::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGFitToViewBoxPrototype(JSSVGFitToViewBoxPrototype::createStructure(globalObject->objectPrototype()));
}

bool JSSVGFitToViewBox::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFitToViewBox, Base>(exec, &JSSVGFitToViewBoxTable, this, propertyName, slot);
}

JSValue jsSVGFitToViewBoxViewBox(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    SVGFitToViewBox* imp = static_cast<SVGFitToViewBox*>(static_cast<JSSVGFitToViewBox*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedRect> obj = imp->viewBoxAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValue jsSVGFitToViewBoxPreserveAspectRatio(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    SVGFitToViewBox* imp = static_cast<SVGFitToViewBox*>(static_cast<JSSVGFitToViewBox*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedPreserveAspectRatio> obj = imp->preserveAspectRatioAnimated();
    return toJS(exec, obj.get(), imp);
}

JSC::JSValue toJS(JSC::ExecState* exec, SVGFitToViewBox* object, SVGElement* context)
{
    return getDOMObjectWrapper<JSSVGFitToViewBox>(exec, object, context);
}
SVGFitToViewBox* toSVGFitToViewBox(JSC::JSValue value)
{
    return value.isObject(&JSSVGFitToViewBox::s_info) ? static_cast<JSSVGFitToViewBox*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(SVG)