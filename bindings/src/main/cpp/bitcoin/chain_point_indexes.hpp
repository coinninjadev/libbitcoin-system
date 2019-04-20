/**
 * Copyright (c) 2011-2017 libbitcoin developers (see AUTHORS)
 *
 * This file is part of libbitcoin.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef LIBBITCOIN__CHAIN_POINT_INDEXES_HPP
#define LIBBITCOIN__CHAIN_POINT_INDEXES_HPP

#include <bitcoin/bitcoin/chain/point.hpp>

namespace libbitcoin {
//namespace chain {
namespace api {

class BC_API chain_point_indexes {
public:

	chain_point_indexes() :
			value_(new chain::point::indexes) {
	}

	uint32_t get(size_t i) {
		return (*value_)[i];
	}

	void set(size_t i, uint32_t t) {
		(*value_)[i] = t;
	}

	chain::point::indexes* cast() {
		return value_;
	}

	chain::point::indexes* getValue() {
		return value_;
	}

	void setValue(chain::point::indexes* value) {
		value_ = value;
	}
private:

	chain::point::indexes* value_;

};

} // namespace api
//} // namespace chain
} // namespace libbitcoin

#endif
