//
//  AdToAppTargeting.h
//  AdToAppSDK
//
//  Created 10/03/16.
//  Copyright © 2016 AdToApp. All rights reserved.
//
#import <Foundation/Foundation.h>
#if defined(__cplusplus)
#define ADTOAPP_EXTERN extern "C"
#else
#define ADTOAPP_EXTERN extern
#endif
/**
 * Provide with per-user non personally-identifiable information for ad targeting purposes.
 * Providing non personally-identifiable information using this API will improve targeting and unlock
 * improved earnings for your app.
 * @param targetingParam One of the predefined targeting keys.
 * @param value Either a predefined targeting value, or arbitrary value.
 */
ADTOAPP_EXTERN void AdToAppSDK_setTargetingParam(NSString* targetingParam, NSString* value);
#pragma mark - Targeting Metadata Constants
/**
 * Targeting metadata keys
 */
#define ADTOAPP_TARGETING_PARAM_KEYWORDS (@"keywords")
#define ADTOAPP_TARGETING_PARAM_USER_INTERESTS (@"interests")
#define ADTOAPP_TARGETING_PARAM_USER_AGE (@"age")
#define ADTOAPP_TARGETING_PARAM_USER_GENDER (@"gender")
#define ADTOAPP_TARGETING_PARAM_USER_BIRTHDAY (@"birthday")
#define ADTOAPP_TARGETING_PARAM_USER_OCCUPATION (@"occupation")
#define ADTOAPP_TARGETING_PARAM_USER_RELATIONSHIP (@"relationship")
#define ADTOAPP_TARGETING_PARAM_USER_LATITUDE (@"latitude")
#define ADTOAPP_TARGETING_PARAM_USER_LONGITUDE (@"longitude")
/**
 * Targeting metadata values (for pre-defined values)
 */
#define ADTOAPP_TARGETING_PARAM_USER_GENDER_MALE (@"male")
#define ADTOAPP_TARGETING_PARAM_USER_GENDER_FEMALE (@"female")
#define ADTOAPP_TARGETING_PARAM_USER_OCCUPATION_SCHOOL (@"school")
#define ADTOAPP_TARGETING_PARAM_USER_OCCUPATION_UNIVERSITY (@"university")
#define ADTOAPP_TARGETING_PARAM_USER_OCCUPATION_WORK (@"work")
#define ADTOAPP_TARGETING_PARAM_USER_RELATIONSHIP_SINGLE (@"single")
#define ADTOAPP_TARGETING_PARAM_USER_RELATIONSHIP_ENGAGED (@"engaged")
#define ADTOAPP_TARGETING_PARAM_USER_RELATIONSHIP_MARRIED (@"married")
#define ADTOAPP_TARGETING_PARAM_USER_RELATIONSHIP_DIVORCED (@"divorced")