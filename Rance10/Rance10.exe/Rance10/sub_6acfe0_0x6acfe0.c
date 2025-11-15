// 函数: sub_6acfe0
// 地址: 0x6acfe0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint8_t var_11c
int32_t eax_1 = __security_cookie ^ &var_11c
int32_t var_4 = eax_1
int32_t edi = arg2
int32_t ecx = *(arg1 + 0x80)

if (ecx != 0)
    int32_t i = 4
    var_11c = (ecx u>> 0x18).b
    uint8_t var_11b_1 = (ecx u>> 0x10).b
    uint8_t var_11a_1 = (ecx u>> 8).b
    uint8_t var_119_1 = *(arg1 + 0x80)
    
    if ((*" using zstream")[0] != 0)
        while (i u< 0x3f)
            (&var_11c)[i] = *(i + 0x7e52cc)
            i += 1
            
            if (*(i + 0x7e52cc) == 0)
                break
    
    (&var_11c)[i] = 0
    char var_dc[0xd8]
    sub_6a7650(&var_11c, &var_dc, arg1, &var_11c)
    eax_1, arg2 = sub_6a7530(arg1, &var_dc)
    *(arg1 + 0x80) = 0

bool cond:0 = (*(arg1 + 0x78) & 2) == 0
*(arg1 + 0x84) = 0
*(arg1 + 0x88) = 0
*(arg1 + 0x90) = 0
*(arg1 + 0x94) = 0
void* result

if (cond:0)
    void* var_128_2 = arg1 + 0x84
    result = sub_6a0710(eax_1, arg2, arg1 + 0x84, "1.2.11")
    
    if (result != 0)
        sub_6a4ab0(arg1, result)
    else
        *(arg1 + 0x78) |= 2
        *(arg1 + 0x80) = edi
else
    result = sub_6a0650(arg1 + 0x84)
    
    if (result == 0)
        *(arg1 + 0x80) = edi
    else
        sub_6a4ab0(arg1, result)

@__security_check_cookie@4(var_4 ^ &var_11c)
return result
