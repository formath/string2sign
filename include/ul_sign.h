/**
 * @file
 * @brief 生成数字签名
 */
//***********************************************************************
//			Signature Utilities (SU) 1.0
//
//   programmed by Ming Lei, Jul, 2000
//***********************************************************************

#ifndef __UL_SIGN_H__
#define __UL_SIGN_H__

#include <cstdint>

/**
 *  为一段data创建唯一的64位数据签名
 *
 *  @param[in]  psrc  src data
 *  @param[in]  slen  data的长度
 *  @param[out] sign1 返回的数字签名的高32位
 *  @param[out] sign2 返回的数字签名的低32位
 *  @return 操作结果
 * - 0   成功
 * - -1  失败
 */
int create_sign_fs64(const char* psrc, int slen, uint32_t* sign1,
                     uint32_t* sign2);

int create_sign_fs64(const char* psrc, int slen, uint64_t* sign);
#endif
