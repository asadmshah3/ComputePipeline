#include "Processor.h"
#include <iostream>

/**
 * @brief Processes the input based on its metadata.
 *
 * This method simulates processing of the input data based on its metadata.
 * Depending on the metadata, it returns a new Result with specific instructions
 * for further processing. If the metadata of the result matches the input metadata,
 * it prevents an infinite loop by returning nullptr.
 *
 * @param input A shared pointer to the input Result object.
 * @return std::shared_ptr<Result> A shared pointer to the processed Result object, or nullptr if an infinite loop is detected.
 */
std::shared_ptr<Result> Processor::process( std::shared_ptr<Result> input )
{
    // Simulate processing based on metadata
    std::shared_ptr<Result> result = nullptr;
    if ( input->getMetadata() == "FileMetadata" )
    {
        result = std::make_shared<Result>( "Please decode the image, call API : imglyDecoder()", "ImageMetadata" );
    }
    else if ( input->getMetadata() == "URLMetadata" )
    {
        result = std::make_shared<Result>( "Please decompress the data, call API : imglyDecompress()", "CompressedMetadata" );
    }
    else if ( input->getMetadata() == "BundleMetadata" )
    {
        result = std::make_shared<Result>( "Please convert the JSON data to cpp object, call API : imglyJSONToCpp()", "JSONMetadata" );
    }

    // Check for infinite loop condition
    if ( result && result->getMetadata() == input->getMetadata() )
    {
        std::cerr << "Currently we are not allowing action to process a previous action output!" << std::endl;
        return nullptr;
    }
    return result;
}
