// 函数: __mbschr_l
// 地址: 0x6add75
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_14
sub_69beb0(&var_14, arg3)
void* result_1 = arg1
void* result

if (result_1 != 0)
    result = nullptr
    void* var_10
    
    if (*(var_10 + 8) != 0)
        while (true)
            uint16_t ecx_5 = zx.w(*result_1)
            
            if (ecx_5 != 0)
                if ((*(zx.d(ecx_5.b) + var_10 + 0x19) & 4) != 0)
                    result_1 += 1
                    uint32_t eax_3
                    eax_3.b = *result_1
                    
                    if (eax_3.b == 0)
                        break
                    
                    if (arg2 == (zx.d(ecx_5) << 8 | zx.d(eax_3.b)))
                        result = result_1 - 1
                        break
                    
                    result_1 += 1
                    continue
                else if (arg2 != zx.d(ecx_5))
                    result_1 += 1
                    continue
            
            if (arg2 != zx.d(ecx_5))
                break
            
            result = result_1
            break
    else
        result = _strchr(result_1, arg2.b)
else
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = nullptr

char var_8
void* var_c

if (var_8 != 0)
    *(var_c + 0x70) &= 0xfffffffd
return result
