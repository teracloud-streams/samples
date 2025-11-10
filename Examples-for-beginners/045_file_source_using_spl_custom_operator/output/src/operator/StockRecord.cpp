// 2akIzAad4DqV9uJYzEohxE9Pw_0UKBsup10jcJwsDM5ERdf7A4VQvI_1YQhi1zvaB7w3g29sB0ir07CoH1dpizBM


#include "./StockRecord.h"
using namespace SPL::_Operator;

#include <SPL/Runtime/Function/SPLFunctions.h>
#include <SPL/Runtime/Operator/Port/Punctuation.h>


#define MY_OPERATOR_SCOPE SPL::_Operator
#define MY_BASE_OPERATOR StockRecord_Base
#define MY_OPERATOR StockRecord$OP




   void MY_OPERATOR_SCOPE::MY_OPERATOR::process(uint32_t index)
   {
        {
    SPL::uint64 id$_fileHandle = lit$1;
    SPL::int32 id$_errorCode = lit$2;
    id$_fileHandle = ::SPL::Functions::File::fopen(((SPL::Functions::Utility::getToolkitDirectory(lit$5) + lit$4) + lit$3), lit$6, id$_errorCode);
    if ((id$_errorCode != lit$7)) 
        {
            ::SPL::Functions::Utility::appTrc(SPL::BIRcdMK4d_0i6vUpi35EvfuXSH4RefdmmGwtUQ_0UWZGo6_09lXFSXFfk7e03riz1c5HSVI91Qimv_0ZzKDRwCB6XDd::error, (((((lit$12 + SPL::Functions::Utility::getToolkitDirectory(lit$11)) + lit$10) + lit$9) + lit$8) + ::SPL::spl_cast<SPL::rstring, SPL::int32 >::cast(id$_errorCode)), lit$13, lit$14);
            ::SPL::Functions::Utility::abort(lit$15, lit$16);
        }
    while (lit$17)
        {
            const SPL::rstring id$_line = ::SPL::Functions::File::freadLine(id$_fileHandle, id$_errorCode);
            if ((id$_errorCode == lit$18)) 
                {
                    submit (static_cast<SPL::Punctuation::Value>(SPL::BcyIw_123yuxalGHt_0UPzvHr6jutVOfqYy4EjyWMc7ELFtCMYkxYjxKoc_1GyrP3_0eilO0roi7TbPc_14tWTm1iZBT::FinalMarker.getIndex()+1), lit$19);
                    ::SPL::Functions::File::fclose(id$_fileHandle, id$_errorCode);
                    break;
                }
            if ((id$_errorCode != lit$20)) 
                {
                    ::SPL::Functions::Utility::appTrc(SPL::BIRcdMK4d_0i6vUpi35EvfuXSH4RefdmmGwtUQ_0UWZGo6_09lXFSXFfk7e03riz1c5HSVI91Qimv_0ZzKDRwCB6XDd::error, (((lit$23 + lit$22) + lit$21) + ::SPL::spl_cast<SPL::rstring, SPL::int32 >::cast(id$_errorCode)), lit$24, lit$25);
                    ::SPL::Functions::Utility::abort(lit$26, lit$27);
                }
            const SPL::list<SPL::rstring > id$_tokens = ::SPL::Functions::String::csvTokenize(id$_line);
            state$_stockReport = SPL::B33ET1MOyZwcEWURZeRItrPY5cu_1oM1W9_0NU7Lkb3pnWlsBXpTeskthB4K1SWEu5pogyU9dlmWAt7VfISZoN_0Cz().clear();
            state$_stockReport.get_symbol() = id$_tokens.at(lit$28);
            state$_stockReport.get_dateTime() = id$_tokens.at(lit$29);
            state$_stockReport.get_closingPrice() = ::SPL::spl_cast<SPL::float64, SPL::rstring >::cast(id$_tokens.at(lit$30));
            state$_stockReport.get_volume() = ::SPL::spl_cast<SPL::uint32, SPL::rstring >::cast(id$_tokens.at(lit$31));
            do { SPL::B33ET1MOyZwcEWURZeRItrPY5cu_1oM1W9_0NU7Lkb3pnWlsBXpTeskthB4K1SWEu5pogyU9dlmWAt7VfISZoN_0Cz temp = state$_stockReport; submit (temp, lit$32); } while(0);
            state$_tupleCnt++;
        }
}

   }

   void MY_OPERATOR_SCOPE::MY_OPERATOR::allPortsReady()
   {
        createThreads(1);
   }

static SPL::Operator * initer() { return new MY_OPERATOR_SCOPE::MY_OPERATOR(); }
bool MY_BASE_OPERATOR::globalInit_ = MY_BASE_OPERATOR::globalIniter();
bool MY_BASE_OPERATOR::globalIniter() {
    instantiators_.insert(std::make_pair("StockRecord",&initer));
    return true;
}

template<class T> static void initRTC (SPL::Operator& o, T& v, const char * n) {
    SPL::ValueHandle vh = v;
    o.getContext().getRuntimeConstantValue(vh, n);
}

MY_BASE_OPERATOR::MY_BASE_OPERATOR()
 : Operator()  {
    uint32_t index = getIndex();
    initRTC(*this, lit$0, "lit$0");
    initRTC(*this, lit$1, "lit$1");
    initRTC(*this, lit$2, "lit$2");
    initRTC(*this, lit$3, "lit$3");
    initRTC(*this, lit$4, "lit$4");
    initRTC(*this, lit$5, "lit$5");
    initRTC(*this, lit$6, "lit$6");
    initRTC(*this, lit$7, "lit$7");
    initRTC(*this, lit$8, "lit$8");
    initRTC(*this, lit$9, "lit$9");
    initRTC(*this, lit$10, "lit$10");
    initRTC(*this, lit$11, "lit$11");
    initRTC(*this, lit$12, "lit$12");
    initRTC(*this, lit$13, "lit$13");
    initRTC(*this, lit$14, "lit$14");
    initRTC(*this, lit$15, "lit$15");
    initRTC(*this, lit$16, "lit$16");
    initRTC(*this, lit$17, "lit$17");
    initRTC(*this, lit$18, "lit$18");
    initRTC(*this, lit$19, "lit$19");
    initRTC(*this, lit$20, "lit$20");
    initRTC(*this, lit$21, "lit$21");
    initRTC(*this, lit$22, "lit$22");
    initRTC(*this, lit$23, "lit$23");
    initRTC(*this, lit$24, "lit$24");
    initRTC(*this, lit$25, "lit$25");
    initRTC(*this, lit$26, "lit$26");
    initRTC(*this, lit$27, "lit$27");
    initRTC(*this, lit$28, "lit$28");
    initRTC(*this, lit$29, "lit$29");
    initRTC(*this, lit$30, "lit$30");
    initRTC(*this, lit$31, "lit$31");
    initRTC(*this, lit$32, "lit$32");
    state$_tupleCnt = lit$0;
    SPLAPPTRC(L_DEBUG, "Variable: state$_tupleCnt Value: " << state$_tupleCnt,SPL_OPER_DBG);
    state$_stockReport = SPL::B33ET1MOyZwcEWURZeRItrPY5cu_1oM1W9_0NU7Lkb3pnWlsBXpTeskthB4K1SWEu5pogyU9dlmWAt7VfISZoN_0Cz().clear();
    SPLAPPTRC(L_DEBUG, "Variable: state$_stockReport Value: " << state$_stockReport,SPL_OPER_DBG);
    (void) getParameters(); // ensure thread safety by initializing here
    OperatorMetrics& om = getContext().getMetrics();
}
MY_BASE_OPERATOR::~MY_BASE_OPERATOR()
{
    for (ParameterMapType::const_iterator it = paramValues_.begin(); it != paramValues_.end(); it++) {
        const ParameterValueListType& pvl = it->second;
        for (ParameterValueListType::const_iterator it2 = pvl.begin(); it2 != pvl.end(); it2++) {
            delete *it2;
        }
    }
}



void MY_BASE_OPERATOR::checkpointStateVariables(NetworkByteBuffer & opstate) const {
    opstate << state$_tupleCnt;
    opstate << state$_stockReport;
}

void MY_BASE_OPERATOR::restoreStateVariables(NetworkByteBuffer & opstate) {
    opstate >> state$_tupleCnt;
    opstate >> state$_stockReport;
}

void MY_BASE_OPERATOR::checkpointStateVariables(Checkpoint & ckpt) {
    ckpt << state$_tupleCnt;
    ckpt << state$_stockReport;
}

void MY_BASE_OPERATOR::resetStateVariables(Checkpoint & ckpt) {
    ckpt >> state$_tupleCnt;
    ckpt >> state$_stockReport;
}

void MY_BASE_OPERATOR::resetStateVariablesToInitialState() {
    state$_tupleCnt = lit$0;
    SPLAPPTRC(L_DEBUG, "Variable: state$_tupleCnt Value: " << state$_tupleCnt,SPL_OPER_DBG);
    state$_stockReport = SPL::B33ET1MOyZwcEWURZeRItrPY5cu_1oM1W9_0NU7Lkb3pnWlsBXpTeskthB4K1SWEu5pogyU9dlmWAt7VfISZoN_0Cz().clear();
    SPLAPPTRC(L_DEBUG, "Variable: state$_stockReport Value: " << state$_stockReport,SPL_OPER_DBG);
}

bool MY_BASE_OPERATOR::hasStateVariables() const {
    return true;
}

void MY_BASE_OPERATOR::resetToInitialStateRaw() {
    AutoMutex $apm($svMutex);
    StateHandler *sh = getContext().getStateHandler();
    if (sh != NULL) {
        sh->resetToInitialState();
    }
    resetStateVariablesToInitialState();
}

void MY_BASE_OPERATOR::checkpointRaw(Checkpoint & ckpt) {
    AutoMutex $apm($svMutex);
    StateHandler *sh = getContext().getStateHandler();
    if (sh != NULL) {
        sh->checkpoint(ckpt);
    }
    checkpointStateVariables(ckpt);
}

void MY_BASE_OPERATOR::resetRaw(Checkpoint & ckpt) {
    AutoMutex $apm($svMutex);
    StateHandler *sh = getContext().getStateHandler();
    if (sh != NULL) {
        sh->reset(ckpt);
    }
    resetStateVariables(ckpt);
}



