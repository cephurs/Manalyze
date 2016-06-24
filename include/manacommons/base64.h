/*
    This file is part of Manalyze.

    Manalyze is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Manalyze is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Manalyze.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include <string>
#include <sstream>
#include <vector>

#include <boost/cstdint.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/make_shared.hpp>
#include <boost/archive/iterators/base64_from_binary.hpp>
#include <boost/archive/iterators/insert_linebreaks.hpp>
#include <boost/archive/iterators/transform_width.hpp>
#include <boost/archive/iterators/ostream_iterator.hpp>

namespace utils {
   
namespace biter = boost::archive::iterators;
typedef boost::shared_ptr<std::string> pString;
    
// ----------------------------------------------------------------------------

/**
 *	@brief	Converts the input data into a Base64 encoded string.
 *
 *	Taken from the boost examples and slightly adaped to handle padding.
 *
 *	@param	std::vector<boost::uint8_t> bytes A vector of bytes to encode.
 *			This argument is not passed by const reference because it may
 *			need to be padded (hence, modified).
 *
 *	@return	A string containing the Base64 representation of the input.
 */
pString b64encode(std::vector<boost::uint8_t> bytes);
    
} // !namespace 