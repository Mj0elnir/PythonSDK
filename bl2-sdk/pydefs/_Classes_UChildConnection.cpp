#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UChildConnection(py::object m)
{
    py::class_< UChildConnection,  UNetConnection   >(m, "UChildConnection")
        .def_readwrite("Parent", &UChildConnection::Parent)
        .def("StaticClass", &UChildConnection::StaticClass, py::return_value_policy::reference)
          ;
}