#pragma once

// Call this macro in your main() to start the injector UI
#define bvinjectorstart() bvinjector::start_injector_menu()

namespace bvinjector {
    void start_injector_menu();
}