// main.cpp — entry point. Wires config and subsystems together.

#include "realtimevoicechanger/settings.h"
#include "realtimevoicechanger/engine.h"
#include "realtimevoicechanger/io.h"
#include "realtimevoicechanger/presets.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    realtimevoicechanger::Settings settings = realtimevoicechanger::Settings::load_default();
    realtimevoicechanger::Engine engine(settings.store_path);
    realtimevoicechanger::Io io(settings.store_path);
    realtimevoicechanger::Presets presets(settings.store_path);
    std::fprintf(stderr, "[realtime-voice-changer] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
