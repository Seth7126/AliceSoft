// 函数: ??$_Getvals@G@?$_Mpunct@G@std@@IAEXGPBUlconv@@@Z
// 地址: 0x6d65c9
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* eax

if (*(arg1 + 0x28) == 0)
    eax = *(arg2 + 0x10)
else
    eax = *(arg2 + 0xc)

void* var_14 = arg1 + 0x2c
*(arg1 + 0x10) = sub_6d68a6(eax, nullptr)
void* const eax_2 = &data_794c78

if (*(arg2 + 0x2e) u<= 4)
    eax_2 = *(arg2 + 0x20)

void* var_14_1 = arg1 + 0x2c
*(arg1 + 0x14) = sub_6d68a6(eax_2, nullptr)
void* const eax_4 = &data_7503dc

if (*(arg2 + 0x2f) u<= 4)
    eax_4 = *(arg2 + 0x24)

void* var_14_2 = arg1 + 0x2c
*(arg1 + 0x18) = sub_6d68a6(eax_4, nullptr)
void* var_20 = arg1 + 0x2c
int32_t var_24 = 0
*(arg1 + 0xc) = sub_6d6873(zx.d(**(arg2 + 0x14)))
void* var_2c = arg1 + 0x2c
int32_t var_30 = 0
int16_t result = sub_6d6873(zx.d(**(arg2 + 0x18)))
*(arg1 + 0xe) = result
return result
