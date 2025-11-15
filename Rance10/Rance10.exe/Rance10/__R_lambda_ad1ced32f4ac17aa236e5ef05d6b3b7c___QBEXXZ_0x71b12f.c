// 函数: ??R<lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c>@@QBEXXZ
// 地址: 0x71b12f
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

data_7fcaf0 = *(*(**arg1 + 0x48) + 4)
data_7fcaf4 = *(*(**arg1 + 0x48) + 8)
data_7fcaec = *(*(**arg1 + 0x48) + 0x21c)
_memcpy_s(0x7fcaf8, 0xc, *(**arg1 + 0x48) + 0xc, 0xc)
_memcpy_s(0x7e1908, 0x101, *(**arg1 + 0x48) + 0x18, 0x101)
_memcpy_s(0x7e1a10, 0x100, *(**arg1 + 0x48) + 0x119, 0x100)
int32_t* eax_24 = data_7e1d30
bool cond:0 = *eax_24 != 1
*eax_24
*eax_24 -= 1

if (not(cond:0))
    int32_t eax_25 = data_7e1d30
    
    if (eax_25 != 0x7e1b10)
        __free_base(eax_25)

data_7e1d30 = *(**arg1 + 0x48)
int32_t* result = *(**arg1 + 0x48)
*result += 1
return result
