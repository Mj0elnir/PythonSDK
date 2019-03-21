#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNavMeshGoalFilter_PolyEncompassesAI(py::object m)
{
    py::class_< UNavMeshGoalFilter_PolyEncompassesAI,  UNavMeshGoal_Filter   >(m, "UNavMeshGoalFilter_PolyEncompassesAI")
        .def_readwrite("OverrideExtentToCheck", &UNavMeshGoalFilter_PolyEncompassesAI::OverrideExtentToCheck)
        .def("StaticClass", &UNavMeshGoalFilter_PolyEncompassesAI::StaticClass, py::return_value_policy::reference)
        .def("MakeSureAIFits", &UNavMeshGoalFilter_PolyEncompassesAI::MakeSureAIFits)
          ;
}