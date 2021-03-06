/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFWatchdogTimer : NSObject {
    id /* block */  _handler;
    double  _interval;
    NSObject<OS_dispatch_queue> * _queue;
    double  _remainingTimeInterval;
    NSDate * _startTime;
    NSObject<OS_dispatch_source> * _timerSource;
    unsigned long long  _timerState;
}

- (void).cxx_destruct;
- (void)_scheduleTimer;
- (void)_scheduleTimerWithInterval:(double)arg1;
- (void)cancel;
- (bool)cancelIfNotAlreadyCanceled;
- (void)dealloc;
- (id)initWithTimeoutInterval:(double)arg1 onQueue:(id)arg2 timeoutHandler:(id /* block */)arg3;
- (id)initWithTimeoutInterval:(double)arg1 timeoutHandler:(id /* block */)arg2;
- (void)pause;
- (void)reset;
- (void)resume;
- (void)start;
- (void)stop;

@end
