#if defined(_WIN32) || defined(_WIN64)
#define LIB_EXPORT __declspec(dllexport)
#elif defined(__linux__) || defined(__APPLE__)
#define LIB_EXPORT __attribute__((visibility("default")))
#else
#define LIB_EXPORT
#endif

namespace easy_json
{
    enum Errors
    {
        ERROR_LOADING_FILE = 1,
        ERROR_PARSING,
        ERROR_KEY_PATH,
        ERROR_INVALID_TYPE_DATA,

        NO_ERROR = 0
    };

    extern "C"
    {
        LIB_EXPORT int file_get_value_string(const char *file_path, const char *key_path, std::string &value);
        LIB_EXPORT int file_get_value_int(const char *file_path, const char *key_path, int *value);
        LIB_EXPORT int file_get_value_bool(const char *file_path, const char *key_path, bool *value);
    }

}
