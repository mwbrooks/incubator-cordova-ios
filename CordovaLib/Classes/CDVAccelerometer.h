/*
 Licensed to the Apache Software Foundation (ASF) under one
 or more contributor license agreements.  See the NOTICE file
 distributed with this work for additional information
 regarding copyright ownership.  The ASF licenses this file
 to you under the Apache License, Version 2.0 (the
 "License"); you may not use this file except in compliance
 with the License.  You may obtain a copy of the License at
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing,
 software distributed under the License is distributed on an
 "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 KIND, either express or implied.  See the License for the
 specific language governing permissions and limitations
 under the License.
 */

#import <UIKit/UIKit.h>
#import "CDVPlugin.h"



@interface CDVAccelerometer : CDVPlugin<UIAccelerometerDelegate> 
{
	double x;
    double y;
    double z;
    NSTimeInterval timestamp;
}

@property (readonly, assign) BOOL isRunning;
@property (nonatomic, retain) NSMutableArray* accelCallbacks;
@property (nonatomic, retain) NSMutableDictionary* watchCallbacks;

- (CDVAccelerometer*) init;

- (void)start;
- (void)stop;
- (void)getAcceleration:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;
- (void) addWatch:(NSMutableArray *)arguments withDict:(NSMutableDictionary *)options;
- (void) clearWatch:(NSMutableArray *)arguments withDict:(NSMutableDictionary *)options;

@end


