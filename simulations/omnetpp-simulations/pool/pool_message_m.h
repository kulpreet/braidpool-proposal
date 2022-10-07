//
// Generated file, do not edit! Created by opp_msgtool 6.0 from pool_message.msg.
//

#ifndef __POOL_MESSAGE_M_H
#define __POOL_MESSAGE_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// opp_msgtool version check
#define MSGC_VERSION 0x0600
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgtool: 'make clean' should help.
#endif

struct pool_message_reference;
class PoolMessage;
/**
 * Struct generated from pool_message.msg:22 by opp_msgtool.
 */
struct pool_message_reference
{
    pool_message_reference();
    int source = 0;
    int sequenceNumber = 0;
};

// helpers for local use
void __doPacking(omnetpp::cCommBuffer *b, const pool_message_reference& a);
void __doUnpacking(omnetpp::cCommBuffer *b, pool_message_reference& a);

inline void doParsimPacking(omnetpp::cCommBuffer *b, const pool_message_reference& obj) { __doPacking(b, obj); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, pool_message_reference& obj) { __doUnpacking(b, obj); }

/**
 * Class generated from <tt>pool_message.msg:28</tt> by opp_msgtool.
 * <pre>
 * message PoolMessage
 * {
 *     int source;
 *     int destination;
 *     int sequenceNumber = 0;
 *     int hopCount = 0;
 *     pool_message_reference ref[];
 * }
 * </pre>
 */
class PoolMessage : public ::omnetpp::cMessage
{
  protected:
    int source = 0;
    int destination = 0;
    int sequenceNumber = 0;
    int hopCount = 0;
    pool_message_reference *ref = nullptr;
    size_t ref_arraysize = 0;

  private:
    void copy(const PoolMessage& other);

  protected:
    bool operator==(const PoolMessage&) = delete;

  public:
    PoolMessage(const char *name=nullptr, short kind=0);
    PoolMessage(const PoolMessage& other);
    virtual ~PoolMessage();
    PoolMessage& operator=(const PoolMessage& other);
    virtual PoolMessage *dup() const override {return new PoolMessage(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual int getSource() const;
    virtual void setSource(int source);

    virtual int getDestination() const;
    virtual void setDestination(int destination);

    virtual int getSequenceNumber() const;
    virtual void setSequenceNumber(int sequenceNumber);

    virtual int getHopCount() const;
    virtual void setHopCount(int hopCount);

    virtual void setRefArraySize(size_t size);
    virtual size_t getRefArraySize() const;
    virtual const pool_message_reference& getRef(size_t k) const;
    virtual pool_message_reference& getRefForUpdate(size_t k) { return const_cast<pool_message_reference&>(const_cast<PoolMessage*>(this)->getRef(k));}
    virtual void setRef(size_t k, const pool_message_reference& ref);
    virtual void insertRef(size_t k, const pool_message_reference& ref);
    [[deprecated]] void insertRef(const pool_message_reference& ref) {appendRef(ref);}
    virtual void appendRef(const pool_message_reference& ref);
    virtual void eraseRef(size_t k);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const PoolMessage& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, PoolMessage& obj) {obj.parsimUnpack(b);}


namespace omnetpp {

inline any_ptr toAnyPtr(const pool_message_reference *p) {return any_ptr(p);}
template<> inline pool_message_reference *fromAnyPtr(any_ptr ptr) { return ptr.get<pool_message_reference>(); }
template<> inline PoolMessage *fromAnyPtr(any_ptr ptr) { return check_and_cast<PoolMessage*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __POOL_MESSAGE_M_H

