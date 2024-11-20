/*
    MTPrivilegesDaemon.h
    Copyright 2024 SAP SE

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

#import <Cocoa/Cocoa.h>
#import "PrivilegesDaemonProtocol.h"

@interface MTPrivilegesDaemon : NSObject <PrivilegesDaemonProtocol, NSXPCListenerDelegate>

/*!
 @method        invalidateXPC
 @abstract      Invalidates all connections to the daemon.
*/
- (void)invalidateXPC;

/*!
 @method        numberOfActiveXPCConnections
 @abstract      Get the number of connections currently open to the daemon.
*/
- (NSInteger)numberOfActiveXPCConnections;

@end
