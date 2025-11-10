// t4s6symbols8dateTimeF12closingPriceu6volume


#ifndef B33ET1MOYZWCEWURZERITRPY5CU_1OM1W9_0NU7LKB3PNWLSBXPTESKTHB4K1SWEU5POGYU9DLMWAT7VFISZON_0CZ_H_
#define B33ET1MOYZWCEWURZERITRPY5CU_1OM1W9_0NU7LKB3PNWLSBXPTESKTHB4K1SWEU5POGYU9DLMWAT7VFISZON_0CZ_H_

#include <SPL/Runtime/Type/Tuple.h>
#include <SPL/Runtime/Type/PrimitiveType.h>
#include <SPL/Runtime/Type/CollectionType.h>
#include <SPL/Runtime/Serialization/NetworkByteBuffer.h>
#include <SPL/Runtime/Serialization/NativeByteBuffer.h>
#include <SPL/Runtime/Serialization/VirtualByteBuffer.h>
#include <SPL/Runtime/Type/Optional.h>



#define SELF B33ET1MOyZwcEWURZeRItrPY5cu_1oM1W9_0NU7Lkb3pnWlsBXpTeskthB4K1SWEu5pogyU9dlmWAt7VfISZoN_0Cz

namespace SPL {

class SELF : public Tuple
{
public:
    static const bool facade = false;

    typedef SELF Self;
    
    typedef SPL::rstring symbol_type;
    typedef SPL::rstring dateTime_type;
    typedef SPL::float64 closingPrice_type;
    typedef SPL::uint32 volume_type;

    enum { num_attributes = 4 } ;
    
    SELF() : Tuple(), symbol_(), dateTime_(), closingPrice_(), volume_() {}
    SELF(const Self & ot) : Tuple(), symbol_(ot.symbol_), dateTime_(ot.dateTime_), closingPrice_(ot.closingPrice_), volume_(ot.volume_) 
      { constructPayload(ot); }
    SELF(const symbol_type & _symbol, const dateTime_type & _dateTime, const closingPrice_type & _closingPrice, const volume_type & _volume) : Tuple(), symbol_(_symbol), dateTime_(_dateTime), closingPrice_(_closingPrice), volume_(_volume) { }
    
    SELF(const Tuple & ot, bool typesafe = true) : Tuple() { assignFrom(ot, typesafe); }
    SELF(const ConstValueHandle & ot) : Tuple() { const Tuple & o = ot; assignFrom(o); }

    virtual ~SELF() {}
    
    symbol_type & get_symbol() { return symbol_; }
    const symbol_type & get_symbol() const { return symbol_; }
    void set_symbol(const symbol_type & _symbol) { symbol_ = _symbol; }
    dateTime_type & get_dateTime() { return dateTime_; }
    const dateTime_type & get_dateTime() const { return dateTime_; }
    void set_dateTime(const dateTime_type & _dateTime) { dateTime_ = _dateTime; }
    closingPrice_type & get_closingPrice() { return closingPrice_; }
    const closingPrice_type & get_closingPrice() const { return closingPrice_; }
    void set_closingPrice(const closingPrice_type & _closingPrice) { closingPrice_ = _closingPrice; }
    volume_type & get_volume() { return volume_; }
    const volume_type & get_volume() const { return volume_; }
    void set_volume(const volume_type & _volume) { volume_ = _volume; }
    virtual bool equals(const Tuple & ot) const
    {

        if (typeid(*this) != typeid(ot)) { return false; }
        const SELF & o = static_cast<const SELF &>(ot);
        return (*this == o);

    }

    virtual SELF& clear();

    Tuple* clone() const { return new Self(*this); }
    
    void serialize(VirtualByteBuffer & buf) const
    {
        buf << symbol_ << dateTime_ << closingPrice_ << volume_;
    }

    template <class BufferType>
    void serialize(ByteBuffer<BufferType> & buf) const
    {        
        buf << symbol_ << dateTime_ << closingPrice_ << volume_;
    } 
    
    void serialize(NativeByteBuffer & buf) const
    {
        this->serialize<NativeByteBuffer>(buf);
    }

    void serialize(NetworkByteBuffer & buf) const
    {
        this->serialize<NetworkByteBuffer>(buf);
    }
    
    void deserialize(VirtualByteBuffer & buf)
    {
        buf >> symbol_ >> dateTime_ >> closingPrice_ >> volume_;
    }

    template <class BufferType>
    void deserialize(ByteBuffer<BufferType> & buf)
    {        
        buf >> symbol_ >> dateTime_ >> closingPrice_ >> volume_;
    } 

    void deserialize(NativeByteBuffer & buf)
    {
        this->deserialize<NativeByteBuffer>(buf);
    }    

    void deserialize(NetworkByteBuffer & buf)
    {
        this->deserialize<NetworkByteBuffer>(buf);
    }    

    void serialize(std::ostream & ostr) const;

    void serializeWithPrecision(std::ostream & ostr) const;

    void deserialize(std::istream & istr, bool withSuffix = false);
    
    void deserializeWithNanAndInfs(std::istream & istr, bool withSuffix = false);
    
    size_t hashCode() const
    {
        size_t s = 17;
        s = 37 * s + std::hash<symbol_type >()(symbol_);
        s = 37 * s + std::hash<dateTime_type >()(dateTime_);
        s = 37 * s + std::hash<closingPrice_type >()(closingPrice_);
        s = 37 * s + std::hash<volume_type >()(volume_);
        return s;
    }
    
    size_t getSerializedSize() const
    {
        size_t size = sizeof(SPL::float64)+sizeof(SPL::uint32);
           size += symbol_.getSerializedSize();
   size += dateTime_.getSerializedSize();

        return size;

    }
    
    uint32_t getNumberOfAttributes() const 
        { return num_attributes; }

    TupleIterator getBeginIterator() 
        { return TupleIterator(*this, 0); }
    
    ConstTupleIterator getBeginIterator() const 
        { return ConstTupleIterator(*this, 0); }

    TupleIterator getEndIterator() 
        { return TupleIterator(*this, num_attributes); }

    ConstTupleIterator getEndIterator() const 
        { return ConstTupleIterator(*this, num_attributes); }
    
    TupleIterator findAttribute(const std::string & attrb)
    {
        std::unordered_map<std::string, uint32_t>::const_iterator it = mappings_->nameToIndex_.find(attrb);
        if ( it == mappings_->nameToIndex_.end() ) {
            return this->getEndIterator();
        }
        return TupleIterator(*this, it->second);
    }
    
    ConstTupleIterator findAttribute(const std::string & attrb) const
        { return const_cast<Self*>(this)->findAttribute(attrb); }
    
    TupleAttribute getAttribute(uint32_t index)
    {
        if (index >= num_attributes)
            invalidIndex (index, num_attributes);
        return TupleAttribute(mappings_->indexToName_[index], index, *this);
    }
    
    ConstTupleAttribute getAttribute(uint32_t index) const
        { return const_cast<Self*>(this)->getAttribute(index); }

    ValueHandle getAttributeValue(const std::string & attrb)
        { return getAttributeValueRaw(lookupAttributeName(*mappings_, attrb)->second); }


    ConstValueHandle getAttributeValue(const std::string & attrb) const
        { return const_cast<Self*>(this)->getAttributeValue(attrb); }

    ValueHandle getAttributeValue(uint32_t index) 
        { return getAttributeValueRaw(index); }

    ConstValueHandle getAttributeValue(uint32_t index) const
        { return const_cast<Self*>(this)->getAttributeValue(index); }

    Self & operator=(const Self & ot) 
    { 
        symbol_ = ot.symbol_;
        dateTime_ = ot.dateTime_;
        closingPrice_ = ot.closingPrice_;
        volume_ = ot.volume_; 
        assignPayload(ot);
        return *this; 
    }

    Self & operator=(const Tuple & ot) 
    { 
        assignFrom(ot); 
        return *this; 
    }

    void assign(Tuple const & tuple)
    {
        *this = static_cast<SELF const &>(tuple);
    }


    bool operator==(const Self & ot) const 
    {  
       return ( 
                symbol_ == ot.symbol_ && 
                dateTime_ == ot.dateTime_ && 
                closingPrice_ == ot.closingPrice_ && 
                volume_ == ot.volume_  
              ); 
    }
    bool operator==(const Tuple & ot) const { return equals(ot); }

    bool operator!=(const Self & ot) const { return !(*this == ot); }
    bool operator!=(const Tuple & ot) const { return !(*this == ot); }


    void swap(SELF & ot) 
    { 
        std::swap(symbol_, ot.symbol_);
        std::swap(dateTime_, ot.dateTime_);
        std::swap(closingPrice_, ot.closingPrice_);
        std::swap(volume_, ot.volume_);
      std::swap(payload_, ot.payload_);
    }

    void reset()
    { 
        *this = SELF(); 
    }

    void normalizeBoundedSetsAndMaps(); 

    const std::string & getAttributeName(uint32_t index) const
    {
        if (index >= num_attributes)
            invalidIndex (index, num_attributes);
        return mappings_->indexToName_[index];
    }

    const std::unordered_map<std::string, uint32_t> & getAttributeNames() const 
        { return mappings_->nameToIndex_; }


protected:

    ValueHandle getAttributeValueRaw(const uint32_t index)
    {
        if (index >= num_attributes)
            invalidIndex(index, num_attributes);
        const TypeOffset & t = mappings_->indexToTypeOffset_[index];
        return ValueHandle((char*)this + t.getOffset(), t.getMetaType(), &t.getTypeId());
    }

private:
    
    symbol_type symbol_;
    dateTime_type dateTime_;
    closingPrice_type closingPrice_;
    volume_type volume_;

    static TupleMappings* mappings_;
    static TupleMappings* initMappings();
};

inline VirtualByteBuffer & operator>>(VirtualByteBuffer & sbuf, SELF & tuple) 
    { tuple.deserialize(sbuf); return sbuf; }
inline VirtualByteBuffer & operator<<(VirtualByteBuffer & sbuf, SELF const & tuple) 
    { tuple.serialize(sbuf); return sbuf; }

template <class BufferType>
inline ByteBuffer<BufferType> & operator>>(ByteBuffer<BufferType> & sbuf, SELF & tuple) 
    { tuple.deserialize(sbuf); return sbuf; }
template <class BufferType>
inline ByteBuffer<BufferType> & operator<<(ByteBuffer<BufferType> & sbuf, SELF const & tuple) 
    { tuple.serialize(sbuf); return sbuf; }

inline NetworkByteBuffer & operator>>(NetworkByteBuffer & sbuf, SELF & tuple) 
    { tuple.deserialize(sbuf); return sbuf; }
inline NetworkByteBuffer & operator<<(NetworkByteBuffer & sbuf, SELF const & tuple) 
    { tuple.serialize(sbuf); return sbuf; }

inline NativeByteBuffer & operator>>(NativeByteBuffer & sbuf, SELF & tuple) 
    { tuple.deserialize(sbuf); return sbuf; }
inline NativeByteBuffer & operator<<(NativeByteBuffer & sbuf, SELF const & tuple) 
    { tuple.serialize(sbuf); return sbuf; }

template<>
inline std::ostream & serializeWithPrecision(std::ostream & ostr, SELF const & tuple) 
    { tuple.serializeWithPrecision(ostr); return ostr; }
inline std::ostream & operator<<(std::ostream & ostr, SELF const & tuple) 
    { tuple.serialize(ostr); return ostr; }
inline std::istream & operator>>(std::istream & istr, SELF & tuple) 
    { tuple.deserialize(istr); return istr; }
template<>
inline void deserializeWithSuffix(std::istream & istr, SELF  & tuple) 
{ tuple.deserialize(istr,true);  }
inline void deserializeWithNanAndInfs(std::istream & istr, SELF  & tuple, bool withSuffix = false) 
{ tuple.deserializeWithNanAndInfs(istr,withSuffix);  }



}  // namespace SPL

namespace std
{
    inline void swap(SPL::SELF & a, SPL::SELF & b)
    {
        a.swap(b);
    }
}

namespace std { 
        template <>
        struct hash<SPL::SELF> {
            inline size_t operator()(const SPL::SELF & self) const 
                { return self.hashCode(); }
        };
}

#undef SELF
#endif // B33ET1MOYZWCEWURZERITRPY5CU_1OM1W9_0NU7LKB3PNWLSBXPTESKTHB4K1SWEU5POGYU9DLMWAT7VFISZON_0CZ_H_ 


