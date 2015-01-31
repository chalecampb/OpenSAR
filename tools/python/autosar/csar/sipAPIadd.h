/*
 * Internal module API header file.
 *
 * Generated by SIP 4.14.2 on Sat Jun 21 20:13:53 2014
 */

#ifndef _addAPI_H
#define _addAPI_H


#include <sip.h>

/*
 * Convenient names to refer to various strings defined in this module.
 * Only the class names are part of the public API.
 */
#define sipNameNr_add 0
#define sipName_add &sipStrings_add[0]

#define sipMalloc                   sipAPI_add->api_malloc
#define sipFree                     sipAPI_add->api_free
#define sipBuildResult              sipAPI_add->api_build_result
#define sipCallMethod               sipAPI_add->api_call_method
#define sipCallErrorHandler         sipAPI_add->api_call_error_handler
#define sipParseResultEx            sipAPI_add->api_parse_result_ex
#define sipParseResult              sipAPI_add->api_parse_result
#define sipParseArgs                sipAPI_add->api_parse_args
#define sipParseKwdArgs             sipAPI_add->api_parse_kwd_args
#define sipParsePair                sipAPI_add->api_parse_pair
#define sipCommonDtor               sipAPI_add->api_common_dtor
#define sipConvertFromSequenceIndex sipAPI_add->api_convert_from_sequence_index
#define sipConvertFromVoidPtr       sipAPI_add->api_convert_from_void_ptr
#define sipConvertToVoidPtr         sipAPI_add->api_convert_to_void_ptr
#define sipAddException             sipAPI_add->api_add_exception
#define sipNoFunction               sipAPI_add->api_no_function
#define sipNoMethod                 sipAPI_add->api_no_method
#define sipAbstractMethod           sipAPI_add->api_abstract_method
#define sipBadClass                 sipAPI_add->api_bad_class
#define sipBadCatcherResult         sipAPI_add->api_bad_catcher_result
#define sipBadCallableArg           sipAPI_add->api_bad_callable_arg
#define sipBadOperatorArg           sipAPI_add->api_bad_operator_arg
#define sipTrace                    sipAPI_add->api_trace
#define sipTransferBack             sipAPI_add->api_transfer_back
#define sipTransferTo               sipAPI_add->api_transfer_to
#define sipTransferBreak            sipAPI_add->api_transfer_break
#define sipSimpleWrapper_Type       sipAPI_add->api_simplewrapper_type
#define sipWrapper_Type             sipAPI_add->api_wrapper_type
#define sipWrapperType_Type         sipAPI_add->api_wrappertype_type
#define sipVoidPtr_Type             sipAPI_add->api_voidptr_type
#define sipGetPyObject              sipAPI_add->api_get_pyobject
#define sipGetAddress               sipAPI_add->api_get_address
#define sipGetCppPtr                sipAPI_add->api_get_cpp_ptr
#define sipGetComplexCppPtr         sipAPI_add->api_get_complex_cpp_ptr
#define sipIsPyMethod               sipAPI_add->api_is_py_method
#define sipCallHook                 sipAPI_add->api_call_hook
#define sipStartThread              sipAPI_add->api_start_thread
#define sipEndThread                sipAPI_add->api_end_thread
#define sipConnectRx                sipAPI_add->api_connect_rx
#define sipDisconnectRx             sipAPI_add->api_disconnect_rx
#define sipRaiseUnknownException    sipAPI_add->api_raise_unknown_exception
#define sipRaiseTypeException       sipAPI_add->api_raise_type_exception
#define sipBadLengthForSlice        sipAPI_add->api_bad_length_for_slice
#define sipAddTypeInstance          sipAPI_add->api_add_type_instance
#define sipFreeSipslot              sipAPI_add->api_free_sipslot
#define sipSameSlot                 sipAPI_add->api_same_slot
#define sipPySlotExtend             sipAPI_add->api_pyslot_extend
#define sipConvertRx                sipAPI_add->api_convert_rx
#define sipAddDelayedDtor           sipAPI_add->api_add_delayed_dtor
#define sipCanConvertToType         sipAPI_add->api_can_convert_to_type
#define sipConvertToType            sipAPI_add->api_convert_to_type
#define sipForceConvertToType       sipAPI_add->api_force_convert_to_type
#define sipCanConvertToEnum         sipAPI_add->api_can_convert_to_enum
#define sipReleaseType              sipAPI_add->api_release_type
#define sipConvertFromType          sipAPI_add->api_convert_from_type
#define sipConvertFromNewType       sipAPI_add->api_convert_from_new_type
#define sipConvertFromEnum          sipAPI_add->api_convert_from_enum
#define sipGetState                 sipAPI_add->api_get_state
#define sipLong_AsUnsignedLong      sipAPI_add->api_long_as_unsigned_long
#define sipExportSymbol             sipAPI_add->api_export_symbol
#define sipImportSymbol             sipAPI_add->api_import_symbol
#define sipFindType                 sipAPI_add->api_find_type
#define sipFindNamedEnum            sipAPI_add->api_find_named_enum
#define sipBytes_AsChar             sipAPI_add->api_bytes_as_char
#define sipBytes_AsString           sipAPI_add->api_bytes_as_string
#define sipString_AsASCIIChar       sipAPI_add->api_string_as_ascii_char
#define sipString_AsASCIIString     sipAPI_add->api_string_as_ascii_string
#define sipString_AsLatin1Char      sipAPI_add->api_string_as_latin1_char
#define sipString_AsLatin1String    sipAPI_add->api_string_as_latin1_string
#define sipString_AsUTF8Char        sipAPI_add->api_string_as_utf8_char
#define sipString_AsUTF8String      sipAPI_add->api_string_as_utf8_string
#define sipUnicode_AsWChar          sipAPI_add->api_unicode_as_wchar
#define sipUnicode_AsWString        sipAPI_add->api_unicode_as_wstring
#define sipConvertFromConstVoidPtr  sipAPI_add->api_convert_from_const_void_ptr
#define sipConvertFromVoidPtrAndSize    sipAPI_add->api_convert_from_void_ptr_and_size
#define sipConvertFromConstVoidPtrAndSize   sipAPI_add->api_convert_from_const_void_ptr_and_size
#define sipInvokeSlot               sipAPI_add->api_invoke_slot
#define sipSaveSlot                 sipAPI_add->api_save_slot
#define sipClearAnySlotReference    sipAPI_add->api_clear_any_slot_reference
#define sipVisitSlot                sipAPI_add->api_visit_slot
#define sipWrappedTypeName(wt)      ((wt)->type->td_cname)
#define sipDeprecated               sipAPI_add->api_deprecated
#define sipKeepReference            sipAPI_add->api_keep_reference
#define sipRegisterPyType           sipAPI_add->api_register_py_type
#define sipTypeFromPyTypeObject     sipAPI_add->api_type_from_py_type_object
#define sipTypeScope                sipAPI_add->api_type_scope
#define sipResolveTypedef           sipAPI_add->api_resolve_typedef
#define sipRegisterAttributeGetter  sipAPI_add->api_register_attribute_getter
#define sipIsAPIEnabled             sipAPI_add->api_is_api_enabled
#define sipExportModule             sipAPI_add->api_export_module
#define sipInitModule               sipAPI_add->api_init_module

/* These are deprecated. */
#define sipMapStringToClass         sipAPI_add->api_map_string_to_class
#define sipMapIntToClass            sipAPI_add->api_map_int_to_class
#define sipFindClass                sipAPI_add->api_find_class
#define sipFindMappedType           sipAPI_add->api_find_mapped_type
#define sipWrapper_Check(w)         PyObject_TypeCheck((w), sipAPI_add->api_wrapper_type)
#define sipGetWrapper(p, wt)        sipGetPyObject((p), (wt)->type)
#define sipReleaseInstance(p, wt, s)    sipReleaseType((p), (wt)->type, (s))
#define sipReleaseMappedType        sipReleaseType
#define sipCanConvertToInstance(o, wt, f)   sipCanConvertToType((o), (wt)->type, (f))
#define sipCanConvertToMappedType   sipCanConvertToType
#define sipConvertToInstance(o, wt, t, f, s, e)     sipConvertToType((o), (wt)->type, (t), (f), (s), (e))
#define sipConvertToMappedType      sipConvertToType
#define sipForceConvertToInstance(o, wt, t, f, s, e)    sipForceConvertToType((o), (wt)->type, (t), (f), (s), (e))
#define sipForceConvertToMappedType sipForceConvertToType
#define sipConvertFromInstance(p, wt, t)    sipConvertFromType((p), (wt)->type, (t))
#define sipConvertFromMappedType    sipConvertFromType
#define sipConvertFromNamedEnum(v, pt)  sipConvertFromEnum((v), ((sipEnumTypeObject *)(pt))->type)
#define sipConvertFromNewInstance(p, wt, t) sipConvertFromNewType((p), (wt)->type, (t))

/* The strings used by this module. */
extern const char sipStrings_add[];

/* The SIP API, this module's API and the APIs of any imported modules. */
extern const sipAPIDef *sipAPI_add;
extern sipExportedModuleDef sipModuleAPI_add;

#endif