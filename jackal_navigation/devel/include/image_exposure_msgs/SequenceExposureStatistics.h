// Generated by gencpp from file image_exposure_msgs/SequenceExposureStatistics.msg
// DO NOT EDIT!


#ifndef IMAGE_EXPOSURE_MSGS_MESSAGE_SEQUENCEEXPOSURESTATISTICS_H
#define IMAGE_EXPOSURE_MSGS_MESSAGE_SEQUENCEEXPOSURESTATISTICS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <image_exposure_msgs/ImageExposureStatistics.h>

namespace image_exposure_msgs
{
template <class ContainerAllocator>
struct SequenceExposureStatistics_
{
  typedef SequenceExposureStatistics_<ContainerAllocator> Type;

  SequenceExposureStatistics_()
    : exposures()
    , underExposed(0)
    , overExposed(0)
    , meanIrradiance(0.0)
    , minMeasurableIrradiance(0.0)
    , maxMeasurableIrradiance(0.0)
    , minObservedIrradiance(0.0)
    , maxObservedIrradiance(0.0)  {
    }
  SequenceExposureStatistics_(const ContainerAllocator& _alloc)
    : exposures(_alloc)
    , underExposed(0)
    , overExposed(0)
    , meanIrradiance(0.0)
    , minMeasurableIrradiance(0.0)
    , maxMeasurableIrradiance(0.0)
    , minObservedIrradiance(0.0)
    , maxObservedIrradiance(0.0)  {
  (void)_alloc;
    }



   typedef std::vector< ::image_exposure_msgs::ImageExposureStatistics_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::image_exposure_msgs::ImageExposureStatistics_<ContainerAllocator> >::other >  _exposures_type;
  _exposures_type exposures;

   typedef uint32_t _underExposed_type;
  _underExposed_type underExposed;

   typedef uint32_t _overExposed_type;
  _overExposed_type overExposed;

   typedef double _meanIrradiance_type;
  _meanIrradiance_type meanIrradiance;

   typedef double _minMeasurableIrradiance_type;
  _minMeasurableIrradiance_type minMeasurableIrradiance;

   typedef double _maxMeasurableIrradiance_type;
  _maxMeasurableIrradiance_type maxMeasurableIrradiance;

   typedef double _minObservedIrradiance_type;
  _minObservedIrradiance_type minObservedIrradiance;

   typedef double _maxObservedIrradiance_type;
  _maxObservedIrradiance_type maxObservedIrradiance;





  typedef boost::shared_ptr< ::image_exposure_msgs::SequenceExposureStatistics_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::image_exposure_msgs::SequenceExposureStatistics_<ContainerAllocator> const> ConstPtr;

}; // struct SequenceExposureStatistics_

typedef ::image_exposure_msgs::SequenceExposureStatistics_<std::allocator<void> > SequenceExposureStatistics;

typedef boost::shared_ptr< ::image_exposure_msgs::SequenceExposureStatistics > SequenceExposureStatisticsPtr;
typedef boost::shared_ptr< ::image_exposure_msgs::SequenceExposureStatistics const> SequenceExposureStatisticsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::image_exposure_msgs::SequenceExposureStatistics_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::image_exposure_msgs::SequenceExposureStatistics_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace image_exposure_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'image_exposure_msgs': ['/home/anoop/jackal_navigation/src/pointgrey_camera_driver/image_exposure_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'statistics_msgs': ['/home/anoop/jackal_navigation/src/pointgrey_camera_driver/statistics_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::image_exposure_msgs::SequenceExposureStatistics_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::image_exposure_msgs::SequenceExposureStatistics_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::image_exposure_msgs::SequenceExposureStatistics_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::image_exposure_msgs::SequenceExposureStatistics_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::image_exposure_msgs::SequenceExposureStatistics_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::image_exposure_msgs::SequenceExposureStatistics_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::image_exposure_msgs::SequenceExposureStatistics_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2a4f3187c50e7b3544984e9e28ce4328";
  }

  static const char* value(const ::image_exposure_msgs::SequenceExposureStatistics_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2a4f3187c50e7b35ULL;
  static const uint64_t static_value2 = 0x44984e9e28ce4328ULL;
};

template<class ContainerAllocator>
struct DataType< ::image_exposure_msgs::SequenceExposureStatistics_<ContainerAllocator> >
{
  static const char* value()
  {
    return "image_exposure_msgs/SequenceExposureStatistics";
  }

  static const char* value(const ::image_exposure_msgs::SequenceExposureStatistics_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::image_exposure_msgs::SequenceExposureStatistics_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# exposure statistics for a multi-exposure HDR sequence\n\
ImageExposureStatistics[] exposures\n\
uint32 underExposed 		# number of pixels underexposed in longest exposure\n\
uint32 overExposed  		# number of pixels overexposed in shortest\n\
float64 meanIrradiance 		# mean irradiance of all properly exposed pixels in all images in the sequence\n\
float64 minMeasurableIrradiance\n\
float64 maxMeasurableIrradiance\n\
float64 minObservedIrradiance\n\
float64 maxObservedIrradiance\n\
\n\
\n\
================================================================================\n\
MSG: image_exposure_msgs/ImageExposureStatistics\n\
# message for exposure statistics reported a single image\n\
time stamp         # image time stamp\n\
string time_reference # The name of the reference clock for this message's timestamp.\n\
float32 shutterms  # shutter durations in ms\n\
float32 gaindb     # gain in decibels\n\
# pixel exposure and latency statistics\n\
uint32 underExposed # number of pixels underexposed\n\
uint32 overExposed  # number of pixels overexposed\n\
statistics_msgs/Stats1D pixelVal   # distribution of pixel values in the image\n\
statistics_msgs/Stats1D pixelAge   # distribution of pixel ages in frames\n\
# irradiance = pixelval/(shutterTime*10^(gaindb/10.0))\n\
float64 meanIrradiance\n\
float64 minMeasurableIrradiance\n\
float64 maxMeasurableIrradiance\n\
float64 minObservedIrradiance\n\
float64 maxObservedIrradiance\n\
\n\
\n\
\n\
================================================================================\n\
MSG: statistics_msgs/Stats1D\n\
# statistics of a 1-D distribution\n\
float64 min\n\
float64 max \n\
float64 mean \n\
float64 variance\n\
int64 N\n\
";
  }

  static const char* value(const ::image_exposure_msgs::SequenceExposureStatistics_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::image_exposure_msgs::SequenceExposureStatistics_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.exposures);
      stream.next(m.underExposed);
      stream.next(m.overExposed);
      stream.next(m.meanIrradiance);
      stream.next(m.minMeasurableIrradiance);
      stream.next(m.maxMeasurableIrradiance);
      stream.next(m.minObservedIrradiance);
      stream.next(m.maxObservedIrradiance);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SequenceExposureStatistics_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::image_exposure_msgs::SequenceExposureStatistics_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::image_exposure_msgs::SequenceExposureStatistics_<ContainerAllocator>& v)
  {
    s << indent << "exposures[]" << std::endl;
    for (size_t i = 0; i < v.exposures.size(); ++i)
    {
      s << indent << "  exposures[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::image_exposure_msgs::ImageExposureStatistics_<ContainerAllocator> >::stream(s, indent + "    ", v.exposures[i]);
    }
    s << indent << "underExposed: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.underExposed);
    s << indent << "overExposed: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.overExposed);
    s << indent << "meanIrradiance: ";
    Printer<double>::stream(s, indent + "  ", v.meanIrradiance);
    s << indent << "minMeasurableIrradiance: ";
    Printer<double>::stream(s, indent + "  ", v.minMeasurableIrradiance);
    s << indent << "maxMeasurableIrradiance: ";
    Printer<double>::stream(s, indent + "  ", v.maxMeasurableIrradiance);
    s << indent << "minObservedIrradiance: ";
    Printer<double>::stream(s, indent + "  ", v.minObservedIrradiance);
    s << indent << "maxObservedIrradiance: ";
    Printer<double>::stream(s, indent + "  ", v.maxObservedIrradiance);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IMAGE_EXPOSURE_MSGS_MESSAGE_SEQUENCEEXPOSURESTATISTICS_H
