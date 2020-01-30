/*
 * Copyright (c) 2018-2020 Atmosphère-NX
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once
#include <vapours.hpp>
#include <mesosphere/svc/kern_svc_results.hpp>

namespace ams::kern::svc {

    /* TODO: Actually implement this type. */
    template<typename T>
    struct KUserPointer : impl::KUserPointerTag {
        public:
            static_assert(std::is_pointer<T>::value);
            static constexpr bool IsInput = std::is_const<typename std::remove_pointer<T>::type>::value;
        private:
            T pointer;
    };


}
