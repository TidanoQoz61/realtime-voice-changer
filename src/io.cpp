// io.cpp — part of realtime-voice-changer.

#include "realtimevoicechanger/io.h"

#include <cstdio>

namespace realtimevoicechanger {

Io::Io(const std::string& config_path)
    : config_path_(config_path) {}

void Io::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Io::run() {
    if (verbose_) std::fprintf(stderr, "[realtime-voice-changer] io: run\n");
    // core logic lives here
    return true;
}

}  // namespace realtimevoicechanger
