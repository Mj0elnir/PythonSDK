#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstSkelControlScale(py::object m)
{
    py::class_< UInterpTrackInstSkelControlScale,  UInterpTrackInst   >(m, "UInterpTrackInstSkelControlScale")
        .def("StaticClass", &UInterpTrackInstSkelControlScale::StaticClass, py::return_value_policy::reference)
          ;
}