#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOnlineGameSearchSortClause(py::object m)
{
    py::class_< FOnlineGameSearchSortClause >(m, "FOnlineGameSearchSortClause")
        .def_readwrite("EntryId", &FOnlineGameSearchSortClause::EntryId)
        .def_readwrite("ObjectPropertyName", &FOnlineGameSearchSortClause::ObjectPropertyName)
        .def_readwrite("EntryType", &FOnlineGameSearchSortClause::EntryType)
        .def_readwrite("SortType", &FOnlineGameSearchSortClause::SortType)
  ;
}