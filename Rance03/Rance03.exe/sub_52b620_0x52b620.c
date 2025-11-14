// 函数: sub_52b620
// 地址: 0x52b620
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx = *(arg1 + 0x30)
int32_t* result = *(arg1 + 0x2c)

if (result != edx)
    while (*result != arg2)
        result = &result[1]
        
        if (result == edx)
            break
    
    if (result != edx)
        return result

sub_4158d0(arg1 + 0x2c, &arg2)
int32_t* edx_1 = *(arg1 + 0x30)
int32_t* ecx_2 = *(arg1 + 0x2c)
arg2.b = 0
int32_t eax_2 = (edx_1 - ecx_2) s>> 2
return sub_52b9a0(eax_2, edx_1, ecx_2, eax_2, arg2)
