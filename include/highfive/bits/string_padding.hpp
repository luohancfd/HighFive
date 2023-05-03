#pragma once

namespace HighFive {

enum class StringPadding {
    NullTerminated = H5T_STR_NULLTERM,
    NullPadded = H5T_STR_NULLPAD,
    SpacePadded = H5T_STR_SPACEPAD
};

}
