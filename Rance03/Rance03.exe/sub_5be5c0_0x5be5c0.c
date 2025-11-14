// 函数: sub_5be5c0
// 地址: 0x5be5c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
char* edi = *(arg2 + 4)

if (&edi[4] u> *(arg2 + 8))
    int32_t result
    result.b = 0
    return result

uint32_t edx_4 = (zx.d(edi[3]) << 8 | zx.d(edi[2])) << 8 | zx.d(edi[1])
uint32_t eax_2 = zx.d(*edi)
*(arg2 + 4) = &edi[4]
return sub_5dc520(arg1 + 0x90, arg2, edx_4 << 8 | eax_2, *(arg1 + 0xf0)) != 0
