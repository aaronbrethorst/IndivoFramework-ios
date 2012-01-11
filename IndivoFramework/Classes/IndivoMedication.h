/*
 IndivoMedication.h
 IndivoFramework
 
 Created by Pascal Pfiffner on 9/26/11.
 Copyright (c) 2011 Children's Hospital Boston
 
 This library is free software; you can redistribute it and/or
 modify it under the terms of the GNU Lesser General Public
 License as published by the Free Software Foundation; either
 version 2.1 of the License, or (at your option) any later version.
 
 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 Lesser General Public License for more details.
 
 You should have received a copy of the GNU Lesser General Public
 License along with this library; if not, write to the Free Software
 Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#import "IndivoDocument.h"
#import "IndivoPrescription.h"


@interface IndivoMedication : IndivoDocument

@property (nonatomic, strong) INDate *dateStarted;
@property (nonatomic, strong) INDate *dateStopped;
@property (nonatomic, strong) INString *reasonStopped;

@property (nonatomic, strong) INCodedValue *name;
@property (nonatomic, strong) INCodedValue *brandName;

@property (nonatomic, strong) INUnitValue *dose;
@property (nonatomic, strong) INCodedValue *route;
@property (nonatomic, strong) INUnitValue *strength;
@property (nonatomic, strong) INCodedValue *frequency;

@property (nonatomic, strong) IndivoPrescription *prescription;
@property (nonatomic, strong) INString *details;

@property (nonatomic, strong) UIImage *pillImage;

- (void)loadPillImageBypassingCache:(BOOL)bypass callback:(INCancelErrorBlock)callback;


@end
