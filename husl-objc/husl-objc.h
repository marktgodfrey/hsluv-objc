//
//  husl_objc.h
//  husl-objc
//
//  Created by Roger Tallada on 4/6/15.
//  Copyright (c) 2015 Alexei Boronine
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

#ifndef husl_objc_h
#define husl_objc_h

// Accepts red, green and blue values between 0 and 1, returns the color in hex format, as in "#012C4A"
NSString *rgbToHex(double red, double green, double blue);

// Accepts an hex color, as in "#012C4A", and stores its red, green and blue components with values between 0 and 1.
BOOL hexToRgb(NSString *hex, double *red, double *green, double *blue);

// Hue is a value between 0 and 360, saturation and lightness between 0 and 100. Stores the RGB in values between 0 and 1.
void huslToRgb(double hue, double saturation, double lightness, double *red, double *green, double *blue);

// Red, green and blue values between 0 and 1, stores the husl components with hue between 0 and 360, saturation and lightness between 0 and 100.
void rgbToHusl(double red, double green, double blue, double *hue, double *saturation, double *lightness);

// Hue is a value between 0 and 360, saturation and lightness between 0 and 100. Stores the RGB in values between 0 and 1.
void huslpToRgb(double hue, double saturation, double lightness, double *red, double *green, double *blue);

// Red, green and blue values between 0 and 1, stores the huslp components with hue between 0 and 360, saturation and lightness between 0 and 100.
void rgbToHuslp(double red, double green, double blue, double *hue, double *saturation, double *lightness);

#endif