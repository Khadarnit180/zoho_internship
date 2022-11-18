#include <pybind11/pybind11.h>
//#include "task4.cpp"
#include "task4.hpp"
#define STRINGIFY(x) #x
#define MACRO_STRINGIFY(x) STRINGIFY(x)

namespace py = pybind11;

PYBIND11_MODULE(cmake_example, m) {
    m.doc() = R"pbdoc(
        Pybind11 example plugin
        -----------------------

        .. currentmodule:: cmake_example

        .. autosummary::
           :toctree: _generate

           add
           subtract
    )pbdoc";
	m.def("pybind_function", &get, R"pbdoc(
        Add two numbers

        Some other explanation about the add function.
    )pbdoc");
   

}



