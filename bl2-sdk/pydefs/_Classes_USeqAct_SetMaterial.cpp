#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SetMaterial(py::object m)
{
    py::class_< USeqAct_SetMaterial,  USequenceAction   >(m, "USeqAct_SetMaterial")
        .def_readwrite("NewMaterial", &USeqAct_SetMaterial::NewMaterial)
        .def_readwrite("MaterialIndex", &USeqAct_SetMaterial::MaterialIndex)
        .def("StaticClass", &USeqAct_SetMaterial::StaticClass, py::return_value_policy::reference)
          ;
}