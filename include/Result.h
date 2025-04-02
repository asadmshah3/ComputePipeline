#ifndef RESULT_H
#define RESULT_H

#include <string>
#include <memory>

/**
 * @brief Represents the result of a processing operation.
 *
 * The Result class encapsulates the data and metadata produced by a processing operation.
 * It provides methods to access the data and metadata.
 */
class Result
{
public:
    /**
     * @brief Constructs a Result object with the given data and metadata.
     *
     * @param data The data produced by the processing operation.
     * @param metadata The metadata associated with the data.
     */
    Result( const std::string& data, const std::string& metadata )
        : data( data ), metadata( metadata )
    {
    }

    /**
     * @brief Gets the data produced by the processing operation.
     *
     * @return const std::string& A reference to the data string.
     */
    const std::string& getData() const { return data; }

    /**
     * @brief Gets the metadata associated with the data.
     *
     * @return const std::string& A reference to the metadata string.
     */
    const std::string& getMetadata() const { return metadata; }

private:
    std::string data;      ///< The data produced by the processing operation.
    std::string metadata;  ///< The metadata associated with the data.
};

#endif // RESULT_H