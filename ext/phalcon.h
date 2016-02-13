
/* This file was generated automatically by Zephir do not modify it! */

#ifndef ZEPHIR_CLASS_ENTRIES_H
#define ZEPHIR_CLASS_ENTRIES_H

#include "phalcon/di/injectionawareinterface.zep.h"
#include "phalcon/exception.zep.h"
#include "phalcon/events/eventsawareinterface.zep.h"
#include "phalcon/forms/elementinterface.zep.h"
#include "phalcon/validation/validatorinterface.zep.h"
#include "phalcon/validation/validator.zep.h"
#include "phalcon/di/injectable.zep.h"
#include "phalcon/forms/element.zep.h"
#include "phalcon/mvc/model/validator.zep.h"
#include "phalcon/mvc/model/validatorinterface.zep.h"
#include "phalcon/mvc/model/metadatainterface.zep.h"
#include "phalcon/cache/backend.zep.h"
#include "phalcon/cache/backendinterface.zep.h"
#include "phalcon/mvc/model/metadata.zep.h"
#include "phalcon/cache/frontendinterface.zep.h"
#include "phalcon/annotations/adapterinterface.zep.h"
#include "phalcon/db/adapter.zep.h"
#include "phalcon/db/dialectinterface.zep.h"
#include "phalcon/dispatcherinterface.zep.h"
#include "phalcon/annotations/adapter.zep.h"
#include "phalcon/config.zep.h"
#include "phalcon/db/adapter/pdo.zep.h"
#include "phalcon/db/adapterinterface.zep.h"
#include "phalcon/db/dialect.zep.h"
#include "phalcon/logger/adapter.zep.h"
#include "phalcon/logger/adapterinterface.zep.h"
#include "phalcon/logger/formatter.zep.h"
#include "phalcon/logger/formatterinterface.zep.h"
#include "phalcon/mvc/entityinterface.zep.h"
#include "phalcon/mvc/model/resultsetinterface.zep.h"
#include "phalcon/session/adapter.zep.h"
#include "phalcon/session/adapterinterface.zep.h"
#include "phalcon/assets/filterinterface.zep.h"
#include "phalcon/diinterface.zep.h"
#include "phalcon/mvc/model/exception.zep.h"
#include "phalcon/mvc/viewbaseinterface.zep.h"
#include "phalcon/paginator/adapter.zep.h"
#include "phalcon/paginator/adapterinterface.zep.h"
#include "phalcon/translate/adapter.zep.h"
#include "phalcon/translate/adapterinterface.zep.h"
#include "phalcon/acl/adapterinterface.zep.h"
#include "phalcon/assets/inline.zep.h"
#include "phalcon/assets/resource.zep.h"
#include "phalcon/di.zep.h"
#include "phalcon/dispatcher.zep.h"
#include "phalcon/flash.zep.h"
#include "phalcon/flashinterface.zep.h"
#include "phalcon/image/adapter.zep.h"
#include "phalcon/image/adapterinterface.zep.h"
#include "phalcon/mvc/collection/behavior.zep.h"
#include "phalcon/mvc/collection/behaviorinterface.zep.h"
#include "phalcon/mvc/model/behavior.zep.h"
#include "phalcon/mvc/model/behaviorinterface.zep.h"
#include "phalcon/mvc/model/metadata/strategyinterface.zep.h"
#include "phalcon/mvc/model/resultinterface.zep.h"
#include "phalcon/mvc/model/resultset.zep.h"
#include "phalcon/mvc/routerinterface.zep.h"
#include "phalcon/mvc/view/engine.zep.h"
#include "phalcon/mvc/view/engineinterface.zep.h"
#include "phalcon/translate/interpolatorinterface.zep.h"
#include "phalcon/acl/adapter.zep.h"
#include "phalcon/acl/roleinterface.zep.h"
#include "phalcon/annotations/readerinterface.zep.h"
#include "phalcon/cache/frontend/data.zep.h"
#include "phalcon/cryptinterface.zep.h"
#include "phalcon/db/columninterface.zep.h"
#include "phalcon/db/indexinterface.zep.h"
#include "phalcon/db/referenceinterface.zep.h"
#include "phalcon/db/resultinterface.zep.h"
#include "phalcon/di/factorydefault.zep.h"
#include "phalcon/di/serviceinterface.zep.h"
#include "phalcon/escaperinterface.zep.h"
#include "phalcon/events/managerinterface.zep.h"
#include "phalcon/filterinterface.zep.h"
#include "phalcon/http/cookieinterface.zep.h"
#include "phalcon/http/request/fileinterface.zep.h"
#include "phalcon/http/requestinterface.zep.h"
#include "phalcon/http/response/cookiesinterface.zep.h"
#include "phalcon/http/response/headersinterface.zep.h"
#include "phalcon/http/responseinterface.zep.h"
#include "phalcon/mvc/collectioninterface.zep.h"
#include "phalcon/mvc/controllerinterface.zep.h"
#include "phalcon/mvc/dispatcherinterface.zep.h"
#include "phalcon/mvc/micro/collectioninterface.zep.h"
#include "phalcon/mvc/model/criteriainterface.zep.h"
#include "phalcon/mvc/model/managerinterface.zep.h"
#include "phalcon/mvc/model/messageinterface.zep.h"
#include "phalcon/mvc/model/query/builderinterface.zep.h"
#include "phalcon/mvc/model/query/statusinterface.zep.h"
#include "phalcon/mvc/model/queryinterface.zep.h"
#include "phalcon/mvc/model/relationinterface.zep.h"
#include "phalcon/mvc/model/transaction/exception.zep.h"
#include "phalcon/mvc/model/transaction/managerinterface.zep.h"
#include "phalcon/mvc/model/transactioninterface.zep.h"
#include "phalcon/mvc/modelinterface.zep.h"
#include "phalcon/mvc/router.zep.h"
#include "phalcon/mvc/router/groupinterface.zep.h"
#include "phalcon/mvc/router/routeinterface.zep.h"
#include "phalcon/mvc/urlinterface.zep.h"
#include "phalcon/mvc/view/exception.zep.h"
#include "phalcon/mvc/viewinterface.zep.h"
#include "phalcon/session/baginterface.zep.h"
#include "phalcon/validation/messageinterface.zep.h"
#include "phalcon/acl.zep.h"
#include "phalcon/acl/adapter/memory.zep.h"
#include "phalcon/acl/exception.zep.h"
#include "phalcon/acl/resource.zep.h"
#include "phalcon/acl/resourceinterface.zep.h"
#include "phalcon/acl/role.zep.h"
#include "phalcon/annotations/adapter/apc.zep.h"
#include "phalcon/annotations/adapter/files.zep.h"
#include "phalcon/annotations/adapter/memory.zep.h"
#include "phalcon/annotations/adapter/xcache.zep.h"
#include "phalcon/annotations/annotation.zep.h"
#include "phalcon/annotations/collection.zep.h"
#include "phalcon/annotations/exception.zep.h"
#include "phalcon/annotations/reader.zep.h"
#include "phalcon/annotations/reflection.zep.h"
#include "phalcon/assets/collection.zep.h"
#include "phalcon/assets/exception.zep.h"
#include "phalcon/assets/filters/cssmin.zep.h"
#include "phalcon/assets/filters/jsmin.zep.h"
#include "phalcon/assets/filters/none.zep.h"
#include "phalcon/assets/inline/css.zep.h"
#include "phalcon/assets/inline/js.zep.h"
#include "phalcon/assets/manager.zep.h"
#include "phalcon/assets/resource/css.zep.h"
#include "phalcon/assets/resource/js.zep.h"
#include "phalcon/cache/backend/apc.zep.h"
#include "phalcon/cache/backend/file.zep.h"
#include "phalcon/cache/backend/libmemcached.zep.h"
#include "phalcon/cache/backend/memcache.zep.h"
#include "phalcon/cache/backend/memory.zep.h"
#include "phalcon/cache/backend/mongo.zep.h"
#include "phalcon/cache/backend/redis.zep.h"
#include "phalcon/cache/backend/xcache.zep.h"
#include "phalcon/cache/exception.zep.h"
#include "phalcon/cache/frontend/base64.zep.h"
#include "phalcon/cache/frontend/igbinary.zep.h"
#include "phalcon/cache/frontend/json.zep.h"
#include "phalcon/cache/frontend/none.zep.h"
#include "phalcon/cache/frontend/output.zep.h"
#include "phalcon/cache/multiple.zep.h"
#include "phalcon/cli/console.zep.h"
#include "phalcon/cli/console/exception.zep.h"
#include "phalcon/cli/dispatcher.zep.h"
#include "phalcon/cli/dispatcher/exception.zep.h"
#include "phalcon/cli/router.zep.h"
#include "phalcon/cli/router/exception.zep.h"
#include "phalcon/cli/router/route.zep.h"
#include "phalcon/cli/task.zep.h"
#include "phalcon/config/adapter/ini.zep.h"
#include "phalcon/config/adapter/json.zep.h"
#include "phalcon/config/adapter/php.zep.h"
#include "phalcon/config/adapter/yaml.zep.h"
#include "phalcon/config/exception.zep.h"
#include "phalcon/crypt.zep.h"
#include "phalcon/crypt/exception.zep.h"
#include "phalcon/db.zep.h"
#include "phalcon/db/adapter/pdo/mysql.zep.h"
#include "phalcon/db/adapter/pdo/oracle.zep.h"
#include "phalcon/db/adapter/pdo/postgresql.zep.h"
#include "phalcon/db/adapter/pdo/sqlite.zep.h"
#include "phalcon/db/column.zep.h"
#include "phalcon/db/dialect/mysql.zep.h"
#include "phalcon/db/dialect/oracle.zep.h"
#include "phalcon/db/dialect/postgresql.zep.h"
#include "phalcon/db/dialect/sqlite.zep.h"
#include "phalcon/db/exception.zep.h"
#include "phalcon/db/index.zep.h"
#include "phalcon/db/profiler.zep.h"
#include "phalcon/db/profiler/item.zep.h"
#include "phalcon/db/rawvalue.zep.h"
#include "phalcon/db/reference.zep.h"
#include "phalcon/db/result/pdo.zep.h"
#include "phalcon/debug.zep.h"
#include "phalcon/debug/dump.zep.h"
#include "phalcon/debug/exception.zep.h"
#include "phalcon/di/exception.zep.h"
#include "phalcon/di/factorydefault/cli.zep.h"
#include "phalcon/di/service.zep.h"
#include "phalcon/di/service/builder.zep.h"
#include "phalcon/escaper.zep.h"
#include "phalcon/escaper/exception.zep.h"
#include "phalcon/events/event.zep.h"
#include "phalcon/events/exception.zep.h"
#include "phalcon/events/manager.zep.h"
#include "phalcon/filter.zep.h"
#include "phalcon/filter/exception.zep.h"
#include "phalcon/filter/userfilterinterface.zep.h"
#include "phalcon/flash/direct.zep.h"
#include "phalcon/flash/exception.zep.h"
#include "phalcon/flash/session.zep.h"
#include "phalcon/forms/element/check.zep.h"
#include "phalcon/forms/element/date.zep.h"
#include "phalcon/forms/element/email.zep.h"
#include "phalcon/forms/element/file.zep.h"
#include "phalcon/forms/element/hidden.zep.h"
#include "phalcon/forms/element/numeric.zep.h"
#include "phalcon/forms/element/password.zep.h"
#include "phalcon/forms/element/radio.zep.h"
#include "phalcon/forms/element/select.zep.h"
#include "phalcon/forms/element/submit.zep.h"
#include "phalcon/forms/element/text.zep.h"
#include "phalcon/forms/element/textarea.zep.h"
#include "phalcon/forms/exception.zep.h"
#include "phalcon/forms/form.zep.h"
#include "phalcon/forms/manager.zep.h"
#include "phalcon/http/cookie.zep.h"
#include "phalcon/http/cookie/exception.zep.h"
#include "phalcon/http/request.zep.h"
#include "phalcon/http/request/exception.zep.h"
#include "phalcon/http/request/file.zep.h"
#include "phalcon/http/response.zep.h"
#include "phalcon/http/response/cookies.zep.h"
#include "phalcon/http/response/exception.zep.h"
#include "phalcon/http/response/headers.zep.h"
#include "phalcon/image.zep.h"
#include "phalcon/image/adapter/gd.zep.h"
#include "phalcon/image/adapter/imagick.zep.h"
#include "phalcon/image/exception.zep.h"
#include "phalcon/kernel.zep.h"
#include "phalcon/loader.zep.h"
#include "phalcon/loader/exception.zep.h"
#include "phalcon/logger.zep.h"
#include "phalcon/logger/adapter/file.zep.h"
#include "phalcon/logger/adapter/firephp.zep.h"
#include "phalcon/logger/adapter/stream.zep.h"
#include "phalcon/logger/adapter/syslog.zep.h"
#include "phalcon/logger/exception.zep.h"
#include "phalcon/logger/formatter/firephp.zep.h"
#include "phalcon/logger/formatter/json.zep.h"
#include "phalcon/logger/formatter/line.zep.h"
#include "phalcon/logger/formatter/syslog.zep.h"
#include "phalcon/logger/item.zep.h"
#include "phalcon/logger/multiple.zep.h"
#include "phalcon/mvc/application.zep.h"
#include "phalcon/mvc/application/exception.zep.h"
#include "phalcon/mvc/collection.zep.h"
#include "phalcon/mvc/collection/batchstorage.zep.h"
#include "phalcon/mvc/collection/behavior/softdelete.zep.h"
#include "phalcon/mvc/collection/behavior/timestampable.zep.h"
#include "phalcon/mvc/collection/document.zep.h"
#include "phalcon/mvc/collection/exception.zep.h"
#include "phalcon/mvc/collection/manager.zep.h"
#include "phalcon/mvc/collection/managerinterface.zep.h"
#include "phalcon/mvc/controller.zep.h"
#include "phalcon/mvc/dispatcher.zep.h"
#include "phalcon/mvc/dispatcher/exception.zep.h"
#include "phalcon/mvc/micro.zep.h"
#include "phalcon/mvc/micro/collection.zep.h"
#include "phalcon/mvc/micro/exception.zep.h"
#include "phalcon/mvc/micro/lazyloader.zep.h"
#include "phalcon/mvc/micro/middlewareinterface.zep.h"
#include "phalcon/mvc/model.zep.h"
#include "phalcon/mvc/model/behavior/softdelete.zep.h"
#include "phalcon/mvc/model/behavior/timestampable.zep.h"
#include "phalcon/mvc/model/criteria.zep.h"
#include "phalcon/mvc/model/manager.zep.h"
#include "phalcon/mvc/model/message.zep.h"
#include "phalcon/mvc/model/metadata/apc.zep.h"
#include "phalcon/mvc/model/metadata/files.zep.h"
#include "phalcon/mvc/model/metadata/libmemcached.zep.h"
#include "phalcon/mvc/model/metadata/memcache.zep.h"
#include "phalcon/mvc/model/metadata/memory.zep.h"
#include "phalcon/mvc/model/metadata/redis.zep.h"
#include "phalcon/mvc/model/metadata/session.zep.h"
#include "phalcon/mvc/model/metadata/strategy/annotations.zep.h"
#include "phalcon/mvc/model/metadata/strategy/introspection.zep.h"
#include "phalcon/mvc/model/metadata/xcache.zep.h"
#include "phalcon/mvc/model/query.zep.h"
#include "phalcon/mvc/model/query/builder.zep.h"
#include "phalcon/mvc/model/query/lang.zep.h"
#include "phalcon/mvc/model/query/status.zep.h"
#include "phalcon/mvc/model/relation.zep.h"
#include "phalcon/mvc/model/resultset/complex.zep.h"
#include "phalcon/mvc/model/resultset/simple.zep.h"
#include "phalcon/mvc/model/row.zep.h"
#include "phalcon/mvc/model/transaction.zep.h"
#include "phalcon/mvc/model/transaction/failed.zep.h"
#include "phalcon/mvc/model/transaction/manager.zep.h"
#include "phalcon/mvc/model/validationfailed.zep.h"
#include "phalcon/mvc/model/validator/email.zep.h"
#include "phalcon/mvc/model/validator/exclusionin.zep.h"
#include "phalcon/mvc/model/validator/inclusionin.zep.h"
#include "phalcon/mvc/model/validator/ip.zep.h"
#include "phalcon/mvc/model/validator/numericality.zep.h"
#include "phalcon/mvc/model/validator/presenceof.zep.h"
#include "phalcon/mvc/model/validator/regex.zep.h"
#include "phalcon/mvc/model/validator/stringlength.zep.h"
#include "phalcon/mvc/model/validator/uniqueness.zep.h"
#include "phalcon/mvc/model/validator/url.zep.h"
#include "phalcon/mvc/moduledefinitioninterface.zep.h"
#include "phalcon/mvc/router/annotations.zep.h"
#include "phalcon/mvc/router/exception.zep.h"
#include "phalcon/mvc/router/group.zep.h"
#include "phalcon/mvc/router/route.zep.h"
#include "phalcon/mvc/url.zep.h"
#include "phalcon/mvc/url/exception.zep.h"
#include "phalcon/mvc/user/component.zep.h"
#include "phalcon/mvc/user/module.zep.h"
#include "phalcon/mvc/user/plugin.zep.h"
#include "phalcon/mvc/view.zep.h"
#include "phalcon/mvc/view/engine/php.zep.h"
#include "phalcon/mvc/view/engine/volt.zep.h"
#include "phalcon/mvc/view/engine/volt/compiler.zep.h"
#include "phalcon/mvc/view/engine/volt/exception.zep.h"
#include "phalcon/mvc/view/simple.zep.h"
#include "phalcon/paginator/adapter/model.zep.h"
#include "phalcon/paginator/adapter/nativearray.zep.h"
#include "phalcon/paginator/adapter/querybuilder.zep.h"
#include "phalcon/paginator/exception.zep.h"
#include "phalcon/queue/beanstalk.zep.h"
#include "phalcon/queue/beanstalk/exception.zep.h"
#include "phalcon/queue/beanstalk/job.zep.h"
#include "phalcon/registry.zep.h"
#include "phalcon/security.zep.h"
#include "phalcon/security/exception.zep.h"
#include "phalcon/security/random.zep.h"
#include "phalcon/session.zep.h"
#include "phalcon/session/adapter/files.zep.h"
#include "phalcon/session/adapter/libmemcached.zep.h"
#include "phalcon/session/adapter/memcache.zep.h"
#include "phalcon/session/adapter/redis.zep.h"
#include "phalcon/session/bag.zep.h"
#include "phalcon/session/exception.zep.h"
#include "phalcon/tag.zep.h"
#include "phalcon/tag/exception.zep.h"
#include "phalcon/tag/select.zep.h"
#include "phalcon/text.zep.h"
#include "phalcon/translate.zep.h"
#include "phalcon/translate/adapter/csv.zep.h"
#include "phalcon/translate/adapter/gettext.zep.h"
#include "phalcon/translate/adapter/nativearray.zep.h"
#include "phalcon/translate/exception.zep.h"
#include "phalcon/translate/interpolator/associativearray.zep.h"
#include "phalcon/translate/interpolator/indexedarray.zep.h"
#include "phalcon/validation.zep.h"
#include "phalcon/validation/exception.zep.h"
#include "phalcon/validation/message.zep.h"
#include "phalcon/validation/message/group.zep.h"
#include "phalcon/validation/validator/alnum.zep.h"
#include "phalcon/validation/validator/alpha.zep.h"
#include "phalcon/validation/validator/between.zep.h"
#include "phalcon/validation/validator/confirmation.zep.h"
#include "phalcon/validation/validator/creditcard.zep.h"
#include "phalcon/validation/validator/digit.zep.h"
#include "phalcon/validation/validator/email.zep.h"
#include "phalcon/validation/validator/exclusionin.zep.h"
#include "phalcon/validation/validator/file.zep.h"
#include "phalcon/validation/validator/identical.zep.h"
#include "phalcon/validation/validator/inclusionin.zep.h"
#include "phalcon/validation/validator/numericality.zep.h"
#include "phalcon/validation/validator/presenceof.zep.h"
#include "phalcon/validation/validator/regex.zep.h"
#include "phalcon/validation/validator/stringlength.zep.h"
#include "phalcon/validation/validator/uniqueness.zep.h"
#include "phalcon/validation/validator/url.zep.h"
#include "phalcon/version.zep.h"
#include "phalcon/0__closure.zep.h"

#endif