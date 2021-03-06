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

#ifndef JSDocument_h
#define JSDocument_h

#include "JSNode.h"
#include <runtime/Lookup.h>
#include <wtf/AlwaysInline.h>
#include "Document.h"
namespace WebCore {

class Document;

class JSDocument : public JSNode {
    typedef JSNode Base;
public:
    JSDocument(PassRefPtr<JSC::Structure>, PassRefPtr<Document>);
    virtual ~JSDocument();
    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValue, JSC::PutPropertySlot&);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType));
    }

    virtual void mark();

    static JSC::JSValue getConstructor(JSC::ExecState*);

    // Custom attributes
    JSC::JSValue location(JSC::ExecState*) const;
    void setLocation(JSC::ExecState*, JSC::JSValue);
    Document* impl() const
    {
        return static_cast<Document*>(Base::impl());
    }
};

ALWAYS_INLINE bool JSDocument::getOwnPropertySlot(JSC::ExecState* exec, const JSC::Identifier& propertyName, JSC::PropertySlot& slot)
{
    return JSC::getStaticValueSlot<JSDocument, Base>(exec, s_info.staticPropHashTable, this, propertyName, slot);
}

JSC::JSValue toJS(JSC::ExecState*, Document*);
Document* toDocument(JSC::JSValue);

class JSDocumentPrototype : public JSC::JSObject {
    typedef JSC::JSObject Base;
public:
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType));
    }
    JSDocumentPrototype(PassRefPtr<JSC::Structure> structure) : JSC::JSObject(structure) { }
};

// Functions

JSC::JSValue JSC_HOST_CALL jsDocumentPrototypeFunctionCreateElement(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsDocumentPrototypeFunctionCreateDocumentFragment(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsDocumentPrototypeFunctionCreateTextNode(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsDocumentPrototypeFunctionCreateComment(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsDocumentPrototypeFunctionCreateCDATASection(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsDocumentPrototypeFunctionCreateProcessingInstruction(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsDocumentPrototypeFunctionCreateAttribute(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsDocumentPrototypeFunctionCreateEntityReference(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsDocumentPrototypeFunctionGetElementsByTagName(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsDocumentPrototypeFunctionImportNode(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsDocumentPrototypeFunctionCreateElementNS(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsDocumentPrototypeFunctionCreateAttributeNS(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsDocumentPrototypeFunctionGetElementsByTagNameNS(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsDocumentPrototypeFunctionGetElementById(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsDocumentPrototypeFunctionAdoptNode(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsDocumentPrototypeFunctionCreateEvent(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsDocumentPrototypeFunctionCreateRange(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsDocumentPrototypeFunctionCreateNodeIterator(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsDocumentPrototypeFunctionCreateTreeWalker(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsDocumentPrototypeFunctionGetOverrideStyle(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsDocumentPrototypeFunctionExecCommand(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsDocumentPrototypeFunctionQueryCommandEnabled(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsDocumentPrototypeFunctionQueryCommandIndeterm(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsDocumentPrototypeFunctionQueryCommandState(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsDocumentPrototypeFunctionQueryCommandSupported(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsDocumentPrototypeFunctionQueryCommandValue(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsDocumentPrototypeFunctionGetElementsByName(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsDocumentPrototypeFunctionElementFromPoint(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsDocumentPrototypeFunctionGetSelection(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsDocumentPrototypeFunctionGetCSSCanvasContext(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsDocumentPrototypeFunctionGetElementsByClassName(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsDocumentPrototypeFunctionQuerySelector(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsDocumentPrototypeFunctionQuerySelectorAll(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
// Attributes

JSC::JSValue jsDocumentDoctype(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsDocumentImplementation(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsDocumentDocumentElement(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsDocumentInputEncoding(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsDocumentXMLEncoding(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsDocumentXMLVersion(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSDocumentXMLVersion(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentXMLStandalone(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSDocumentXMLStandalone(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentDocumentURI(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSDocumentDocumentURI(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentDefaultView(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsDocumentStyleSheets(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsDocumentTitle(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSDocumentTitle(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentReferrer(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsDocumentDomain(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSDocumentDomain(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentURL(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsDocumentCookie(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSDocumentCookie(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentBody(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSDocumentBody(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentImages(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsDocumentApplets(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsDocumentLinks(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsDocumentForms(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsDocumentAnchors(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsDocumentLastModified(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsDocumentLocation(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSDocumentLocation(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentCharset(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSDocumentCharset(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentDefaultCharset(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsDocumentReadyState(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsDocumentCharacterSet(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsDocumentPreferredStylesheetSet(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsDocumentSelectedStylesheetSet(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSDocumentSelectedStylesheetSet(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentConstructor(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);

} // namespace WebCore

#endif
