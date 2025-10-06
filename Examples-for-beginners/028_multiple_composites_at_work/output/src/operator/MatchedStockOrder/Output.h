// cTPi21kItolq6HYjxJEIdFlIWVTtp6qYXcBajz1nKcPSYLZ4euNchiAP0dbH0PxpCvZba9s6fU1ltip5GGAhDx


#ifndef SPL_OPER_INSTANCE_MATCHEDSTOCKORDER_OUTPUT_H_
#define SPL_OPER_INSTANCE_MATCHEDSTOCKORDER_OUTPUT_H_

#include <SPL/Runtime/Serialization/NetworkByteBuffer.h>
#include <SPL/Runtime/Operator/Operator.h>
#include <SPL/Runtime/Operator/ParameterValue.h>
#include <SPL/Runtime/Operator/OperatorContext.h>
#include <SPL/Runtime/Operator/OperatorMetrics.h>
#include <SPL/Runtime/Operator/Port/AutoPortMutex.h>
#include <SPL/Runtime/Operator/State/StateHandler.h>
#include <SPL/Runtime/ProcessingElement/PE.h>
#include <SPL/Runtime/Type/SPLType.h>
#include <SPL/Runtime/Utility/CV.h>
using namespace UTILS_NAMESPACE;

#include "../../type/BEqO_0Ev7XRaaviprs3CdvGHRyS2gp2Rfs49NHKVkxja62OEoFdALjnIL3lURN5ANhPLcnPV34ITuVxzg_1TSldCE.h"

#include <bitset>

#define MY_OPERATOR Output$OP
#define MY_BASE_OPERATOR Output_Base
#define MY_OPERATOR_SCOPE SPL::_Operator::MatchedStockOrder

namespace SPL {
namespace _Operator {
namespace MatchedStockOrder {

class MY_BASE_OPERATOR : public Operator
{
public:
    
    typedef SPL::BEqO_0Ev7XRaaviprs3CdvGHRyS2gp2Rfs49NHKVkxja62OEoFdALjnIL3lURN5ANhPLcnPV34ITuVxzg_1TSldCE IPort0Type;
    typedef SPL::BEqO_0Ev7XRaaviprs3CdvGHRyS2gp2Rfs49NHKVkxja62OEoFdALjnIL3lURN5ANhPLcnPV34ITuVxzg_1TSldCE OPort0Type;
    
    MY_BASE_OPERATOR();
    
    ~MY_BASE_OPERATOR();
    
    inline void tupleLogic(Tuple & tuple, uint32_t port);
    void processRaw(Tuple & tuple, uint32_t port);
    
    inline void punctLogic(Punctuation const & punct, uint32_t port);
    void processRaw(Punctuation const & punct, uint32_t port);
    void punctPermitProcessRaw(Punctuation const & punct, uint32_t port);
    void punctNoPermitProcessRaw(Punctuation const & punct, uint32_t port);
    
    inline void submit(Tuple & tuple, uint32_t port)
    {
        Operator::submit(tuple, port);
    }
    inline void submit(Punctuation const & punct, uint32_t port)
    {
        Operator::submit(punct, port);
    }
    
    
    
    SPL::float32 lit$0;
    SPL::uint32 lit$1;
    
    SPL::BEqO_0Ev7XRaaviprs3CdvGHRyS2gp2Rfs49NHKVkxja62OEoFdALjnIL3lURN5ANhPLcnPV34ITuVxzg_1TSldCE state$myOutput;
    
protected:
    Mutex $svMutex;
    typedef std::bitset<2> OPortBitsetType;
    OPortBitsetType $oportBitset;
    Mutex $fpMutex;
    void checkpointStateVariables(NetworkByteBuffer & opstate) const;
    void restoreStateVariables(NetworkByteBuffer & opstate);
    void checkpointStateVariables(Checkpoint & ckpt);
    void resetStateVariables(Checkpoint & ckpt);
    void resetStateVariablesToInitialState();
    bool hasStateVariables() const;
    void resetToInitialStateRaw();
    void checkpointRaw(Checkpoint & ckpt);
    void resetRaw(Checkpoint & ckpt);

private:
    static bool globalInit_;
    static bool globalIniter();
    ParameterMapType paramValues_;
    Metric* metrics_[1];
    ParameterMapType& getParameters() { return paramValues_;}
    void addParameterValue(std::string const & param, ConstValueHandle const& value)
    {
        ParameterMapType::iterator it = paramValues_.find(param);
        if (it == paramValues_.end())
            it = paramValues_.insert (std::make_pair (param, ParameterValueListType())).first;
        it->second.push_back(&ParameterValue::create(value));
    }
    void addParameterValue(std::string const & param)
    {
        ParameterMapType::iterator it = paramValues_.find(param);
        if (it == paramValues_.end())
            it = paramValues_.insert (std::make_pair (param, ParameterValueListType())).first;
        it->second.push_back(&ParameterValue::create());
    }
};


class MY_OPERATOR : public MY_BASE_OPERATOR
    
{
public:
   
       void getCheckpoint(NetworkByteBuffer & opstate) { checkpointStateVariables(opstate); }
       void restoreCheckpoint(NetworkByteBuffer & opstate) { restoreStateVariables(opstate); }
   
   
};

} // namespace MatchedStockOrder
} // namespace _Operator
} // namespace SPL

#undef MY_OPERATOR_SCOPE
#undef MY_BASE_OPERATOR
#undef MY_OPERATOR
#endif // SPL_OPER_INSTANCE_MATCHEDSTOCKORDER_OUTPUT_H_

