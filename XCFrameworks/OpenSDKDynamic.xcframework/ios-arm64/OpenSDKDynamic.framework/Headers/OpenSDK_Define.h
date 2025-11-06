//
//  LCSDK_Define.h
//  LCSDK
//
//  Copyright (c) 2016-2025 dahua. All rights reserved.
//

#ifndef __LCSDK_LCSDK_DEFINE_H__
#define __LCSDK_LCSDK_DEFINE_H__

#import <Foundation/Foundation.h>

#pragma mark - Stream Type
/**
 * Stream type enumeration
 */
typedef NS_ENUM(NSInteger, E_STREAM_TYPE) {
    STREAM_MAIN,        ///< Main stream
    STREAM_MINOR_1,     ///< Sub stream 1
    STREAM_MINOR_2,     ///< Sub stream 2
    STREAM_MINOR_3,     ///< Sub stream 3
};

#pragma mark - Audio Encode Type
/**
 * Audio encoding type enumeration
 */
typedef NS_ENUM(NSInteger, E_AUDIO_ENCODE_TYPE) {
    AUDIO_ENCODE_PCM8   = 7,   ///< PCM 8-bit encoding
    AUDIO_ENCODE_G711A  = 14,  ///< G.711 A-law encoding
    AUDIO_ENCODE_PCM16  = 16,  ///< PCM 16-bit encoding
    AUDIO_ENCODE_G711U  = 22   ///< G.711 μ-law encoding
};

#pragma mark - Record Source Type
/**
 * Recording source type enumeration
 */
typedef NS_ENUM(NSInteger, E_RECSOURCE_TYPE) {
    RECSOURCE_TYPE_ALL = 1,     ///< All sources
    RECSOURCE_TYPE_DEVICE,      ///< Device recording
    RECSOURCE_TYPE_PLATFORM,    ///< Platform recording
};

#pragma mark - HLS Type
/**
 * HTTP Live Streaming (HLS) type enumeration
 */
typedef NS_ENUM(NSInteger, E_HLS_TYPE) {
    PLAYBACK_DH_HLS = 0,    ///< Playback - Dahua HLS
    PLAYBACK_STANDARD_HLS,  ///< Playback - Standard HLS
    LIVE_DH_HLS,            ///< Live - Dahua HLS
    LIVE_STANDARD_HLS,      ///< Live - Standard HLS
    PLAYBACK_AMAZON_HLS,    ///< Playback - Amazon S3 HLS
    PLAYBACK_SAAS_HLS,      ///< Playback - SAAS HLS
};

#pragma mark - Slice URL Prefix Type
/**
 * Slice URL prefix type enumeration
 */
typedef NS_ENUM(NSInteger, E_SLICE_PREFIX_TYPE) {
    SLICE_PREFIX_WITH_HOST, ///< Use REST host as slice prefix
    SLICE_PREFIX_FROM_URL,  ///< Extract slice prefix from m3u8 URL
};

#pragma mark - Media Format
/**
 * Media format enumeration
 */
typedef NS_ENUM(NSInteger, E_MEDIA_FORMAT) {
    MEDIA_DAV,          ///< DAV format
    MEDIA_MP4,          ///< MP4 format
    MEDIA_AVI,          ///< AVI Format
    MEDIA_ASF,          ///< ASF Format|
    MEDIA_FLV,          ///< FLV Format
    MEDIA_MOV,          ///< MOV Format
    MEDIA_MP464,        ///< MP464 Format
    MEDIA_MOV64,        ///< MOV64 Format
    MEDIA_MP4NOSEEK,    ///< MP4NOSEEK Format
    MEDIA_WAV           ///< WAV Format
};

#pragma mark - Cloud Record Type
/**
 * Cloud storage recording type enumeration
 */
typedef NS_ENUM(NSInteger, E_CLOUD_RECORD_TYPE) {
    CLOUD_RECORD_MANUAL     = 1,        ///< Manual recording (X-MINI device feature)
    CLOUD_RECORD_LEAVE_MSG  = 2,        ///< Message recording (TC5S requirement)
    CLOUD_RECORD_ASK_HELP   = 3,        ///< Help recording (TC5S requirement, deprecated)
    CLOUD_RECORD_ALARM      = 1000,     ///< Alarm recording
    CLOUD_RECORD_HEAD_CHECK = 1001,     ///< Head detection recording (TC5S requirement)
    CLOUD_RECORD_TIMING     = 2000,     ///< Scheduled recording
    E_CLOUD_RECORD_DATE     = 5001,     ///< Aggregated recording (whole day playback requirement)
};

#pragma mark - Stream Mode
/**
 * Stream pulling mode enumeration
 */
typedef NS_ENUM(NSInteger, E_STREAM_MODE) {
    STREAM_MODE_UNCERTAINTY = -1,    ///< Undetermined streaming mode (not currently streaming or preparing)
    STREAM_MODE_P2P,                 ///< P2P streaming
    STREAM_MODE_MTS,                 ///< MTS streaming
};

#pragma mark - P2P Link Type
/**
 * P2P link type enumeration
 */
typedef NS_ENUM(NSInteger, E_P2P_LINK_TYPE) {
    P2P_LINK_LOCAL = 0,     ///< Local P2P link
    P2P_LINK_THROUGH,       ///< Through P2P link
    P2P_LINK_UDPRELAY,      ///< UDP relay P2P link
    P2P_LINK_TCPRELAY,      ///< TCP relay P2P link
};

#pragma mark - Media Convert Type
/**
 * Media conversion type enumeration
 */
typedef NS_ENUM(NSInteger, E_MEDIA_CONVERT_TYPE) {
    MEDIA_CONVERT_DAV,       ///< Convert to DAV format
    MEDIA_CONVERT_MP4,       ///< Convert to MP4 format
    MEDIA_CONVERT_AVI,       ///< Convert to AVI format
    MEDIA_CONVERT_ASF,       ///< Convert to ASF format
    MEDIA_CONVERT_FLV,       ///< Convert to FLV format
    MEDIA_CONVERT_MOV,       ///< Convert to MOV format
    MEDIA_CONVERT_MP464,     ///< Convert to MP4 format (64-bit)
    MEDIA_CONVERT_MOV64,     ///< Convert to MOV format (64-bit)
    MEDIA_CONVERT_MP4NOSEEK, ///< Convert to MP4 format (no seeking)
    MEDIA_CONVERT_WAV,       ///< Convert to WAV format
    MEDIA_CONVERT_TS,        ///< Convert to TS format
    MEDIA_CONVERT_PS,        ///< Convert to PS format
};

#pragma mark - Login Error Code
/**
 * Login error code enumeration
 */
typedef NS_ENUM(NSInteger, E_LOGIN_ERROR_CODE) {
    LOGIN_ERROR_P2P_FAILED                     = 100, ///< P2P hole punching failed
    LOGIN_ERROR_P2P_DEV_PWD_AUTH_FAIL          = 101, ///< P2P device login password authentication failed
    LOGIN_ERROR_UNSUPPORT_HIGH_SECURITY        = 199, ///< Device doesn't support high security level login
    LOGIN_ERROR_NONE                           = 200, ///< No error
    LOGIN_ERROR_KEY_MISMATCH                   = 201, ///< Incorrect password
    LOGIN_ERROR_USER_NOTEXIST                  = 202, ///< Account doesn't exist
    LOGIN_ERROR_TIMEOUT                        = 203, ///< Connection timeout
    LOGIN_ERROR_LOGIN_REPEAT                   = 204, ///< Repeated login
    LOGIN_ERROR_USER_LOCKED                    = 205, ///< Account locked
    LOGIN_ERROR_USER_BLACKLIST                 = 206, ///< Account blacklisted
    LOGIN_ERROR_SYSTEM_BUSY                    = 207, ///< System busy (insufficient resources)
    LOGIN_ERROR_SUBCONNECT_FAILED              = 208, ///< Sub-connection failed
    LOGIN_ERROR_MAINCONNECT_FAILED             = 209, ///< Main connection failed
    LOGIN_ERROR_OVER_MAX_CONNECT               = 210, ///< Exceeded maximum connections
    LOGIN_ERROR_ONLY_SUPPORT_THREE_PROTOCOL    = 211, ///< Only supports third-generation protocol
    LOGIN_ERROR_NO_USB_KEY                     = 212, ///< No USB key inserted
    LOGIN_ERROR_IP_UNAUTHORIZED                = 213, ///< Client IP not authorized
    LOGIN_ERROR_KEY_MISMATCH_OR_USER_NOTEXIST  = 217, ///< Incorrect password or account doesn't exist (for legacy devices)
    LOGIN_ERROR_USER_NOT_INITIALIZED           = 218, ///< Device account not initialized
    LOGIN_ERROR_LOGIN_LIMITED                  = 219, ///< Login restricted
    LOGIN_ERROR_ONLY_SUPPORT_HIGH_SECURITY     = 220, ///< Device only supports high security level login
};

#pragma mark - Device State
/**
 * Device state enumeration
 */
typedef NS_ENUM(NSInteger, E_DEVICE_STATE) {
    DEVICE_STATE_ON_LINE = 0,       ///< Online
    DEVICE_STATE_OFF_LINE = 1,      ///< Offline
    DEVICE_STATE_UNKNOWN,           ///< Unknown state
    DEVICE_STATE_REQUEST_Fail,      ///< Request failed
};

#pragma mark - Encryption Result
/**
 * Encryption result enumeration
 */
typedef NS_ENUM(NSInteger, E_ENCRYPT_RESULT) {
    ENC_Success = 0,          ///< Encryption successful
    ENC_NotWhole,             ///< Not a complete frame
    ENC_Encrypted,            ///< Already encrypted
    ENC_BufNotEnough,         ///< Buffer not enough
    ENC_InternalError = 99,   ///< Internal error
};

#pragma mark - Decryption Result
/**
 * Decryption result enumeration
 */
typedef NS_ENUM(NSInteger, E_DECRYPT_RESULT) {
    Dec_Success = 0,          ///< Decryption successful
    Dec_NotWhole,             ///< Data not complete
    Dec_KeyError,             ///< Decryption key error
    Dec_UnEncrypt,            ///< Not encrypted
    Dec_UnsupportEncryption,  ///< Unsupported encryption
    Dec_BufNotEnough,         ///< Buffer not enough
    Dec_InternalError = 99,   ///< Internal error
};

#pragma mark - Key Calculation Rule Version
/**
 * Key calculation rule version enumeration
 */
typedef NS_ENUM(NSInteger, E_RULE_VERSION) {
    RULE_EASY4IP = 0,       ///< Base64(MD5_LOWER("HS:"+MD5_LOWER(keyseed))+"EASY4IP"), first 16 chars
    RULE_LECHANGE,          ///< Base64(MD5_LOWER("HS:"+MD5_LOWER(keyseed))), first 16 chars
    RULE_DAHUAPASS,         ///< Base64(MD5_UPPER("HS:"+MD5_UPPER(keyseed))), first 16 chars
};

#pragma mark - Player Result Callback Type
/**
 * Player result callback type enumeration
 */
typedef NS_ENUM(NSUInteger, OC_PROTO_TYPE) {
    OC_RESULT_PROTO_TYPE_RTSP,      ///< RTSP service (including live preview, local playback, intercom)
    OC_RESULT_PROTO_TYPE_HLS,       ///< HLS service (including cloud playback, cloud download)
    OC_RESULT_PROTO_TYPE_FILE,      ///< File service (including local file playback)
    OC_RESULT_PROTO_TYPE_NETSDK,    ///< NETSDK service (including Dahua P2P device live preview, playback)
    OC_RESULT_PROTO_TYPE_SIP,       ///< SIP service (including Dahua Meeting)
    OC_RESULT_PROTO_TYPE_DHHTTP,    ///< HTTP optimized streaming (including Dahua Meeting)
    OC_RESULT_PROTO_TYPE_DPSDK,     ///< DPSDK service
    OC_RESULT_PROTO_TYPE_Express,   ///< Express service
    OC_RESULT_PROTO_TYPE_CloudBase, ///< CloudBase service
    OC_RESULT_PROTO_TYPE_RTP,       ///< RTP service
    OC_RESULT_PROTO_TYPE_FINANCECLOUD,      ///< Financial Cloud
    OC_RESULT_PROTO_TYPE_COMMUNITYCLOUD,    ///< Community Cloud
    OC_RESULT_PROTO_TYPE_MSP,               ///< MSP service
    OC_RESULT_PROTO_TYPE_P2P,               ///< P2P service
    OC_RESULT_PROTO_TYPE_REST = 99, ///< REST service (involving RTSP, HLS, SIP services)
    
    OC_RESULT_PROTO_TYPE_TALK_RESPONSE_SESSIONID       = 34712, ///< Audio session ID
    OC_RESULT_PROTO_TYPE_TALK_RESPONSE_PORT            = 34713, ///< Audio port
    OC_RESULT_PROTO_TYPE_TALK_RESPONSE_SESSIONID_VIDEO = 34714, ///< Video session ID
    OC_RESULT_PROTO_TYPE_TALK_RESPONSE_PORT_VIDEO      = 34715, ///< Video port
};

#pragma mark - RTSP State (when type == RESULT_PROTO_TYPE_RTSP)
/**
 * RTSP state enumeration
 */
typedef NS_ENUM(NSInteger, OC_RTSP_STATE) {
    OC_STATE_PACKET_COMPONENT_ERROR = -1, ///< Component internal streaming interface call failed
    OC_STATE_PACKET_FRAME_ERROR = 0,     ///< Frame assembly failed
    OC_STATE_RTSP_TEARDOWN_ERROR,        ///< Internal request to close (e.g., connection dropped)
    OC_STATE_RTSP_DESCRIBE_READY,        ///< Session received Describe response
    OC_STATE_RTSP_AUTHORIZATION_FAIL,    ///< RTSP authentication failed
    OC_STATE_RTSP_PLAY_READY,            ///< Received PLAY response
    OC_STATE_RTSP_FILE_PLAY_OVER,        ///< Recording file playback ended normally
    OC_STATE_RTSP_PAUSE_READY,           ///< Received PAUSE response
    OC_STATE_RTSP_KEY_MISMATCH,          ///< Incorrect key
    OC_STATE_RTSP_LIVE_PAUSE_ENABLE,     ///< Server live supports PAUSE
    OC_STATE_RTSP_LIVE_PAUSE_DISABLE,    ///< Server live doesn't support PAUSE
    OC_STATE_RTSP_TALK_BUSY_LINE,        ///< Intercom busy
    OC_STATE_RTSP_TALK_CHECK_FAILED,     ///< Intercom operation conditions not met
    OC_STATE_RTSP_SERVICE_UNAVAILABLE =  99,  ///< Connection limit error based on 503 status code
    OC_STATE_RTSP_USER_INFO_BASE_START = 100, ///< User information start code
    OC_STATE_RTSP_STREAM_LIMIT_NOTIFY = 101,         ///< Traffic limit notification
    OC_STATE_RTSP_CONCURRENT_LIMIT_NOTIFY = 102,     ///< Concurrent limit notification
    OC_STATE_RTSP_DOWNLOAD_ONE_RECORD_FINISH = 39892,///< Single recording segment download complete during file list download
};

#pragma mark - DHHTTP State (when type == OC_RESULT_PROTO_TYPE_DHHTTP)
/**
 * DHHTTP state enumeration
 */
typedef NS_ENUM(NSInteger, OC_DHHTTP_STATE) {
    OC_STATE_DHHTTP_COMPONENT_ERROR = -1,           ///< Component internal streaming interface call failed
    OC_STATE_DHHTTP_OK = 1000,                      ///< Playback started successfully
    OC_STATE_DHHTTP_PLAY_FILE_OVER = 2000,          ///< Current file playback completed during playback
    OC_STATE_DHHTTP_PLAY_READY             = 3000,  ///< Sub-link media started successfully
    OC_STATE_DHHTTP_PAUSE_READY            = 4000, ///< Sub-link media stopped successfully
    OC_STATE_DHHTTP_PLAY_FAIL              = 5000, ///< Failed to open media
    OC_STATE_DHHTTP_TALK_STOP      = 7000,          ///< Device actively hung up announce push
    OC_STATE_DHHTTP_DOWNLOAD_ONERECORD_FINISH = 39892, ///< Single recording segment download complete during file list download
    OC_STATE_DHHTTP_BAD_REQUEST = 400000,           ///< Illegal request, close client
    OC_STATE_DHHTTP_UNAUTHORIZED = 401000,          ///< Unauthorized, username/password error
    OC_STATE_DHHTTP_ACCOUT_BLOCK = 401011,          ///< Account locked
    OC_STATE_DHHTTP_FORBIDDEN = 403000,             ///< Forbidden, close client
    OC_STATE_DHHTTP_NOTFOUND = 404000,             ///< Not found, close client
    OC_STABLE_DHHTTP_REQ_TIMEOUT = 408000,          ///< Request timeout (streaming succeeded but network exception caused disconnection)
    OC_STATE_DHHTTP_SERVER_ERROR = 500000,          ///< Server internal error, close client
    OC_STATE_DHHTTP_SERVER_UNVALILABLE = 503000,    ///< Service unavailable
    OC_STATE_DHHTTP_FLOWLIMIT      = 503006,        ///< MTS traffic limit
    OC_STATE_DHHTTP_P2P_MAXCONNECT = 503007,        ///< P2P reached maximum connections
    OC_STATE_DHHTTP_GATEWAY_TIMEOUT    = 504000,    ///< Network unreachable
    OC_STATE_DHHTTP_CLIENT_ERROR       = 1000000,   ///< Client internal error (usually logic error)
    OC_STATE_DHHTTP_KEY_ERROR          = 1000005,   ///< Client and server keys don't match
};

#pragma mark - HLS State (when type == OC_RESULT_PROTO_TYPE_HLS)
/**
 * HLS state enumeration
 */
typedef NS_ENUM(NSInteger, OC_HLS_STATE) {
    OC_STATE_HLS_DOWNLOAD_FAILD,        ///< Download failed
    OC_STATE_HLS_DOWNLOAD_BEGIN,        ///< Download started
    OC_STATE_HLS_DOWNLOAD_END,          ///< Download completed
    OC_STATE_HLS_SEEK_SUCCESS,          ///< Seek succeeded
    OC_STATE_HLS_SEEK_FAILD,            ///< Seek failed
    OC_STATE_HLS_ABORT_DONE,            ///< Abort completed
    OC_STATE_HLS_RESUME_DONE,           ///< Resume completed
    OC_STATE_HLS_DOWNLOAD_TIMEOUT,      ///< Download timeout
    OC_STATE_HLS_DOWNLOAD_INDEX_FAILED, ///< Index download failed
    OC_STATE_HLS_SLICE_DONE,            ///< Slice download successful
    OC_STATE_HLS_PAUSE_DONE,            ///< Paused successfully
    OC_STATE_HLS_KEY_MISMATCH = 11,     ///< Incorrect key
    OC_STATE_HLS_EXTRACT_FAILED = 13,   ///< Frame extraction failed, app needs to set playback speed to 1
    OC_STATE_HLS_DOWNLOAD_ONE_RECORD_FINISH = 39892, ///< Single recording segment download complete during recording list download
};

#pragma mark - SIP State (when type == OC_RESULT_PROTO_TYPE_SIP)
/**
 * SIP state enumeration
 */
typedef NS_ENUM(NSInteger, OC_SIP_STATE) {
    OC_STATE_SIP_PLAY_FAILD = -1,       ///< Dahua Meeting failed
};

#pragma mark - NETSDK State (when type == OC_RESULT_PROTO_TYPE_NETSDK)
/**
 * NETSDK state enumeration
 */
typedef NS_ENUM(NSInteger, OC_NETSDK_STATE) {
    OC_STATE_NETSDK_FAILD = -1,    ///< Dahua P2P device playback or intercom failed
    OC_STATE_NETSDK_SUCCESS = 0,   ///< Dahua P2P device playback or intercom succeeded
};

#pragma mark - REST State (when type == OC_RESULT_PROTO_TYPE_REST)
/**
 * REST state enumeration
 */
typedef NS_ENUM(NSInteger, OC_REST_STATE) {
    OC_STATE_REST_CONNECTION_FAILD = -1, ///< REST connection timeout
};

#pragma mark - File State (when type == OC_RESULT_PROTO_TYPE_FILE)
/**
 * File state enumeration
 */
typedef NS_ENUM(NSInteger, OC_FILE_STATE) {
    OC_STATE_FILE_INIT_FAILD = -1, ///< Local file playback initialization failed
    OC_STATE_FILE_PLAY_SEEK_FAILED = 6,         ///< Seek failed
    OC_STATE_FILE_PLAY_SEEK_SUCCESS = 7,         ///< Seek succeeded
    OC_STATE_FILE_PLAY_CROSS_BORDER = 8,        ///< Seek out of bounds
};

#pragma mark - Media Convert Error Code
/**
 * Media conversion error code enumeration
 */
typedef NS_ENUM(NSInteger, OC_CONVERT_ERROR) {
    OC_CONVERT_ERROR_INVALID_HANDLE,        ///< Invalid handle
    OC_CONVERT_ERROR_UNSUPPORT,             ///< Parsing or packaging type not supported
    OC_CONVERT_ERROR_THREAD,                ///< Internal thread error
    OC_CONVERT_ERROR_PARAM,                 ///< Parameter error
    OC_CONVERT_ERROR_FILE_OPEN,             ///< File open error (may be mutually exclusive)
    OC_CONVERT_ERROR_FILE_READ,             ///< File read error
    OC_CONVERT_ERROR_FILE_WRITE,            ///< File write error
    OC_CONVERT_ERROR_FORMAT,                ///< Format error, cannot continue parsing
    OC_CONVERT_ERROR_BUFFER_OVER_FLOW,      ///< Internal buffer overflow
    OC_CONVERT_ERROR_SYSOUTOFMEM,           ///< System out of memory
    OC_CONVERT_ERROR_NO_IDR_FRAME,          ///< Missing I-frame
    OC_CONVERT_ERROR_NO_OUTPUT,             ///< No data output in synchronous packaging/parsing logic
    OC_CONVERT_ERROR_ORDER,                 ///< Incorrect call order
    OC_CONVERT_ERROR_ENCRYPT_KEY,           ///< Encryption key error
};

#pragma mark - Login State
/**
 * Login state enumeration
 */
typedef NS_ENUM(NSInteger, OC_LOGIN_STATE) {
    OC_LOGIN_STATE_INIT = 1,                ///< Initialization
    OC_LOGIN_STATE_P2P_SUCCESS,             ///< Pre-hole punching succeeded
    OC_LOGIN_STATE_P2P_FAILED,              ///< Pre-hole punching failed
    OC_LOGIN_STATE_LOGIN_SUCCESS,           ///< Login succeeded
    OC_LOGIN_STATE_LOGIN_FAILED,            ///< Login failed
};

#pragma mark - Industry Platform Talk State
/**
 * Industry platform intercom state enumeration
 */
typedef NS_ENUM(NSInteger, OC_INDUSTRYPLTM_TALK_STATE) {
    OC_STATE_INDUSTRYPLTM_START_TALK_SUCCESS = 1,   ///< Intercom started successfully
    OC_STATE_INDUSTRYPLTM_START_TALK_FAILED,        ///< Intercom start failed
    OC_STATE_INDUSTRYPLTM_RESTART_TALK,             ///< Restart intercom
    OC_STATE_INDUSTRYPLTM_STOP_TALK_FAILED,         ///< Intercom stop failed
    OC_STATE_INDUSTRYPLTM_STOP_TALK_SUCCESS,        ///< Intercom stopped successfully
    OC_STATE_INDUSTRYPLTM_TALK_EXCEPTION,           ///< Intercom exception
};

#pragma mark - Industry Platform Play State
/**
 * Industry platform playback state enumeration
 */
typedef NS_ENUM(NSInteger, OC_INDUSTRYPLTM_PLAY_STATE) {
    OC_STATE_INDUSTRYPLTM_PLAY_FIRSTSTREAM = 1,     ///< First frame received, can display playback
    OC_STATE_INDUSTRYPLTM_PLAY_END,                 ///< Video playback ended
    OC_STATE_INDUSTRYPLTM_PLAY_NETWORK_ABORT,       ///< Network exception
    OC_STATE_INDUSTRYPLTM_PLAY_FAILED,              ///< Playback exception (video data error)
    OC_STATE_INDUSTRYPLTM_PLAY_BAD_FILE,            ///< Bad file (unsupported format)
    OC_STATE_INDUSTRYPLTM_PLAY_SEEK_FAILED,         ///< Seek failed
    OC_STATE_INDUSTRYPLTM_PLAY_SEEK_SUCCESS,        ///< Seek succeeded
    OC_STATE_INDUSTRYPLTM_PLAY_CROSS_BORDER,        ///< Seek out of bounds
    OC_STATE_INDUSTRYPLTM_PLAY_DATA_OVER,           ///< All files playback completed
    OC_STATE_INDUSTRYPLTM_PLAY_AUTHORITY,           ///< No playback permission
};

#pragma mark - DSS SDK Error
/**
 * DSS SDK error enumeration
 */
typedef NS_ENUM(NSInteger, DssSDK_ERROR) {
    /// REST errors are not transparently transmitted externally, uniformly -1
    REST_ERROR_OUTSIDE = -1,
    REST_HTTP_ERR = -2,
    REST_BUSINESS_ERR = -3,
    REST_DATA_ERR = -4,
    
    NETSDK_ERROR_OUTSIDE = -1,
    
    ERROR_OK = 0,
    ERROR_FAIL = -1,
    ERROR_INVALID_PARAMETER  = -100,
    ERROR_REST_NOT_INIT,
    ERROR_UNSUPPORT_CALL,
};

#pragma mark - Play State
/**
 * Playback state enumeration (for full-link tracking)
 */
typedef NS_ENUM(NSInteger, OC_PLAY_STATE) {
    OC_PLAY_STATE_START = 1,               ///< App calls component to start playback
    OC_PLAY_STATE_GETP2PPORT_BEGIN,        ///< Start getting P2P port
    OC_PLAY_STATE_GETP2PPORT_OK,           ///< Get P2P port succeeded
    OC_PLAY_STATE_GETP2PPORT_FAIL,         ///< Get P2P port failed
    OC_PLAY_STATE_GETMTSURL_BEGIN,         ///< Start getting forwarding URL
    OC_PLAY_STATE_GETMTSURL_OK,            ///< Get forwarding URL succeeded
    OC_PLAY_STATE_GETMTSURL_FAIL,          ///< Get forwarding URL failed
    OC_PLAY_STATE_GETSTREAM,               ///< Start calling streaming interface
    OC_PLAY_STATE_FIRST_FRAME,             ///< First frame received
    OC_PLAY_STATE_PLAY_SUCCESS,            ///< Play SDK rendered first frame
    OC_PLAY_STATE_STOP,                    ///< App calls stop interface
};

#pragma mark - IVS Type
/**
 * Intelligent data type enumeration
 */
typedef NS_ENUM(NSInteger, OC_IVS_TYPE) {
    IVSTYPE_TRACK = 1, ///< Tracking
    IVSTYPE_ALARM = 2, ///< Event alarm
    IVSTYPE_RULE = 3, ///< Rule
    IVSTYPE_TRACKEX2 = 14, ///< Structured tracking
    IVSTYPE_DATA_WITH_LARGE_AMOUNT = 25, ///< Large data frame (contains crowd heat map)
};

#pragma mark - Device Type
/**
 * Device type enumeration
 */
typedef NS_ENUM(NSInteger, OC_DEVICETYPE) {
    DEVICETYPE_UNKNOWN = 0, ///< Unknown
    DEVICETYPE_DH = 1, ///< Dahua device
    DEVICETYPE_GB = 2, ///< GB standard device
    DEVICETYPE_LC = 3, ///< LeChange device
};

#endif //__LCSDK_LCSDK_DEFINE_H__
