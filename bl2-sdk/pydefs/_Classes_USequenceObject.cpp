#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USequenceObject(py::object m)
{
    py::class_< USequenceObject,  UObject   >(m, "USequenceObject")
        .def_readwrite("ObjInstanceVersion", &USequenceObject::ObjInstanceVersion)
        .def_readwrite("ParentSequence", &USequenceObject::ParentSequence)
        .def("StaticClass", &USequenceObject::StaticClass, py::return_value_policy::reference)
        .def("eventGetObjClassVersion", &USequenceObject::eventGetObjClassVersion)
        .def("eventIsPastingIntoLevelSequenceAllowed", &USequenceObject::eventIsPastingIntoLevelSequenceAllowed)
        .def("eventIsValidLevelSequenceObject", &USequenceObject::eventIsValidLevelSequenceObject)
        .def("GetWorldInfo", &USequenceObject::GetWorldInfo, py::return_value_policy::reference)
        .def("ScriptLog", &USequenceObject::ScriptLog)
          ;
}