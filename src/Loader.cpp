#include "Loader.h"
#include <iostream>

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
std::shared_ptr<Result> Loader::load( const std::string& uri )
{

    // Simulate loading based on URI
    if ( uri.find( "file://" ) == 0 )
    {
        std::cout << "file not found" << std::endl;
        return std::make_shared<Result>( "FileData", "FileMetadata" );
    }
    else if ( uri.find( "http://" ) == 0 || uri.find( "https://" ) == 0 )
    {
        return std::make_shared<Result>( "URLData", "URLMetadata" );
    }
    else if ( uri.find( "bundle://" ) == 0 )
    {
        return std::make_shared<Result>( "BundleData", "BundleMetadata" );
    }
    return nullptr;
}
