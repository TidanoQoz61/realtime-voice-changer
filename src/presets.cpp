// presets.cpp — part of realtime-voice-changer.

#include "realtimevoicechanger/presets.h"

#include <cstdio>

namespace realtimevoicechanger {

Presets::Presets(const std::string& config_path)
    : config_path_(config_path) {}

void Presets::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Presets::run() {
    if (verbose_) std::fprintf(stderr, "[realtime-voice-changer] presets: run\n");
    // core logic lives here
    return true;
}

}  // namespace realtimevoicechanger
