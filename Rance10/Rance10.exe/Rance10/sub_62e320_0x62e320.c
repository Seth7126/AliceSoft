// 函数: sub_62e320
// 地址: 0x62e320
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** edi = arg2
char* esi = (**arg1)()

if (esi != 0)
    char* eax_1
    
    do
        eax_1.b = *esi
        esi = &esi[1]
    while (eax_1.b != 0)
    esi -= &esi[1]

int32_t result = edi[4]

if (esi - result s< 0)
    result.b = 0
    return result

if (edi[5] u>= 0x10)
    edi = *edi

int32_t eax_5 = _strncmp((**arg1)(edi, result) + esi - result)
int32_t eax_6 = neg.d(eax_5)
return sbb.d(eax_6, eax_6, eax_5 != 0) + 1
