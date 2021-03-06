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
        mname = '.'.join((pkg, '_param_X86IntelMPLocalIntAssignment')).lstrip('.')
        try:
            return importlib.import_module(mname)
        except ImportError:
            return importlib.import_module('_param_X86IntelMPLocalIntAssignment')
    _param_X86IntelMPLocalIntAssignment = swig_import_helper()
    del swig_import_helper
elif _swig_python_version_info >= (2, 6, 0):
    def swig_import_helper():
        from os.path import dirname
        import imp
        fp = None
        try:
            fp, pathname, description = imp.find_module('_param_X86IntelMPLocalIntAssignment', [dirname(__file__)])
        except ImportError:
            import _param_X86IntelMPLocalIntAssignment
            return _param_X86IntelMPLocalIntAssignment
        try:
            _mod = imp.load_module('_param_X86IntelMPLocalIntAssignment', fp, pathname, description)
        finally:
            if fp is not None:
                fp.close()
        return _mod
    _param_X86IntelMPLocalIntAssignment = swig_import_helper()
    del swig_import_helper
else:
    import _param_X86IntelMPLocalIntAssignment
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


import m5.internal.enum_X86IntelMPInterruptType
import m5.internal.enum_X86IntelMPPolarity
import m5.internal.enum_X86IntelMPTriggerMode
import m5.internal.param_X86IntelMPBaseConfigEntry
import m5.internal.param_SimObject
import m5.internal.drain
import m5.internal.serialize
class X86ISA_COLONS_IntelMP_COLONS_LocalIntAssignment(m5.internal.param_X86IntelMPBaseConfigEntry.X86ISA_COLONS_IntelMP_COLONS_BaseConfigEntry):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')

    def __init__(self, *args, **kwargs):
        raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
X86ISA_COLONS_IntelMP_COLONS_LocalIntAssignment_swigregister = _param_X86IntelMPLocalIntAssignment.X86ISA_COLONS_IntelMP_COLONS_LocalIntAssignment_swigregister
X86ISA_COLONS_IntelMP_COLONS_LocalIntAssignment_swigregister(X86ISA_COLONS_IntelMP_COLONS_LocalIntAssignment)

class X86IntelMPLocalIntAssignmentParams(m5.internal.param_X86IntelMPBaseConfigEntry.X86IntelMPBaseConfigEntryParams):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr

    def create(self):
        return _param_X86IntelMPLocalIntAssignment.X86IntelMPLocalIntAssignmentParams_create(self)
    dest_local_apic_id = _swig_property(_param_X86IntelMPLocalIntAssignment.X86IntelMPLocalIntAssignmentParams_dest_local_apic_id_get, _param_X86IntelMPLocalIntAssignment.X86IntelMPLocalIntAssignmentParams_dest_local_apic_id_set)
    dest_local_apic_intin = _swig_property(_param_X86IntelMPLocalIntAssignment.X86IntelMPLocalIntAssignmentParams_dest_local_apic_intin_get, _param_X86IntelMPLocalIntAssignment.X86IntelMPLocalIntAssignmentParams_dest_local_apic_intin_set)
    interrupt_type = _swig_property(_param_X86IntelMPLocalIntAssignment.X86IntelMPLocalIntAssignmentParams_interrupt_type_get, _param_X86IntelMPLocalIntAssignment.X86IntelMPLocalIntAssignmentParams_interrupt_type_set)
    polarity = _swig_property(_param_X86IntelMPLocalIntAssignment.X86IntelMPLocalIntAssignmentParams_polarity_get, _param_X86IntelMPLocalIntAssignment.X86IntelMPLocalIntAssignmentParams_polarity_set)
    source_bus_id = _swig_property(_param_X86IntelMPLocalIntAssignment.X86IntelMPLocalIntAssignmentParams_source_bus_id_get, _param_X86IntelMPLocalIntAssignment.X86IntelMPLocalIntAssignmentParams_source_bus_id_set)
    source_bus_irq = _swig_property(_param_X86IntelMPLocalIntAssignment.X86IntelMPLocalIntAssignmentParams_source_bus_irq_get, _param_X86IntelMPLocalIntAssignment.X86IntelMPLocalIntAssignmentParams_source_bus_irq_set)
    trigger = _swig_property(_param_X86IntelMPLocalIntAssignment.X86IntelMPLocalIntAssignmentParams_trigger_get, _param_X86IntelMPLocalIntAssignment.X86IntelMPLocalIntAssignmentParams_trigger_set)

    def __init__(self):
        this = _param_X86IntelMPLocalIntAssignment.new_X86IntelMPLocalIntAssignmentParams()
        try:
            self.this.append(this)
        except __builtin__.Exception:
            self.this = this
    __swig_destroy__ = _param_X86IntelMPLocalIntAssignment.delete_X86IntelMPLocalIntAssignmentParams
    __del__ = lambda self: None
X86IntelMPLocalIntAssignmentParams_swigregister = _param_X86IntelMPLocalIntAssignment.X86IntelMPLocalIntAssignmentParams_swigregister
X86IntelMPLocalIntAssignmentParams_swigregister(X86IntelMPLocalIntAssignmentParams)



