/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by lcm-gen
 **/

#include <lcm/lcm_coretypes.h>

#ifndef __ptz_camera_stream_uri_response_t_hpp__
#define __ptz_camera_stream_uri_response_t_hpp__

#include <string>

namespace ptz_camera
{

class stream_uri_response_t
{
    public:
        std::string ip_address;

        std::string uri;

        int16_t    status_code;

        std::string response_message;

    public:
        /**
         * Encode a message into binary form.
         *
         * @param buf The output buffer.
         * @param offset Encoding starts at thie byte offset into @p buf.
         * @param maxlen Maximum number of bytes to write.  This should generally be
         *  equal to getEncodedSize().
         * @return The number of bytes encoded, or <0 on error.
         */
        inline int encode(void *buf, int offset, int maxlen) const;

        /**
         * Check how many bytes are required to encode this message.
         */
        inline int getEncodedSize() const;

        /**
         * Decode a message from binary form into this instance.
         *
         * @param buf The buffer containing the encoded message.
         * @param offset The byte offset into @p buf where the encoded message starts.
         * @param maxlen The maximum number of bytes to reqad while decoding.
         * @return The number of bytes decoded, or <0 if an error occured.
         */
        inline int decode(const void *buf, int offset, int maxlen);

        /**
         * Retrieve the 64-bit fingerprint identifying the structure of the message.
         * Note that the fingerprint is the same for all instances of the same
         * message type, and is a fingerprint on the message type definition, not on
         * the message contents.
         */
        inline static int64_t getHash();

        /**
         * Returns "stream_uri_response_t"
         */
        inline static const char* getTypeName();

        // LCM support functions. Users should not call these
        inline int _encodeNoHash(void *buf, int offset, int maxlen) const;
        inline int _getEncodedSizeNoHash() const;
        inline int _decodeNoHash(const void *buf, int offset, int maxlen);
        inline static uint64_t _computeHash(const __lcm_hash_ptr *p);
};

int stream_uri_response_t::encode(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;
    int64_t hash = (int64_t)getHash();

    tlen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->_encodeNoHash(buf, offset + pos, maxlen - pos);
    if (tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int stream_uri_response_t::decode(const void *buf, int offset, int maxlen)
{
    int pos = 0, thislen;

    int64_t msg_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &msg_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (msg_hash != getHash()) return -1;

    thislen = this->_decodeNoHash(buf, offset + pos, maxlen - pos);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int stream_uri_response_t::getEncodedSize() const
{
    return 8 + _getEncodedSizeNoHash();
}

int64_t stream_uri_response_t::getHash()
{
    static int64_t hash = _computeHash(NULL);
    return hash;
}

const char* stream_uri_response_t::getTypeName()
{
    return "stream_uri_response_t";
}

int stream_uri_response_t::_encodeNoHash(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;

    char* ip_address_cstr = (char*) this->ip_address.c_str();
    tlen = __string_encode_array(buf, offset + pos, maxlen - pos, &ip_address_cstr, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    char* uri_cstr = (char*) this->uri.c_str();
    tlen = __string_encode_array(buf, offset + pos, maxlen - pos, &uri_cstr, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int16_t_encode_array(buf, offset + pos, maxlen - pos, &this->status_code, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    char* response_message_cstr = (char*) this->response_message.c_str();
    tlen = __string_encode_array(buf, offset + pos, maxlen - pos, &response_message_cstr, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int stream_uri_response_t::_decodeNoHash(const void *buf, int offset, int maxlen)
{
    int pos = 0, tlen;

    int32_t __ip_address_len__;
    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &__ip_address_len__, 1);
    if(tlen < 0) return tlen; else pos += tlen;
    if(__ip_address_len__ > maxlen - pos) return -1;
    this->ip_address.assign(((const char*)buf) + offset + pos, __ip_address_len__ - 1);
    pos += __ip_address_len__;

    int32_t __uri_len__;
    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &__uri_len__, 1);
    if(tlen < 0) return tlen; else pos += tlen;
    if(__uri_len__ > maxlen - pos) return -1;
    this->uri.assign(((const char*)buf) + offset + pos, __uri_len__ - 1);
    pos += __uri_len__;

    tlen = __int16_t_decode_array(buf, offset + pos, maxlen - pos, &this->status_code, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    int32_t __response_message_len__;
    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &__response_message_len__, 1);
    if(tlen < 0) return tlen; else pos += tlen;
    if(__response_message_len__ > maxlen - pos) return -1;
    this->response_message.assign(((const char*)buf) + offset + pos, __response_message_len__ - 1);
    pos += __response_message_len__;

    return pos;
}

int stream_uri_response_t::_getEncodedSizeNoHash() const
{
    int enc_size = 0;
    enc_size += this->ip_address.size() + 4 + 1;
    enc_size += this->uri.size() + 4 + 1;
    enc_size += __int16_t_encoded_array_size(NULL, 1);
    enc_size += this->response_message.size() + 4 + 1;
    return enc_size;
}

uint64_t stream_uri_response_t::_computeHash(const __lcm_hash_ptr *)
{
    uint64_t hash = 0x726e0100be99395aLL;
    return (hash<<1) + ((hash>>63)&1);
}

}

#endif
