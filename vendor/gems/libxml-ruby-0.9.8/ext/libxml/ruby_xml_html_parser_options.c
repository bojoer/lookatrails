/* $Id: ruby_xml_html_parser.c 710 2009-01-20 05:30:51Z cfis $ */

/* Please see the LICENSE file for copyright and distribution information */

#include "ruby_libxml.h"


/* Document-class: LibXML::XML::HTMLParserOptions
 *
 * Options that control the operation of the HTMLParser.  The easiest
 * way to set a parser's options is to use the methods
 * XML::HTMLParser.file, XML::HTMLParser.io or XML::HTMLParser.string.
 * For additional control, see XML::HTMLParser::Context#options=.
*/

VALUE mXMLHtmlParserOptions;


// Rdoc needs to know
#ifdef RDOC_NEVER_DEFINED
mLibXML = rb_define_module("LibXML");
mXML = rb_define_module_under(mLibXML, "XML");
cXMLHtmlParser = rb_define_class_under(mXML, "HTMLParser", rb_cObject);
#endif

void ruby_init_html_parser_options(void)
{
  mXMLHtmlParserOptions = rb_define_module_under(cXMLHtmlParser, "Options");

#if LIBXML_VERSION >= 20621
  /* Relaxed parsing */
  rb_define_const(mXMLHtmlParserOptions, "RECOVER", INT2NUM(HTML_PARSE_RECOVER)); 
#endif
  /* suppress error reports */
  rb_define_const(mXMLHtmlParserOptions, "NOERROR", INT2NUM(HTML_PARSE_NOERROR)); 
  /* suppress warning reports */
  rb_define_const(mXMLHtmlParserOptions, "NOWARNING", INT2NUM(HTML_PARSE_NOWARNING));
  /* pedantic error reporting */
  rb_define_const(mXMLHtmlParserOptions, "PEDANTIC", INT2NUM(HTML_PARSE_PEDANTIC)); 
  /* remove blank nodes */
  rb_define_const(mXMLHtmlParserOptions, "NOBLANKS", INT2NUM(HTML_PARSE_NOBLANKS)); 
#if LIBXML_VERSION >= 20621
  /* Forbid network access */
  rb_define_const(mXMLHtmlParserOptions, "NONET", INT2NUM(HTML_PARSE_NONET)); 
  /* compact small text nodes */
  rb_define_const(mXMLHtmlParserOptions, "COMPACT", INT2NUM(HTML_PARSE_COMPACT));
#endif
}
