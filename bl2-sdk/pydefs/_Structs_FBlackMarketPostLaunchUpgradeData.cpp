#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBlackMarketPostLaunchUpgradeData(py::object m)
{
    py::class_< FBlackMarketPostLaunchUpgradeData >(m, "FBlackMarketPostLaunchUpgradeData")
        .def_readwrite("EridiumCostForUpgrade", &FBlackMarketPostLaunchUpgradeData::EridiumCostForUpgrade)
  ;
}