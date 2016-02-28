#ifndef DS_ARGINFO_H
#define DS_ARGINFO_H

#include "common.h"

#define ARGINFO_NONE(name, ...) \
ZEND_BEGIN_ARG_INFO_EX(arginfo_##name, 0, 0, 0) \
ZEND_END_ARG_INFO()

#define ARGINFO_ZVAL_RETURN_BOOL(name, z) \
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_##name, 0, 1, _IS_BOOL, 0, 0) \
    ZEND_ARG_INFO(0, z) \
ZEND_END_ARG_INFO()

#define ARGINFO_OPTIONAL_ZVAL(name, z) \
ZEND_BEGIN_ARG_INFO_EX(arginfo_##name, 0, 0, 0) \
ZEND_ARG_TYPE_INFO(0, z, 0, 1) \
ZEND_END_ARG_INFO()

#define ARGINFO_CALLABLE_RETURN_DS(name, c, col) \
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_##name, 0, 1, IS_OBJECT, DS_NS(col), 1) \
ZEND_ARG_TYPE_INFO(0, c, IS_CALLABLE, 0) \
ZEND_END_ARG_INFO()

#define ARGINFO_OPTIONAL_ZVAL_RETURN_DS(name, z, col) \
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_##name, 0, 1, IS_OBJECT, DS_NS(col), 0) \
ZEND_ARG_TYPE_INFO(0, z, 0, 1) \
ZEND_END_ARG_INFO()

#define ARGINFO_CALLABLE_OPTIONAL_ZVAL(name, c, z) \
ZEND_BEGIN_ARG_INFO_EX(arginfo_##name, 0, 0, 1) \
ZEND_ARG_TYPE_INFO(0, c, IS_CALLABLE, 0) \
ZEND_ARG_TYPE_INFO(0, z, 0, 1) \
ZEND_END_ARG_INFO()

#define ARGINFO_OPTIONAL_STRING(name, s) \
ZEND_BEGIN_ARG_INFO_EX(arginfo_##name, 0, 0, 0) \
ZEND_ARG_TYPE_INFO(0, c, IS_STRING, 0) \
ZEND_END_ARG_INFO()

#define ARGINFO_OPTIONAL_CALLABLE_RETURN_DS(name, c, col) \
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_##name, 0, 0, IS_OBJECT, DS_NS(col), 0) \
ZEND_ARG_TYPE_INFO(0, c, IS_CALLABLE, 1) \
ZEND_END_ARG_INFO()

#define ARGINFO_LONG_OPTIONAL_LONG_RETURN_DS(name, i1, i2, col) \
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_##name, 0, 1, IS_OBJECT, DS_NS(col), 1) \
ZEND_ARG_TYPE_INFO(0, i1, IS_LONG, 0) \
ZEND_ARG_TYPE_INFO(0, i2, IS_LONG, 1) \
ZEND_END_ARG_INFO()

#define ARGINFO_LONG_RETURN_DS(name, i, col) \
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_##name, 0, 1, IS_OBJECT, DS_NS(col), 1) \
ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0) \
ZEND_END_ARG_INFO()

#define ARGINFO_OPTIONAL_CALLABLE(name, c) \
ZEND_BEGIN_ARG_INFO_EX(arginfo_##name, 0, 0, 0) \
ZEND_ARG_TYPE_INFO(0, c, IS_CALLABLE, 1) \
ZEND_END_ARG_INFO()

#define ARGINFO_CALLABLE(name, c) \
ZEND_BEGIN_ARG_INFO_EX(arginfo_##name, 0, 0, 1) \
ZEND_ARG_TYPE_INFO(0, c, IS_CALLABLE, 0) \
ZEND_END_ARG_INFO()

#define ARGINFO_VARIADIC_ZVAL(name, v) \
ZEND_BEGIN_ARG_INFO_EX(arginfo_##name, 0, 0, 0) \
ZEND_ARG_VARIADIC_INFO(0, v) \
ZEND_END_ARG_INFO()

#define ARGINFO_NONE_RETURN_LONG(name) \
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_##name, 0, 0, IS_LONG, 0, 0) \
ZEND_END_ARG_INFO()

#define ARGINFO_NONE_RETURN_STRING(name) \
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_##name, 0, 0, IS_STRING, 0, 0) \
ZEND_END_ARG_INFO()

#define ARGINFO_NONE_RETURN_DS(name, col) \
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_##name, 0, 0, IS_OBJECT, DS_NS(col), 0) \
ZEND_END_ARG_INFO()

#define ARGINFO_NONE_RETURN_BOOL(name) \
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_##name, 0, 0, _IS_BOOL, 0, 0) \
ZEND_END_ARG_INFO()

#define ARGINFO_VARIADIC_ZVAL_RETURN_BOOL(name, v) \
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_##name, 0, 0, _IS_BOOL, 0, 0) \
ZEND_ARG_VARIADIC_INFO(0, v) \
ZEND_END_ARG_INFO()

#define ARGINFO_NONE_RETURN_ARRAY(name) \
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_##name, 0, 0, IS_ARRAY, 0, 0) \
ZEND_END_ARG_INFO()

#define ARGINFO_LONG(name, i) \
ZEND_BEGIN_ARG_INFO_EX(arginfo_##name, 0, 0, 1) \
ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0) \
ZEND_END_ARG_INFO()

#define ARGINFO_LONG_ZVAL(name, i, z) \
ZEND_BEGIN_ARG_INFO_EX(arginfo_##name, 0, 0, 2) \
ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0) \
ZEND_ARG_INFO(0, z) \
ZEND_END_ARG_INFO()

#define ARGINFO_ZVAL_LONG(name, z, i) \
ZEND_BEGIN_ARG_INFO_EX(arginfo_##name, 0, 0, 2) \
ZEND_ARG_INFO(0, z) \
ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0) \
ZEND_END_ARG_INFO()

#define ARGINFO_ZVAL(name, z) \
ZEND_BEGIN_ARG_INFO_EX(arginfo_##name, 0, 0, 1) \
ZEND_ARG_INFO(0, z) \
ZEND_END_ARG_INFO()

#define ARGINFO_ZVAL_ZVAL(name, z1, z2) \
ZEND_BEGIN_ARG_INFO_EX(arginfo_##name, 0, 0, 2) \
ZEND_ARG_INFO(0, z1) \
ZEND_ARG_INFO(0, z2) \
ZEND_END_ARG_INFO()

#define ARGINFO_ZVAL_OPTIONAL_ZVAL(name, z1, z2) \
ZEND_BEGIN_ARG_INFO_EX(arginfo_##name, 0, 0, 1) \
ZEND_ARG_INFO(0, z1) \
ZEND_ARG_TYPE_INFO(0, z2, 0, 1) \
ZEND_END_ARG_INFO()

#define ARGINFO_LONG_VARIADIC_ZVAL(name, i, v) \
ZEND_BEGIN_ARG_INFO_EX(arginfo_##name, 0, 0, 1) \
ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0) \
ZEND_ARG_VARIADIC_INFO(0, v) \
ZEND_END_ARG_INFO()

#define ARGINFO_DS_RETURN_DS(name, obj, cls, col) \
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_##name, 0, 1, IS_OBJECT, DS_NS(col), 1) \
ZEND_ARG_OBJ_INFO(0, obj, Ds\\cls, 0) \
ZEND_END_ARG_INFO()

#endif
