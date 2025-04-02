#include "ComputePipeline.h"
#include <iostream>

/**
 * @brief Processes the given URI through the compute pipeline.
 *
 * This method loads data from the given URI using the Loader and then processes it
 * using the Processor. It continues processing the result until no further processing
 * is needed. The final data and metadata are printed to the console.
 *
 * @param uri The URI to be processed.
 * @return std::shared_ptr<Result> A shared pointer to the final processed Result object, or nullptr if processing fails.
 */
std::shared_ptr<Result> ComputePipeline::process( const std::string& uri )
{
    auto result = loader.load( uri );

    while ( result )
    {
        result = processor.process( result );
        if ( result )
        {
            std::cout << "URI: " << uri << std::endl;
            std::cout << "Final Data: " << result->getData() << std::endl;
            std::cout << "Final Metadata: " << result->getMetadata() << std::endl;
        }
    }
    return result;
}
