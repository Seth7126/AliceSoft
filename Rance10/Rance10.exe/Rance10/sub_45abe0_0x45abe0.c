// 函数: sub_45abe0
// 地址: 0x45abe0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_14
int32_t* result = __security_cookie ^ &var_14
int32_t* result_1 = result
int32_t edx = 0x10
var_14 = 0x87ae915d

if (arg2 s< 0x10)
    edx = arg2

int32_t i = 0
int32_t var_10 = 0xcd41564a
int32_t var_c = 0x924cec83
int32_t var_8 = 0x3416cbb5

if (edx s> 0)
    if (edx u>= 0x20)
        int32_t __saved_esi
        
        if (arg1 u<= &__saved_esi + edx + 7)
            result = &var_14
        
        if (arg1 u> &__saved_esi + edx + 7 || arg1 - 1 + edx u< &var_14)
            int32_t eax_3 = edx & 0x8000001f
            
            if (eax_3 s< 0)
                eax_3 = ((eax_3 - 1) | 0xffffffe0) + 1
            
            result = arg1
            
            do
                int128_t xmm0_1 = *result
                i += 0x20
                result = &result[8]
                *(result - 0x20) = *(&var_14 - arg1 + result - 0x20) ^ xmm0_1
                *(result - 0x10) ^= *(result + &result_1 - arg1 - 0x20)
            while (i s< edx - eax_3)
    
    if (i s< edx)
        result = arg1 + i
        int32_t i_2 = edx - i
        int32_t i_1
        
        do
            i.b = *(result + &var_14 - arg1)
            result += 1
            *(result - 1) ^= i.b
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)

@__security_check_cookie@4(result_1 ^ &var_14)
return result
