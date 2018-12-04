# This file was automatically generated by SWIG (http://www.swig.org).
# Version 3.0.12
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

from sys import version_info as _swig_python_version_info
if _swig_python_version_info >= (2, 7, 0):
    def swig_import_helper():
        import importlib
        pkg = __name__.rpartition('.')[0]
        mname = '.'.join((pkg, '_enum_OpClass')).lstrip('.')
        try:
            return importlib.import_module(mname)
        except ImportError:
            return importlib.import_module('_enum_OpClass')
    _enum_OpClass = swig_import_helper()
    del swig_import_helper
elif _swig_python_version_info >= (2, 6, 0):
    def swig_import_helper():
        from os.path import dirname
        import imp
        fp = None
        try:
            fp, pathname, description = imp.find_module('_enum_OpClass', [dirname(__file__)])
        except ImportError:
            import _enum_OpClass
            return _enum_OpClass
        try:
            _mod = imp.load_module('_enum_OpClass', fp, pathname, description)
        finally:
            if fp is not None:
                fp.close()
        return _mod
    _enum_OpClass = swig_import_helper()
    del swig_import_helper
else:
    import _enum_OpClass
del _swig_python_version_info

try:
    _swig_property = property
except NameError:
    pass  # Python < 2.2 doesn't have 'property'.

try:
    import builtins as __builtin__
except ImportError:
    import __builtin__

def _swig_setattr_nondynamic(self, class_type, name, value, static=1):
    if (name == "thisown"):
        return self.this.own(value)
    if (name == "this"):
        if type(value).__name__ == 'SwigPyObject':
            self.__dict__[name] = value
            return
    method = class_type.__swig_setmethods__.get(name, None)
    if method:
        return method(self, value)
    if (not static):
        object.__setattr__(self, name, value)
    else:
        raise AttributeError("You cannot add attributes to %s" % self)


def _swig_setattr(self, class_type, name, value):
    return _swig_setattr_nondynamic(self, class_type, name, value, 0)


def _swig_getattr(self, class_type, name):
    if (name == "thisown"):
        return self.this.own()
    method = class_type.__swig_getmethods__.get(name, None)
    if method:
        return method(self)
    raise AttributeError("'%s' object has no attribute '%s'" % (class_type.__name__, name))


def _swig_repr(self):
    try:
        strthis = "proxy of " + self.this.__repr__()
    except __builtin__.Exception:
        strthis = ""
    return "<%s.%s; %s >" % (self.__class__.__module__, self.__class__.__name__, strthis,)


def _swig_setattr_nondynamic_method(set):
    def set_attr(self, name, value):
        if (name == "thisown"):
            return self.this.own(value)
        if hasattr(self, name) or (name == "this"):
            set(self, name, value)
        else:
            raise AttributeError("You cannot add attributes to %s" % self)
    return set_attr


No_OpClass = _enum_OpClass.No_OpClass
IntAlu = _enum_OpClass.IntAlu
IntMult = _enum_OpClass.IntMult
IntDiv = _enum_OpClass.IntDiv
FloatAdd = _enum_OpClass.FloatAdd
FloatCmp = _enum_OpClass.FloatCmp
FloatCvt = _enum_OpClass.FloatCvt
FloatMult = _enum_OpClass.FloatMult
FloatDiv = _enum_OpClass.FloatDiv
FloatSqrt = _enum_OpClass.FloatSqrt
SimdAdd = _enum_OpClass.SimdAdd
SimdAddAcc = _enum_OpClass.SimdAddAcc
SimdAlu = _enum_OpClass.SimdAlu
SimdCmp = _enum_OpClass.SimdCmp
SimdCvt = _enum_OpClass.SimdCvt
SimdMisc = _enum_OpClass.SimdMisc
SimdMult = _enum_OpClass.SimdMult
SimdMultAcc = _enum_OpClass.SimdMultAcc
SimdShift = _enum_OpClass.SimdShift
SimdShiftAcc = _enum_OpClass.SimdShiftAcc
SimdSqrt = _enum_OpClass.SimdSqrt
SimdFloatAdd = _enum_OpClass.SimdFloatAdd
SimdFloatAlu = _enum_OpClass.SimdFloatAlu
SimdFloatCmp = _enum_OpClass.SimdFloatCmp
SimdFloatCvt = _enum_OpClass.SimdFloatCvt
SimdFloatDiv = _enum_OpClass.SimdFloatDiv
SimdFloatMisc = _enum_OpClass.SimdFloatMisc
SimdFloatMult = _enum_OpClass.SimdFloatMult
SimdFloatMultAcc = _enum_OpClass.SimdFloatMultAcc
SimdFloatSqrt = _enum_OpClass.SimdFloatSqrt
MemRead = _enum_OpClass.MemRead
MemWrite = _enum_OpClass.MemWrite
IprAccess = _enum_OpClass.IprAccess
InstPrefetch = _enum_OpClass.InstPrefetch
Num_OpClass = _enum_OpClass.Num_OpClass

cvar = _enum_OpClass.cvar
