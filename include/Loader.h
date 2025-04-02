#ifndef LOADER_H
#define LOADER_H

#include "Result.h"
#include <memory>
#include <string>

/**
 * @brief Loads data from a given URI.
 *
 * The Loader class provides a method to load data from different types of URIs
 * and produce a Result object containing the loaded data and associated metadata.
 */
class Loader
{
public:
    /**
     * @brief Loads data based on the given URI.
     *
     * This method simulates loading data from different types of URIs. Depending on the URI scheme,
     * it returns a new Result with specific data and metadata. If the URI scheme is not recognized,
     * it returns nullptr.
     *
     * @param uri The URI to load data from.
     * @return std::shared_ptr<Result> A shared pointer to the loaded Result object, or nullptr if the URI scheme is not recognized.
     */
    std::shared_ptr<Result> load( const std::string& uri );
};

#endif // LOADER_H