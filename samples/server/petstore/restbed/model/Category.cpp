/**
 * Swagger Petstore
 * This is a sample server Petstore server.  You can find out more about Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).  For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: apiteam@swagger.io
 *
 * NOTE: This class is auto generated by the swagger code generator 2.2.3-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "Category.h"

#include <string>
#include <sstream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace io {
namespace swagger {
namespace server {
namespace model {

Category::Category()
{
    m_Id = 0L;
    m_Name = "";
    
}

Category::~Category()
{
}

std::string Category::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("Id", m_Id);
	pt.put("Name", m_Name);
	write_json(ss, pt, false);
	return ss.str();
}

void Category::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m_Id = pt.get("Id", 0L);
	m_Name = pt.get("Name", "");
}

int64_t Category::getId() const
{
    return m_Id;
}
void Category::setId(int64_t value)
{
    m_Id = value;
}
std::string Category::getName() const
{
    return m_Name;
}
void Category::setName(std::string value)
{
    m_Name = value;
}

}
}
}
}

