// 函数: sub_6acf40
// 地址: 0x6acf40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
int32_t ebx = 1

if ((*(arg1 + 0x11c) & 0x20000000) != 0)
    ebx.b = (*(arg1 + 0x78) & 0x300) != 0x300
else if ((*(arg1 + 0x78) & 0x800) != 0)
    ebx = 0

*(arg1 + 0x2c4) = 0x81
int32_t eax_3 = *(arg1 + 0x5c)

if (eax_3 == 0)
    sub_6a7500(arg1, "Call to NULL read function")
    noreturn

eax_3(arg1, &var_4, 4)

if (ebx == 0)
    return 0

int16_t eax_4 = var_4.w
int32_t result
result.b =
    (((((zx.d(eax_4.b) << 8) + zx.d(eax_4:1.b)) << 8) + zx.d(var_4:2.b)) << 8) + zx.d(var_4:3.b)
    != *(arg1 + 0x140)
return result
