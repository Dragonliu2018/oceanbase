/**
 * Copyright (c) 2021 OceanBase
 * OceanBase CE is licensed under Mulan PubL v2.
 * You can use this software according to the terms and conditions of the Mulan PubL v2.
 * You may obtain a copy of Mulan PubL v2 at:
 *          http://license.coscl.org.cn/MulanPubL-2.0
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
 * EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
 * MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
 * See the Mulan PubL v2 for more details.
 */

#ifndef OCEANBASE_SHARE_SYSTEM_VARIABLE_OB_SYS_VAR_CLASS_TYPE_
#define OCEANBASE_SHARE_SYSTEM_VARIABLE_OB_SYS_VAR_CLASS_TYPE_
#include <stdint.h>

namespace oceanbase
{
namespace share
{
enum ObSysVarClassType
{
  SYS_VAR_INVALID = -1,
  SYS_VAR_AUTO_INCREMENT_INCREMENT = 0,
  SYS_VAR_AUTO_INCREMENT_OFFSET = 1,
  SYS_VAR_AUTOCOMMIT = 2,
  SYS_VAR_CHARACTER_SET_CLIENT = 3,
  SYS_VAR_CHARACTER_SET_CONNECTION = 4,
  SYS_VAR_CHARACTER_SET_DATABASE = 5,
  SYS_VAR_CHARACTER_SET_RESULTS = 6,
  SYS_VAR_CHARACTER_SET_SERVER = 7,
  SYS_VAR_CHARACTER_SET_SYSTEM = 8,
  SYS_VAR_COLLATION_CONNECTION = 9,
  SYS_VAR_COLLATION_DATABASE = 10,
  SYS_VAR_COLLATION_SERVER = 11,
  SYS_VAR_INTERACTIVE_TIMEOUT = 12,
  SYS_VAR_LAST_INSERT_ID = 13,
  SYS_VAR_MAX_ALLOWED_PACKET = 14,
  SYS_VAR_SQL_MODE = 15,
  SYS_VAR_TIME_ZONE = 16,
  SYS_VAR_TX_ISOLATION = 17,
  SYS_VAR_VERSION_COMMENT = 18,
  SYS_VAR_WAIT_TIMEOUT = 19,
  SYS_VAR_BINLOG_ROW_IMAGE = 20,
  SYS_VAR_CHARACTER_SET_FILESYSTEM = 21,
  SYS_VAR_CONNECT_TIMEOUT = 22,
  SYS_VAR_DATADIR = 23,
  SYS_VAR_DEBUG_SYNC = 24,
  SYS_VAR_DIV_PRECISION_INCREMENT = 25,
  SYS_VAR_EXPLICIT_DEFAULTS_FOR_TIMESTAMP = 26,
  SYS_VAR_GROUP_CONCAT_MAX_LEN = 27,
  SYS_VAR_IDENTITY = 28,
  SYS_VAR_LOWER_CASE_TABLE_NAMES = 29,
  SYS_VAR_NET_READ_TIMEOUT = 30,
  SYS_VAR_NET_WRITE_TIMEOUT = 31,
  SYS_VAR_READ_ONLY = 32,
  SYS_VAR_SQL_AUTO_IS_NULL = 33,
  SYS_VAR_SQL_SELECT_LIMIT = 34,
  SYS_VAR_TIMESTAMP = 35,
  SYS_VAR_TX_READ_ONLY = 36,
  SYS_VAR_VERSION = 37,
  SYS_VAR_SQL_WARNINGS = 38,
  SYS_VAR_MAX_USER_CONNECTIONS = 39,
  SYS_VAR_INIT_CONNECT = 40,
  SYS_VAR_LICENSE = 41,
  SYS_VAR_NET_BUFFER_LENGTH = 42,
  SYS_VAR_SYSTEM_TIME_ZONE = 43,
  SYS_VAR_QUERY_CACHE_SIZE = 44,
  SYS_VAR_QUERY_CACHE_TYPE = 45,
  SYS_VAR_SQL_QUOTE_SHOW_CREATE = 46,
  SYS_VAR_MAX_SP_RECURSION_DEPTH = 47,
  SYS_VAR_SQL_SAFE_UPDATES = 48,
  SYS_VAR_CONCURRENT_INSERT = 49,
  SYS_VAR_DEFAULT_AUTHENTICATION_PLUGIN = 50,
  SYS_VAR_DISABLED_STORAGE_ENGINES = 51,
  SYS_VAR_ERROR_COUNT = 52,
  SYS_VAR_GENERAL_LOG = 53,
  SYS_VAR_HAVE_OPENSSL = 54,
  SYS_VAR_HAVE_PROFILING = 55,
  SYS_VAR_HAVE_SSL = 56,
  SYS_VAR_HOSTNAME = 57,
  SYS_VAR_LC_MESSAGES = 58,
  SYS_VAR_LOCAL_INFILE = 59,
  SYS_VAR_LOCK_WAIT_TIMEOUT = 60,
  SYS_VAR_LONG_QUERY_TIME = 61,
  SYS_VAR_MAX_CONNECTIONS = 62,
  SYS_VAR_MAX_EXECUTION_TIME = 63,
  SYS_VAR_PROTOCOL_VERSION = 64,
  SYS_VAR_SERVER_ID = 65,
  SYS_VAR_SSL_CA = 66,
  SYS_VAR_SSL_CAPATH = 67,
  SYS_VAR_SSL_CERT = 68,
  SYS_VAR_SSL_CIPHER = 69,
  SYS_VAR_SSL_CRL = 70,
  SYS_VAR_SSL_CRLPATH = 71,
  SYS_VAR_SSL_KEY = 72,
  SYS_VAR_TIME_FORMAT = 73,
  SYS_VAR_TLS_VERSION = 74,
  SYS_VAR_TMP_TABLE_SIZE = 75,
  SYS_VAR_TMPDIR = 76,
  SYS_VAR_UNIQUE_CHECKS = 77,
  SYS_VAR_VERSION_COMPILE_MACHINE = 78,
  SYS_VAR_VERSION_COMPILE_OS = 79,
  SYS_VAR_WARNING_COUNT = 80,
  SYS_VAR_SESSION_TRACK_SCHEMA = 81,
  SYS_VAR_SESSION_TRACK_SYSTEM_VARIABLES = 82,
  SYS_VAR_SESSION_TRACK_STATE_CHANGE = 83,
  SYS_VAR_HAVE_QUERY_CACHE = 84,
  SYS_VAR_QUERY_CACHE_LIMIT = 85,
  SYS_VAR_QUERY_CACHE_MIN_RES_UNIT = 86,
  SYS_VAR_QUERY_CACHE_WLOCK_INVALIDATE = 87,
  SYS_VAR_BINLOG_FORMAT = 88,
  SYS_VAR_BINLOG_CHECKSUM = 89,
  SYS_VAR_BINLOG_ROWS_QUERY_LOG_EVENTS = 90,
  SYS_VAR_LOG_BIN = 91,
  SYS_VAR_SERVER_UUID = 92,
  SYS_VAR_DEFAULT_STORAGE_ENGINE = 93,
  SYS_VAR_CTE_MAX_RECURSION_DEPTH = 94,
  SYS_VAR_REGEXP_STACK_LIMIT = 95,
  SYS_VAR_REGEXP_TIME_LIMIT = 96,
  SYS_VAR_OB_INTERM_RESULT_MEM_LIMIT = 10001,
  SYS_VAR_OB_PROXY_PARTITION_HIT = 10002,
  SYS_VAR_OB_LOG_LEVEL = 10003,
  SYS_VAR_OB_QUERY_TIMEOUT = 10005,
  SYS_VAR_OB_READ_CONSISTENCY = 10006,
  SYS_VAR_OB_ENABLE_TRANSFORMATION = 10007,
  SYS_VAR_OB_TRX_TIMEOUT = 10008,
  SYS_VAR_OB_ENABLE_PLAN_CACHE = 10009,
  SYS_VAR_OB_ENABLE_INDEX_DIRECT_SELECT = 10010,
  SYS_VAR_OB_PROXY_SET_TRX_EXECUTED = 10011,
  SYS_VAR_OB_ENABLE_AGGREGATION_PUSHDOWN = 10012,
  SYS_VAR_OB_LAST_SCHEMA_VERSION = 10013,
  SYS_VAR_OB_GLOBAL_DEBUG_SYNC = 10014,
  SYS_VAR_OB_PROXY_GLOBAL_VARIABLES_VERSION = 10015,
  SYS_VAR_OB_ENABLE_SHOW_TRACE = 10016,
  SYS_VAR_OB_BNL_JOIN_CACHE_SIZE = 10019,
  SYS_VAR_OB_PROXY_USER_PRIVILEGE = 10020,
  SYS_VAR_OB_ORG_CLUSTER_ID = 10021,
  SYS_VAR_OB_PLAN_CACHE_PERCENTAGE = 10022,
  SYS_VAR_OB_PLAN_CACHE_EVICT_HIGH_PERCENTAGE = 10023,
  SYS_VAR_OB_PLAN_CACHE_EVICT_LOW_PERCENTAGE = 10024,
  SYS_VAR_RECYCLEBIN = 10025,
  SYS_VAR_OB_CAPABILITY_FLAG = 10026,
  SYS_VAR_IS_RESULT_ACCURATE = 10028,
  SYS_VAR_ERROR_ON_OVERLAP_TIME = 10029,
  SYS_VAR_OB_COMPATIBILITY_MODE = 10030,
  SYS_VAR_OB_SQL_WORK_AREA_PERCENTAGE = 10032,
  SYS_VAR_OB_SAFE_WEAK_READ_SNAPSHOT = 10033,
  SYS_VAR_OB_ROUTE_POLICY = 10034,
  SYS_VAR_OB_ENABLE_TRANSMISSION_CHECKSUM = 10035,
  SYS_VAR_FOREIGN_KEY_CHECKS = 10036,
  SYS_VAR_OB_STATEMENT_TRACE_ID = 10037,
  SYS_VAR_OB_ENABLE_TRUNCATE_FLASHBACK = 10038,
  SYS_VAR_OB_TCP_INVITED_NODES = 10039,
  SYS_VAR_SQL_THROTTLE_CURRENT_PRIORITY = 10040,
  SYS_VAR_SQL_THROTTLE_PRIORITY = 10041,
  SYS_VAR_SQL_THROTTLE_RT = 10042,
  SYS_VAR_SQL_THROTTLE_CPU = 10043,
  SYS_VAR_SQL_THROTTLE_IO = 10044,
  SYS_VAR_SQL_THROTTLE_NETWORK = 10045,
  SYS_VAR_SQL_THROTTLE_LOGICAL_READS = 10046,
  SYS_VAR_AUTO_INCREMENT_CACHE_SIZE = 10047,
  SYS_VAR_OB_ENABLE_JIT = 10048,
  SYS_VAR_OB_TEMP_TABLESPACE_SIZE_PERCENTAGE = 10049,
  SYS_VAR_PLUGIN_DIR = 10052,
  SYS_VAR_OB_SQL_AUDIT_PERCENTAGE = 10055,
  SYS_VAR_OB_ENABLE_SQL_AUDIT = 10056,
  SYS_VAR_OPTIMIZER_USE_SQL_PLAN_BASELINES = 10057,
  SYS_VAR_OPTIMIZER_CAPTURE_SQL_PLAN_BASELINES = 10058,
  SYS_VAR_PARALLEL_SERVERS_TARGET = 10060,
  SYS_VAR_OB_EARLY_LOCK_RELEASE = 10061,
  SYS_VAR_OB_TRX_IDLE_TIMEOUT = 10062,
  SYS_VAR_BLOCK_ENCRYPTION_MODE = 10063,
  SYS_VAR_NLS_DATE_FORMAT = 10064,
  SYS_VAR_NLS_TIMESTAMP_FORMAT = 10065,
  SYS_VAR_NLS_TIMESTAMP_TZ_FORMAT = 10066,
  SYS_VAR_OB_RESERVED_META_MEMORY_PERCENTAGE = 10067,
  SYS_VAR_OB_CHECK_SYS_VARIABLE = 10068,
  SYS_VAR_NLS_LANGUAGE = 10069,
  SYS_VAR_NLS_TERRITORY = 10070,
  SYS_VAR_NLS_SORT = 10071,
  SYS_VAR_NLS_COMP = 10072,
  SYS_VAR_NLS_CHARACTERSET = 10073,
  SYS_VAR_NLS_NCHAR_CHARACTERSET = 10074,
  SYS_VAR_NLS_DATE_LANGUAGE = 10075,
  SYS_VAR_NLS_LENGTH_SEMANTICS = 10076,
  SYS_VAR_NLS_NCHAR_CONV_EXCP = 10077,
  SYS_VAR_NLS_CALENDAR = 10078,
  SYS_VAR_NLS_NUMERIC_CHARACTERS = 10079,
  SYS_VAR__NLJ_BATCHING_ENABLED = 10080,
  SYS_VAR_TRACEFILE_IDENTIFIER = 10081,
  SYS_VAR__GROUPBY_NOPUSHDOWN_CUT_RATIO = 10082,
  SYS_VAR__PX_BROADCAST_FUDGE_FACTOR = 10083,
  SYS_VAR_TRANSACTION_ISOLATION = 10085,
  SYS_VAR_OB_TRX_LOCK_TIMEOUT = 10086,
  SYS_VAR_VALIDATE_PASSWORD_CHECK_USER_NAME = 10087,
  SYS_VAR_VALIDATE_PASSWORD_LENGTH = 10088,
  SYS_VAR_VALIDATE_PASSWORD_MIXED_CASE_COUNT = 10089,
  SYS_VAR_VALIDATE_PASSWORD_NUMBER_COUNT = 10090,
  SYS_VAR_VALIDATE_PASSWORD_POLICY = 10091,
  SYS_VAR_VALIDATE_PASSWORD_SPECIAL_CHAR_COUNT = 10092,
  SYS_VAR_DEFAULT_PASSWORD_LIFETIME = 10093,
  SYS_VAR__OB_OLS_POLICY_SESSION_LABELS = 10094,
  SYS_VAR_OB_TRACE_INFO = 10095,
  SYS_VAR__PX_PARTITION_SCAN_THRESHOLD = 10097,
  SYS_VAR__OB_PX_BCAST_OPTIMIZATION = 10098,
  SYS_VAR__OB_PX_SLAVE_MAPPING_THRESHOLD = 10099,
  SYS_VAR__ENABLE_PARALLEL_DML = 10100,
  SYS_VAR__PX_MIN_GRANULES_PER_SLAVE = 10101,
  SYS_VAR_SECURE_FILE_PRIV = 10102,
  SYS_VAR_PLSQL_WARNINGS = 10103,
  SYS_VAR__ENABLE_PARALLEL_QUERY = 10104,
  SYS_VAR__FORCE_PARALLEL_QUERY_DOP = 10105,
  SYS_VAR__FORCE_PARALLEL_DML_DOP = 10106,
  SYS_VAR_OB_PL_BLOCK_TIMEOUT = 10107,
  SYS_VAR_TRANSACTION_READ_ONLY = 10108,
  SYS_VAR_RESOURCE_MANAGER_PLAN = 10109,
  SYS_VAR_PERFORMANCE_SCHEMA = 10110,
  SYS_VAR_NLS_CURRENCY = 10111,
  SYS_VAR_NLS_ISO_CURRENCY = 10112,
  SYS_VAR_NLS_DUAL_CURRENCY = 10113,
  SYS_VAR_PLSQL_CCFLAGS = 10115,
  SYS_VAR__OB_PROXY_SESSION_TEMPORARY_TABLE_USED = 10116,
  SYS_VAR__ENABLE_PARALLEL_DDL = 10117,
  SYS_VAR__FORCE_PARALLEL_DDL_DOP = 10118,
  SYS_VAR_CURSOR_SHARING = 10119,
  SYS_VAR__OPTIMIZER_NULL_AWARE_ANTIJOIN = 10120,
  SYS_VAR__PX_PARTIAL_ROLLUP_PUSHDOWN = 10121,
  SYS_VAR__PX_DIST_AGG_PARTIAL_ROLLUP_PUSHDOWN = 10122,
  SYS_VAR__CREATE_AUDIT_PURGE_JOB = 10123,
  SYS_VAR__DROP_AUDIT_PURGE_JOB = 10124,
  SYS_VAR__SET_PURGE_JOB_INTERVAL = 10125,
  SYS_VAR__SET_PURGE_JOB_STATUS = 10126,
  SYS_VAR__SET_LAST_ARCHIVE_TIMESTAMP = 10127,
  SYS_VAR__CLEAR_LAST_ARCHIVE_TIMESTAMP = 10128,
  SYS_VAR__AGGREGATION_OPTIMIZATION_SETTINGS = 10129,
  SYS_VAR__PX_SHARED_HASH_JOIN = 10130,
  SYS_VAR_SQL_NOTES = 10131,
  SYS_VAR_INNODB_STRICT_MODE = 10132,
  SYS_VAR__WINDOWFUNC_OPTIMIZATION_SETTINGS = 10133,
  SYS_VAR_OB_ENABLE_RICH_ERROR_MSG = 10134,
  SYS_VAR_LOG_ROW_VALUE_OPTIONS = 10136,
  SYS_VAR_OB_MAX_READ_STALE_TIME = 10137,
  SYS_VAR__OPTIMIZER_GATHER_STATS_ON_LOAD = 10138,
  SYS_VAR__SET_REVERSE_DBLINK_INFOS = 10139,
  SYS_VAR__FORCE_ORDER_PRESERVE_SET = 10140,
  SYS_VAR__SHOW_DDL_IN_COMPAT_MODE = 10141,
  SYS_VAR_PARALLEL_DEGREE_POLICY = 10142,
  SYS_VAR_PARALLEL_DEGREE_LIMIT = 10143,
  SYS_VAR_PARALLEL_MIN_SCAN_TIME_THRESHOLD = 10144,
  SYS_VAR_OPTIMIZER_DYNAMIC_SAMPLING = 10145,
  SYS_VAR_RUNTIME_FILTER_TYPE = 10146,
  SYS_VAR_RUNTIME_FILTER_WAIT_TIME_MS = 10147,
  SYS_VAR_RUNTIME_FILTER_MAX_IN_NUM = 10148,
  SYS_VAR_RUNTIME_BLOOM_FILTER_MAX_SIZE = 10149,
  SYS_VAR_OPTIMIZER_FEATURES_ENABLE = 10150,
  SYS_VAR__OB_PROXY_WEAKREAD_FEEDBACK = 10151,
  SYS_VAR_NCHARACTER_SET_CONNECTION = 10152,
  SYS_VAR_AUTOMATIC_SP_PRIVILEGES = 10153,
  SYS_VAR_PRIVILEGE_FEATURES_ENABLE = 10154,
  SYS_VAR__PRIV_CONTROL = 10155,
  SYS_VAR__ENABLE_MYSQL_PL_PRIV_CHECK = 10156,
  SYS_VAR_OB_ENABLE_PL_CACHE = 10157,
  SYS_VAR_OB_DEFAULT_LOB_INROW_THRESHOLD = 10158,
  SYS_VAR__ENABLE_STORAGE_CARDINALITY_ESTIMATION = 10159,
  SYS_VAR_LC_TIME_NAMES = 10160,
  SYS_VAR_ACTIVATE_ALL_ROLES_ON_LOGIN = 10161,
};

}
}
#endif //OCEANBASE_SHARE_SYSTEM_VARIABLE_OB_SYS_VAR_CLASS_TYPE_