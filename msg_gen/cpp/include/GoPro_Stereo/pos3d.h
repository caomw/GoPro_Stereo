/* Auto-generated by genmsg_cpp for file /home/withniu/ros_workspace/GoPro_Stereo/msg/pos3d.msg */
#ifndef GOPRO_STEREO_MESSAGE_POS3D_H
#define GOPRO_STEREO_MESSAGE_POS3D_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"


namespace GoPro_Stereo
{
template <class ContainerAllocator>
struct pos3d_ {
  typedef pos3d_<ContainerAllocator> Type;

  pos3d_()
  : X(0.0)
  , Y(0.0)
  , Z(0.0)
  , distance(0.0)
  , bearing(0.0)
  , flag(false)
  {
  }

  pos3d_(const ContainerAllocator& _alloc)
  : X(0.0)
  , Y(0.0)
  , Z(0.0)
  , distance(0.0)
  , bearing(0.0)
  , flag(false)
  {
  }

  typedef float _X_type;
  float X;

  typedef float _Y_type;
  float Y;

  typedef float _Z_type;
  float Z;

  typedef float _distance_type;
  float distance;

  typedef float _bearing_type;
  float bearing;

  typedef uint8_t _flag_type;
  uint8_t flag;


private:
  static const char* __s_getDataType_() { return "GoPro_Stereo/pos3d"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "d4b1ecf7db42ce21fc31494bb091e422"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "float32 X\n\
float32 Y\n\
float32 Z\n\
float32 distance\n\
float32 bearing\n\
bool flag\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, X);
    ros::serialization::serialize(stream, Y);
    ros::serialization::serialize(stream, Z);
    ros::serialization::serialize(stream, distance);
    ros::serialization::serialize(stream, bearing);
    ros::serialization::serialize(stream, flag);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, X);
    ros::serialization::deserialize(stream, Y);
    ros::serialization::deserialize(stream, Z);
    ros::serialization::deserialize(stream, distance);
    ros::serialization::deserialize(stream, bearing);
    ros::serialization::deserialize(stream, flag);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(X);
    size += ros::serialization::serializationLength(Y);
    size += ros::serialization::serializationLength(Z);
    size += ros::serialization::serializationLength(distance);
    size += ros::serialization::serializationLength(bearing);
    size += ros::serialization::serializationLength(flag);
    return size;
  }

  typedef boost::shared_ptr< ::GoPro_Stereo::pos3d_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::GoPro_Stereo::pos3d_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct pos3d
typedef  ::GoPro_Stereo::pos3d_<std::allocator<void> > pos3d;

typedef boost::shared_ptr< ::GoPro_Stereo::pos3d> pos3dPtr;
typedef boost::shared_ptr< ::GoPro_Stereo::pos3d const> pos3dConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::GoPro_Stereo::pos3d_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::GoPro_Stereo::pos3d_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace GoPro_Stereo

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::GoPro_Stereo::pos3d_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::GoPro_Stereo::pos3d_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::GoPro_Stereo::pos3d_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d4b1ecf7db42ce21fc31494bb091e422";
  }

  static const char* value(const  ::GoPro_Stereo::pos3d_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd4b1ecf7db42ce21ULL;
  static const uint64_t static_value2 = 0xfc31494bb091e422ULL;
};

template<class ContainerAllocator>
struct DataType< ::GoPro_Stereo::pos3d_<ContainerAllocator> > {
  static const char* value() 
  {
    return "GoPro_Stereo/pos3d";
  }

  static const char* value(const  ::GoPro_Stereo::pos3d_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::GoPro_Stereo::pos3d_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float32 X\n\
float32 Y\n\
float32 Z\n\
float32 distance\n\
float32 bearing\n\
bool flag\n\
\n\
";
  }

  static const char* value(const  ::GoPro_Stereo::pos3d_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::GoPro_Stereo::pos3d_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::GoPro_Stereo::pos3d_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.X);
    stream.next(m.Y);
    stream.next(m.Z);
    stream.next(m.distance);
    stream.next(m.bearing);
    stream.next(m.flag);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct pos3d_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::GoPro_Stereo::pos3d_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::GoPro_Stereo::pos3d_<ContainerAllocator> & v) 
  {
    s << indent << "X: ";
    Printer<float>::stream(s, indent + "  ", v.X);
    s << indent << "Y: ";
    Printer<float>::stream(s, indent + "  ", v.Y);
    s << indent << "Z: ";
    Printer<float>::stream(s, indent + "  ", v.Z);
    s << indent << "distance: ";
    Printer<float>::stream(s, indent + "  ", v.distance);
    s << indent << "bearing: ";
    Printer<float>::stream(s, indent + "  ", v.bearing);
    s << indent << "flag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.flag);
  }
};


} // namespace message_operations
} // namespace ros

#endif // GOPRO_STEREO_MESSAGE_POS3D_H

