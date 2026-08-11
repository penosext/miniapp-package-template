#pragma once

#include "miniapp/native_service.hpp"

class ExampleService final : public miniapp::NativeService {
public:
    JQUTIL_NS::Bson invoke(const std::string &method, const JQUTIL_NS::Bson::array &params, const miniapp::EventSink &events) override;
};
