/**
 *  Copyright (c) 1999~2017, Altibase Corp. and/or its affiliates. All rights reserved.
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License, version 3,
 *  as published by the Free Software Foundation.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _O_CMT_NIBBLE_CLIENT_H_
#define _O_CMT_NIBBLE_CLIENT_H_


typedef struct cmtNibble
{
    acp_uint32_t mPrecision;
    cmtVariable  mData;
} cmtNibble;

typedef struct cmtInNibble
{
    acp_uint32_t  mPrecision;
    cmtInVariable mData;
} cmtInNibble;


#endif