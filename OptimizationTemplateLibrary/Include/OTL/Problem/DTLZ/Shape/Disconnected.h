/*!
Copyright (C) 2014, 申瑞珉 (Ruimin Shen)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include <cassert>
#include <cmath>
#include <vector>
#include <boost/math/constants/constants.hpp>

namespace otl
{
namespace problem
{
namespace dtlz
{
namespace shape
{
template <typename _TIterator, typename _TReal>
_TReal Disconnected(_TIterator begin, _TIterator end, const _TReal distance)
{
	_TReal sum = 0;
	for (_TIterator i = begin; i != end; ++i)
		sum += (*i * (1 + sin(3 * boost::math::constants::pi<_TReal>() * *i))) / distance;
	return std::distance(begin, end) + 1 - sum;
}
}
}
}
}
