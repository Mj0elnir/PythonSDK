#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSpeechRecognizedWord(py::object m)
{
    py::class_< FSpeechRecognizedWord >(m, "FSpeechRecognizedWord")
        .def_readwrite("WordId", &FSpeechRecognizedWord::WordId)
        .def_readwrite("WordText", &FSpeechRecognizedWord::WordText)
        .def_readwrite("Confidence", &FSpeechRecognizedWord::Confidence)
  ;
}