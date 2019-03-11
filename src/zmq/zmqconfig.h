// Copyright (c) 2015 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef FYRE_ZMQ_ZMQCONFIG_H
#define FYRE_ZMQ_ZMQCONFIG_H

#if defined(HAVE_CONFIG_H)
#include "config/fyre-config.h"
#endif

#include <stdarg.h>
#include <string>

#if ENABLE_ZMQ
#include <zmq.h>
#endif

#include "primitives/block.h"
#include "primitives/transaction.h"

void zmqError(const char *str);

#endif // FYRE_ZMQ_ZMQCONFIG_H
