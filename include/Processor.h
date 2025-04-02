#ifndef PROCESSOR_H
#define PROCESSOR_H

#include "Result.h"
#include <memory>

/**
 * @brief Processes input data to produce a result.
 *
 * The Processor class provides a method to process input data encapsulated in a Result object
 * and produce a new Result object based on the input's metadata.
 */
class Processor
{
public:
    /**
     * @brief Processes the input Result object.
     *
     * This method processes the input data based on its metadata and returns a new Result object.
     * If the metadata of the result matches the input metadata, it prevents an infinite loop by returning nullptr.
     *
     * @param input A shared pointer to the input Result object.
     * @return std::shared_ptr<Result> A shared pointer to the processed Result object, or nullptr if an infinite loop is detected.
     */
    std::shared_ptr<Result> process( std::shared_ptr<Result> input );
};

#endif // PROCESSOR_H