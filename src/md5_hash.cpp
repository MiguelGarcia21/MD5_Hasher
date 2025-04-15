#include "../include/md5_hash.h"
#include <boost/uuid/detail/md5.hpp>
#include <boost/algorithm/hex.hpp>
#include <array>

std::string compute_md5(const std::string& input) {
    boost::uuids::detail::md5 hash;
    boost::uuids::detail::md5::digest_type digest;

    hash.process_bytes(input.data(), input.size());
    hash.get_digest(digest);

    const auto charDigest = reinterpret_cast<const char*>(&digest);
    std::string result;
    boost::algorithm::hex(charDigest, charDigest + sizeof(digest), std::back_inserter(result));

    return result;
}
