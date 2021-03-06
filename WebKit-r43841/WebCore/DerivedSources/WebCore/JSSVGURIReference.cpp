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
#include "JSSVGURIReference.h"

#include <wtf/GetPtr.h>

#include "JSSVGAnimatedString.h"
#include "SVGURIReference.h"


using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGURIReference);

/* Hash table */

static const HashTableValue JSSVGURIReferenceTableValues[2] =
{
    { "href", DontDelete|ReadOnly, (intptr_t)jsSVGURIReferenceHref, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGURIReferenceTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGURIReferenceTableValues, 0 };
#else
    { 2, 1, JSSVGURIReferenceTableValues, 0 };
#endif

/* Hash table for prototype */

static const HashTableValue JSSVGURIReferencePrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGURIReferencePrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGURIReferencePrototypeTableValues, 0 };
#else
    { 1, 0, JSSVGURIReferencePrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGURIReferencePrototype::s_info = { "SVGURIReferencePrototype", 0, &JSSVGURIReferencePrototypeTable, 0 };

JSObject* JSSVGURIReferencePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGURIReference>(exec, globalObject);
}

const ClassInfo JSSVGURIReference::s_info = { "SVGURIReference", 0, &JSSVGURIReferenceTable, 0 };

JSSVGURIReference::JSSVGURIReference(PassRefPtr<Structure> structure, PassRefPtr<SVGURIReference> impl, SVGElement* context)
    : DOMObject(structure)
    , m_context(context)
    , m_impl(impl)
{
}

JSSVGURIReference::~JSSVGURIReference()
{
    forgetDOMObject(*Heap::heap(this)->globalData(), m_impl.get());
}

JSObject* JSSVGURIReference::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGURIReferencePrototype(JSSVGURIReferencePrototype::createStructure(globalObject->objectPrototype()));
}

bool JSSVGURIReference::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGURIReference, Base>(exec, &JSSVGURIReferenceTable, this, propertyName, slot);
}

JSValue jsSVGURIReferenceHref(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    SVGURIReference* imp = static_cast<SVGURIReference*>(static_cast<JSSVGURIReference*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedString> obj = imp->hrefAnimated();
    return toJS(exec, obj.get(), imp);
}

JSC::JSValue toJS(JSC::ExecState* exec, SVGURIReference* object, SVGElement* context)
{
    return getDOMObjectWrapper<JSSVGURIReference>(exec, object, context);
}
SVGURIReference* toSVGURIReference(JSC::JSValue value)
{
    return value.isObject(&JSSVGURIReference::s_info) ? static_cast<JSSVGURIReference*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(SVG)
