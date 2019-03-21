#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimationCompressionAlgorithm_RemoveTrivialKeys(py::object m)
{
    py::class_< UAnimationCompressionAlgorithm_RemoveTrivialKeys,  UAnimationCompressionAlgorithm   >(m, "UAnimationCompressionAlgorithm_RemoveTrivialKeys")
        .def_readwrite("MaxPosDiff", &UAnimationCompressionAlgorithm_RemoveTrivialKeys::MaxPosDiff)
        .def_readwrite("MaxAngleDiff", &UAnimationCompressionAlgorithm_RemoveTrivialKeys::MaxAngleDiff)
        .def("StaticClass", &UAnimationCompressionAlgorithm_RemoveTrivialKeys::StaticClass, py::return_value_policy::reference)
          ;
}