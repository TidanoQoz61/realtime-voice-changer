// engine.cpp — part of realtime-voice-changer.

#include "realtimevoicechanger/engine.h"

#include <cstdio>

namespace realtimevoicechanger {

Engine::Engine(const std::string& config_path)
    : config_path_(config_path) {}

void Engine::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Engine::run() {
    if (verbose_) std::fprintf(stderr, "[realtime-voice-changer] engine: run\n");
    // core logic lives here
    return true;
}

}  // namespace realtimevoicechanger
