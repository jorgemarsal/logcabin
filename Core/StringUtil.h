/* Copyright (c) 2011-2012 Stanford University
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR(S) DISCLAIM ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL AUTHORS BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#include <string>

#ifndef LOGCABIN_CORE_STRINGUTIL_H
#define LOGCABIN_CORE_STRINGUTIL_H

namespace LogCabin {
namespace Core {
namespace StringUtil {

/**
 * A safe version of sprintf.
 */
std::string format(const char* format, ...)
    __attribute__((format(printf, 1, 2)));

/**
 * Determine whether a null-terminated string is printable.
 * \param str
 *      A null-terminated string.
 * \return
 *      True if all the bytes of str before its null terminator are nice to
 *      display in a single line of text.
 */
bool
isPrintable(const char* str);

/**
 * Determine whether some data is a printable, null-terminated string.
 * \param data
 *      The first byte.
 * \param length
 *      The number of bytes of 'data'.
 * \return
 *      True if the last byte of data is a null terminator and all the bytes of
 *      data before that are nice to display in a single line of text.
 */
bool
isPrintable(const void* data, size_t length);

/**
 * For strings, replace all occurrences of 'needle' in 'haystack' with
 * 'replacement'.
 *
 * If this isn't what you're looking for, the standard algorithm std::replace
 * might help you.
 */
void
replaceAll(std::string& haystack,
           const std::string& needle,
           const std::string& replacement);

} // namespace LogCabin::Core::StringUtil
} // namespace LogCabin::Core
} // namespace LogCabin

#endif /* LOGCABIN_CORE_STRINGUTIL_H */