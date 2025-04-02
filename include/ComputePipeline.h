#ifndef COMPUTEPIPELINE_H
#define COMPUTEPIPELINE_H

#include "Loader.h"
#include "Processor.h"
#include "Result.h"
#include <memory>
#include <string>

/**
 * @brief Manages the processing of data from a URI through a compute pipeline.
 *
 * The ComputePipeline class provides a method to load data from a URI and process it
 * using a series of operations defined by the Loader and Processor classes.
 */
class ComputePipeline
{
public:
    /**
     * @brief Processes the given URI through the compute pipeline.
     *
     * This method loads data from the given URI using the Loader and then processes it
     * using the Processor. It continues processing the result until no further processing
     * is needed. The final data and metadata are returned as a Result object.
     *
     * @param uri The URI to be processed.
     * @return std::shared_ptr<Result> A shared pointer to the final processed Result object, or nullptr if processing fails.
     */
    std::shared_ptr<Result> process( const std::string& uri );

private:
    Loader loader;       ///< The loader used to load data from the URI.
    Processor processor; ///< The processor used to process the loaded data.
};

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
void processUri( ComputePipeline& pipeline, const std::string& uri );

#endif // COMPUTEPIPELINE_H