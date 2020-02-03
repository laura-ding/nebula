/* Copyright (c) 2019 vesoft inc. All rights reserved.
 *
 * This source code is licensed under Apache 2.0 License,
 * attached with Common Clause Condition 1.0, found in the LICENSES directory.
 */


#ifndef META_PROCESSORS_SETTIMEZONEPROCESSOR_H
#define META_PROCESSORS_SETTIMEZONEPROCESSOR_H

#include "meta/processors/BaseProcessor.h"


namespace nebula {
namespace meta {

class SetTimezoneProcessor : public BaseProcessor<cpp2::ExecResp> {
public:
    static SetTimezoneProcessor* instance(kvstore::KVStore* kvstore) {
        return new SetTimezoneProcessor(kvstore);
    }

    void process(const cpp2::SetTimezoneReq& req);

private:
    explicit SetTimezoneProcessor(kvstore::KVStore* kvstore)
            : BaseProcessor<cpp2::ExecResp>(kvstore) {}
};
}  // namespace meta
}  // namespace nebula
#endif  //  #define META_PROCESSORS_SETTIMEZONEPROCESSOR_H
