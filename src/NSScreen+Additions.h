/* Copyright 2015-2016 gbrueckner.
 *
 * This file is part of Snapp.
 *
 * Snapp is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Snapp is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Snapp.  If not, see <http://www.gnu.org/licenses/>.
 */


@import AppKit;


@interface NSScreen (NSScreenAdditions)

// This method returns an array of screens so that the given location has a
// rectilinear distance of at most fuzziness from some location within the
// screen's frame.
+ (NSArray *)screensAtLocation:(NSPoint)location withFuzziness:(CGFloat)fuzziness;

+ (NSScreen *)screenAtLocation:(NSPoint)location;
+ (NSScreen *)screenAtZeroLocation;
- (NSNumber *)screenNumber;
+ (NSPoint)flipPoint:(NSPoint)point;
+ (NSRect)flipRect:(NSRect)rect;

@end
