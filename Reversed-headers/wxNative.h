//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NativeTask;
@protocol wxNativeReportDelegate;

@interface wxNative : NSObject
{
    struct OpaqueJSContext *_jscontext;
    struct MBUdpScriptState *_udpScriptState;
    // Error parsing type: ^{MBUdpMgr=^^?I{mutex={_opaque_pthread_mutex_t=q[56c]}}{map<long, MBUdpEngine *, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, MBUdpEngine *> > >={__tree<std::__1::__value_type<long, MBUdpEngine *>, std::__1::__map_value_compare<long, std::__1::__value_type<long, MBUdpEngine *>, std::__1::less<long>, true>, std::__1::allocator<std::__1::__value_type<long, MBUdpEngine *> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long, MBUdpEngine *>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<long, std::__1::__value_type<long, MBUdpEngine *>, std::__1::less<long>, true> >=Q}}}^?^v{atomic<bool>={__cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> >=AB}}}, name: _udpMgr
    // Error parsing type: ^{LockStepMgr=^^?I{mutex={_opaque_pthread_mutex_t=q[56c]}}{map<long, LockStepLogic *, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, LockStepLogic *> > >={__tree<std::__1::__value_type<long, LockStepLogic *>, std::__1::__map_value_compare<long, std::__1::__value_type<long, LockStepLogic *>, std::__1::less<long>, true>, std::__1::allocator<std::__1::__value_type<long, LockStepLogic *> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long, LockStepLogic *>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<long, std::__1::__value_type<long, LockStepLogic *>, std::__1::less<long>, true> >=Q}}}^?^v{atomic<bool>={__cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> >=AB}}^{ReportCallback}^v{atomic<bool>={__cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> >=AB}}{map<long, std::__1::map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char> > > >, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, std::__1::map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char> > > > > > >={__tree<std::__1::__value_type<long, std::__1::map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char> > > > >, std::__1::__map_value_compare<long, std::__1::__value_type<long, std::__1::map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char> > > > >, std::__1::less<long>, true>, std::__1::allocator<std::__1::__value_type<long, std::__1::map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char> > > > > > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long, std::__1::map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char> > > > >, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<long, std::__1::__value_type<long, std::__1::map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char> > > > >, std::__1::less<long>, true> >=Q}}}}, name: _lockstepMgr
    struct LockStepScriptState *_lockstepScriptState;
    struct MBTcpScriptState *_tcpScriptState;
    // Error parsing type: ^{MBTcpMgr=^^?I{mutex={_opaque_pthread_mutex_t=q[56c]}}{map<long, MBTcpEngine *, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, MBTcpEngine *> > >={__tree<std::__1::__value_type<long, MBTcpEngine *>, std::__1::__map_value_compare<long, std::__1::__value_type<long, MBTcpEngine *>, std::__1::less<long>, true>, std::__1::allocator<std::__1::__value_type<long, MBTcpEngine *> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long, MBTcpEngine *>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<long, std::__1::__value_type<long, MBTcpEngine *>, std::__1::less<long>, true> >=Q}}}^?^v{atomic<bool>={__cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> >=AB}}}, name: _tcpMgr
    NativeTask *lockstepTask;
    NativeTask *udpTask;
    NativeTask *tcpTask;
    struct LockStepCallback *m_pCallback;
    id <wxNativeReportDelegate> _reportDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <wxNativeReportDelegate> reportDelegate; // @synthesize reportDelegate=_reportDelegate;
- (void)dealloc;
- (void)releaseContext;
- (void)setLogDelegate:(id)arg1;
- (void)setConfig:(map_5554a4ce)arg1;
- (id)initWithJSContext:(struct OpaqueJSContext *)arg1 parent:(struct OpaqueJSValue *)arg2;

@end
