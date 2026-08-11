#include "ExampleService.hpp"

#include <stdexcept>

using JQUTIL_NS::Bson;

Bson ExampleService::invoke(const std::string &method, const Bson::array &params, const miniapp::EventSink &)
{
    if (method != "echo") throw std::invalid_argument("Example: unknown method " + method);
    if (params.size() != 1 || !params[0].is_object() || !params[0]["value"].is_string()) {
        throw std::invalid_argument("Example.echo: expected { value: string }");
    }
    return Bson::object{{"value", params[0]["value"].string_value()}};
}

extern "C" miniapp::NativeService *miniapp_example_Example_service_create()
{
    return new ExampleService();
}
