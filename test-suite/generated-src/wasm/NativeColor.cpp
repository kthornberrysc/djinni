// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from enum.djinni

#include "NativeColor.hpp"  // my header

namespace djinni_generated {

EM_JS(void, djinni_init_testsuite_color, (), {
    Module.Color =  {
        RED: 0, ORANGE: 1, YELLOW: 2, GREEN: 3, BLUE: 4, INDIGO: 5, VIOLET: 6
    }
})

EMSCRIPTEN_BINDINGS(color) {
    djinni_init_testsuite_color();
}

}  // namespace djinni_generated