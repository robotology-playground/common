This is intended to be a header-only library containing some common classes and other useful entities.
General purpose classes has been put in YARP ever since.
From now on this can be a more suitable place.
The entire repository is a stub at the moment so if you have any ideas feel free to contribute.

TODO List:

* [ ] Outcome/result class
  - https://github.com/ned14/outcome
  - https://github.com/boostorg/outcome
* [ ] const correct "pimpl" class
  - http://oliora.github.io/2015/12/29/pimpl-and-rule-of-zero.html
  - https://github.com/oliora/samples
* [ ] big/little endian swapping classes
  - https://en.cppreference.com/w/cpp/types/endian (c++20)
  - https://github.com/boostorg/endian
  - https://www.boost.org/doc/libs/1_58_0/libs/endian/doc/index.html
* [ ] Split string (and other string algorithms) (c++20?)
  - https://www.fluentcpp.com/2017/04/21/how-to-split-a-string-in-c/
  - https://github.com/ericniebler/range-v3/blob/master/test/view/split.cpp
  - https://www.boost.org/doc/libs/1_69_0/doc/html/string_algo.html
* [ ] constexpr/template/enable_if friendly, type safe flags
  - https://github.com/grisumbras/enum-flags
  - https://github.com/arvidn/flags
  - https://github.com/oliora/bitmask
* [ ] File system (c++17)
  - https://en.cppreference.com/w/cpp/filesystem
  - https://www.boost.org/doc/libs/1_69_0/libs/filesystem/doc/index.htm
* [ ] Environment variables
  - https://en.cppreference.com/w/cpp/utility/program/getenv
* [ ] `span` (c++20)
  - https://en.cppreference.com/w/cpp/container/span
  - https://github.com/tcbrindle/span
* [ ] `std::string_view` (c++17)
* [ ] IEC559 Floating point types
* [ ] Circular buffer
  - https://www.boost.org/doc/libs/1_61_0/doc/html/circular_buffer.html
  - https://github.com/boostorg/circular_buffer
  - https://github.com/jonathonracz/circular_buffer_stl
* [ ] Units
  - https://www.boost.org/doc/libs/1_58_0/doc/html/boost_units.html
  - https://github.com/boostorg/units
* [ ] Periodic thread (c++ clock compatible)
