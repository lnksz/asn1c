/*
 * This file is automatically generated by ./expr-h.pl
 * DO NOT EDIT MANUALLY, fix the ./expr-h.pl instead if necessary.
 */
#ifndef	ASN1_PARSER_EXPR_STR_H
#define	ASN1_PARSER_EXPR_STR_H

static char *asn1p_expr_type2str[] __attribute__ ((unused)) = {
	[ ASN_CONSTR_SEQUENCE ]	 = "SEQUENCE",
	[ ASN_CONSTR_CHOICE ]	 = "CHOICE",
	[ ASN_CONSTR_SET ]	 = "SET",
	[ ASN_CONSTR_SEQUENCE_OF ]	 = "SEQUENCE OF",
	[ ASN_CONSTR_SET_OF ]	 = "SET OF",
	[ ASN_CONSTR_ANY ]	 = "ANY",
	[ ASN_BASIC_BOOLEAN ]	 = "BOOLEAN",
	[ ASN_BASIC_NULL ]	 = "NULL",
	[ ASN_BASIC_INTEGER ]	 = "INTEGER",
	[ ASN_BASIC_REAL ]	 = "REAL",
	[ ASN_BASIC_ENUMERATED ]	 = "ENUMERATED",
	[ ASN_BASIC_BIT_STRING ]	 = "BIT STRING",
	[ ASN_BASIC_OCTET_STRING ]	 = "OCTET STRING",
	[ ASN_BASIC_OBJECT_IDENTIFIER ]	 = "OBJECT IDENTIFIER",
	[ ASN_BASIC_RELATIVE_OID ]	 = "RELATIVE-OID",
	[ ASN_BASIC_EXTERNAL ]	 = "EXTERNAL",
	[ ASN_BASIC_EMBEDDED_PDV ]	 = "EMBEDDED PDV",
	[ ASN_BASIC_CHARACTER_STRING ]	 = "CHARACTER STRING",
	[ ASN_BASIC_UTCTime ]	 = "UTCTime",
	[ ASN_BASIC_GeneralizedTime ]	 = "GeneralizedTime",
	[ ASN_STRING_BMPString ]	 = "BMPString",
	[ ASN_STRING_GeneralString ]	 = "GeneralString",
	[ ASN_STRING_GraphicString ]	 = "GraphicString",
	[ ASN_STRING_IA5String ]	 = "IA5String",
	[ ASN_STRING_ISO646String ]	 = "ISO646String",
	[ ASN_STRING_NumericString ]	 = "NumericString",
	[ ASN_STRING_PrintableString ]	 = "PrintableString",
	[ ASN_STRING_TeletexString ]	 = "TeletexString",
	[ ASN_STRING_T61String ]	 = "T61String",
	[ ASN_STRING_UniversalString ]	 = "UniversalString",
	[ ASN_STRING_UTF8String ]	 = "UTF8String",
	[ ASN_STRING_VideotexString ]	 = "VideotexString",
	[ ASN_STRING_VisibleString ]	 = "VisibleString",
	[ ASN_STRING_ObjectDescriptor ]	 = "ObjectDescriptor",
};

/*
 * Convert the ASN.1 expression type back into the string representation.
 */
#define	ASN_EXPR_TYPE2STR(type)					\
	(							\
	(((ssize_t)(type)) < 0					\
	|| ((size_t)(type)) >= sizeof(asn1p_expr_type2str)	\
		/ sizeof(asn1p_expr_type2str[0]))		\
		? (char *)0					\
		: asn1p_expr_type2str[(type)]			\
	)

#endif	/* ASN1_PARSER_EXPR_STR_H */
