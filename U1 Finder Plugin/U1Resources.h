/*
 * Ubuntu One Finder Plugin
 * Copyright (C) 2012 - José Expósito <jose.exposito89@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>
 */
#import <Cocoa/Cocoa.h>

@interface U1Resources : NSObject

    /*!
     Returns the path of the specified resource.
     @param  resourceName The name of the resource to search.
     @return The path of the resource or nil if the resource doesn't exists.
     */
    + (NSString *)getPathForResourceNamed:(NSString *)resourceName;

@end

/*!
 Specified function to translate the U1 Finder Plugin strings loading the translations from the plugin bundle.
 */
inline NSString *U1LocalizedString(NSString *stringToTranslate)
{
    return [[NSBundle bundleWithIdentifier:@"com.egg-software.U1-Finder-Plugin"] localizedStringForKey:stringToTranslate value:@"" table:nil];
}
