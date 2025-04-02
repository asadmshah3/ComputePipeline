#include "ComputePipeline.h"
#include <iostream>

/**
 * @brief Processes a given URI using the ComputePipeline.
 *
 * This function takes a URI, processes it using the provided ComputePipeline,
 * and handles the result. The processing involves loading the data from the URI
 * and then processing it to produce a result.
 *
 * @param pipeline The ComputePipeline used for processing.
 * @param uri The URI to be processed.
 */
void processUri( ComputePipeline& pipeline, const std::string& uri )
{
    auto result = pipeline.process( uri );
    if ( result )
    {
        std::cout << "Data: " << result->getData() << ", Metadata: " << result->getMetadata() << std::endl;
    }
    else
    {
        std::cerr << "Failed to process URI: " << uri << std::endl;
    }
}

/**
 * @brief The main function of the application.
 *
 * This function initializes the ComputePipeline and processes several example URIs.
 * It demonstrates how to use the ComputePipeline to process different types of URIs,
 * such as file, URL, and bundle URIs.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    ComputePipeline pipeline;

    // Process file example
    processUri( pipeline, "file://resources/sample_file.txt" );

    // Process URL example
    processUri( pipeline, "http://example.com/resources/sample_url.txt" );

    // Process bundle example
    processUri( pipeline, "bundle://resources/sample_bundle.txt" );

    return 0;
}