//          Copyright Boston University SESA Group 2013 - 2014.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)
#ifndef APPS_PINGPONG_HOSTED_SRC_PRINTER_H_
#define APPS_PINGPONG_HOSTED_SRC_PRINTER_H_

#include <string>

#include <ebbrt/Message.h>
#include <ebbrt/StaticSharedEbb.h>

#include "../../src/StaticEbbIds.h"

class Printer : public ebbrt::StaticSharedEbb<Printer>,
                public ebbrt::Messagable<Printer> {
 public:
  Printer();

  static ebbrt::Future<void> Init();
  void Print(ebbrt::Messenger::NetworkId nid, const char* string);
  void ReceiveMessage(ebbrt::Messenger::NetworkId nid,
                      std::unique_ptr<ebbrt::IOBuf>&& buffer);
};

constexpr auto printer = ebbrt::EbbRef<Printer>(kPrinterEbbId);

#endif  // APPS_PINGPONG_HOSTED_SRC_PRINTER_H_
