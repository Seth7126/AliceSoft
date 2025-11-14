// 函数: sub_63a000
// 地址: 0x63a000
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 != 0xfffffff0)
    int32_t eax_1 = *(arg1 + 0x18)
    
    if (eax_1 != 0)
        _free(eax_1)
    
    int32_t eax_2 = *(arg1 + 0x1c)
    
    if (eax_2 != 0)
        _free(eax_2)
    
    __builtin_memset(&arg1[0x10], 0, 0x14)

void* esi_1 = &arg1[0x30]
int32_t i_1 = 7
int32_t i

do
    _free(*esi_1)
    esi_1 += 0x10
    i = i_1
    i_1 -= 1
while (i != 1)
_free(*(arg1 + 0x24))
_free(*(arg1 + 0x98))
_free(*(arg1 + 0xa0))
return _memset(arg1, i_1.b, 0xb4)
