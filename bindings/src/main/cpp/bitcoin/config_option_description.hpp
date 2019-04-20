#ifndef LIBBITCOIN__CONFIG_OPTION_DESCRIPTION_HPP
#define LIBBITCOIN__CONFIG_OPTION_DESCRIPTION_HPP

#include <cstdint>
#include <boost/program_options.hpp>

namespace libbitcoin {
namespace api {

class config_option_description {
public:
	config_option_description(boost::program_options::option_description* value) :
			value(value) {
	}

	boost::program_options::option_description* getValue() {
		return value;
	}

	void setValue(boost::program_options::option_description* value) {
		this->value = value;
	}
private:
	boost::program_options::option_description* value;
};

} // namespace api
} // namespace libbitcoin
#endif
