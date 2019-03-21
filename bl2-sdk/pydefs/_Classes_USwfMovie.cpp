#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USwfMovie(py::object m)
{
    py::class_< USwfMovie,  UObject   >(m, "USwfMovie")
        .def_readwrite("PackTextureSize", &USwfMovie::PackTextureSize)
        .def_readwrite("TextureRescale", &USwfMovie::TextureRescale)
        .def_readwrite("DesiredMemArena", &USwfMovie::DesiredMemArena)
        .def_readwrite("TextureFormat", &USwfMovie::TextureFormat)
        .def_readwrite("RTTextures", &USwfMovie::RTTextures)
        .def_readwrite("RTVideoTextures", &USwfMovie::RTVideoTextures)
        .def_readonly("MovieInfo", &USwfMovie::MovieInfo)
        .def_readwrite("pMovieDef", &USwfMovie::pMovieDef)
        .def_readwrite("RawData", &UGFxRawData::RawData)
        .def_readwrite("ReferencedSwfs", &UGFxRawData::ReferencedSwfs)
        .def_readwrite("References", &UGFxRawData::References)
        .def_readwrite("UserReferences", &UGFxRawData::UserReferences)
        .def("StaticClass", &USwfMovie::StaticClass, py::return_value_policy::reference)
        .def("GetPathForLoadMovie", &USwfMovie::GetPathForLoadMovie)
          ;
}