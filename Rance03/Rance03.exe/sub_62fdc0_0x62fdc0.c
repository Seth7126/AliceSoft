// 函数: sub_62fdc0
// 地址: 0x62fdc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t edi = 1

if ((*(arg1 + 0x11c) & 0x20000000) == 0)
    if ((*(arg1 + 0x78) & 0x800) != 0)
        edi = 0
else if ((*(arg1 + 0x78) & 0x300) == 0x300)
    edi = 0

int32_t eax_3 = *(arg1 + 0x5c)
*(arg1 + 0x2c4) = 0x81

if (eax_3 == 0)
    sub_62a520(arg1, "Call to NULL read function")
    noreturn

eax_3(arg1, &var_4, 4)

if (edi == 0)
    return 0

int16_t eax_4 = var_4.w
int32_t result
result.b =
    (((((zx.d(eax_4.b) << 8) + zx.d(eax_4:1.b)) << 8) + zx.d(var_4:2.b)) << 8) + zx.d(var_4:3.b)
    != *(arg1 + 0x140)
return result
