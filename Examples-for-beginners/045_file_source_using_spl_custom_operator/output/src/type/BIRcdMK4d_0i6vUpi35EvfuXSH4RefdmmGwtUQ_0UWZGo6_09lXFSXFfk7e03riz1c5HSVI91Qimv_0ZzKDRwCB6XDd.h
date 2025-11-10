// y5_5error4warn4info5debug5trace


#ifndef BIRCDMK4D_0I6VUPI35EVFUXSH4REFDMMGWTUQ_0UWZGO6_09LXFSXFFK7E03RIZ1C5HSVI91QIMV_0ZZKDRWCB6XDD_H_
#define BIRCDMK4D_0I6VUPI35EVFUXSH4REFDMMGWTUQ_0UWZGO6_09LXFSXFFK7E03RIZ1C5HSVI91QIMV_0ZZKDRWCB6XDD_H_

#include <SPL/Runtime/Type/Enum.h>

#define SELF BIRcdMK4d_0i6vUpi35EvfuXSH4RefdmmGwtUQ_0UWZGo6_09lXFSXFfk7e03riz1c5HSVI91Qimv_0ZzKDRwCB6XDd

namespace SPL {

class SELF : public Enum
{
public:
   typedef SELF Self;

   static SELF error;
   static SELF warn;
   static SELF info;
   static SELF debug;
   static SELF trace;
   

   SELF() : Enum(*mappings_) { }
   SELF(uint32_t v) : Enum(*mappings_, v) { }
   SELF(const Self & ot) : Enum(ot) { }
   SELF(const Enum& ot) : Enum(*mappings_) { assignFrom(ot); }
   SELF(const ConstValueHandle & ot) : Enum(ot) { }
   SELF(const std::string & v);
   SELF(const rstring & v);

   virtual Enum * clone() const { return new Self(*this); }

   Self & operator=(const Self & ot) { index_ = ot.index_; return *this; }

   bool operator==(const Self & ot) const { return index_ == ot.index_; }
   bool operator!=(const Self & ot) const { return index_ != ot.index_; }
   bool operator>(const Self & ot) const { return index_ > ot.index_; }
   bool operator>=(const Self & ot) const { return index_ >= ot.index_; }
   bool operator<(const Self & ot) const { return index_ < ot.index_; }
   bool operator<=(const Self & ot) const { return index_ <= ot.index_; }

   bool operator==(const Enum & ot) const { return index_ == ot.getIndex(); }
   bool operator!=(const Enum & ot) const { return index_ != ot.getIndex(); }
   bool operator>(const Enum & ot) const { return index_ > ot.getIndex(); }
   bool operator>=(const Enum & ot) const { return index_ >= ot.getIndex(); }
   bool operator<(const Enum & ot) const { return index_ < ot.getIndex(); }
   bool operator<=(const Enum & ot) const { return index_ <= ot.getIndex(); }

   SELF& operator= (uint32_t v) { index_ = v; return *this; }

private:
   static EnumMappings* mappings_;
   static EnumMappings* initMappings();
};

// Helper for parsing CSV.
template <class T, unsigned char separator>
class CSVExtractor;

template <unsigned char separator>
class CSVExtractor<SELF, separator>
{
public:
    // Extract one token of type T from stream fs.
    static inline void extract(std::istream & fs, SELF& field) {
        field.deserialize(fs, separator);
    }
};

}  /* namespace SPL */

namespace std { 
        template<>
        struct hash<SPL::SELF> {
            inline size_t operator()(const SPL::SELF & self) const { return self.hashCode(); }
        };
}

#undef SELF
#endif // BIRCDMK4D_0I6VUPI35EVFUXSH4REFDMMGWTUQ_0UWZGO6_09LXFSXFFK7E03RIZ1C5HSVI91QIMV_0ZZKDRWCB6XDD_H_
