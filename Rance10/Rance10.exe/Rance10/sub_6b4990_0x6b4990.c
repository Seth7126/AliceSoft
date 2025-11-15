// 函数: sub_6b4990
// 地址: 0x6b4990
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 != 0xfffffff0)
    int32_t eax_1 = (*arg1)[6]
    
    if (eax_1 != 0)
        _free(eax_1)
    
    int32_t eax_2 = (*arg1)[7]
    
    if (eax_2 != 0)
        _free(eax_2)
    
    __builtin_memset(&arg1[1], 0, 0x14)

uint32_t* esi_1 = &arg1[3]
int32_t i_1 = 7
int32_t i

do
    _free(*esi_1)
    esi_1 = &esi_1[4]
    i = i_1
    i_1 -= 1
while (i != 1)
_free((*arg1)[9])
_free((*arg1)[0x26])
_free(arg1[0xa][0])
return _memset(arg1, i_1.b, 0xb4)
