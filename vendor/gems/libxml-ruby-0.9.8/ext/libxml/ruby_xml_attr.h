/* $Id: ruby_xml_attr.h 712 2009-01-20 08:08:52Z cfis $ */

/* Please see the LICENSE file for copyright and distribution information */

#ifndef __RXML_ATTR__
#define __RXML_ATTR__

extern VALUE cXMLAttr;

void ruby_init_xml_attr(void);
VALUE rxml_attr_wrap(xmlAttrPtr xattr);
VALUE rxml_attr_value_get(VALUE self);
VALUE rxml_attr_value_set(VALUE self, VALUE val);
#endif