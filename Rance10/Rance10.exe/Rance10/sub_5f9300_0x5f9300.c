// 函数: sub_5f9300
// 地址: 0x5f9300
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = arg2
void* esi

if (*arg1 != 0)
    int32_t* esi_1 = arg1
    void* edx = esi_1 + 1
    char i
    
    do
        i = *esi_1
        esi_1 += 1
    while (i != 0)
    esi = esi_1 - edx
else
    esi = nullptr

if (edi[5] u>= 0x10)
    edi = *edi

void* ebx_1 = edi[4]
void* eax = esi

if (ebx_1 u< esi)
    eax = ebx_1

int32_t result = sub_406ac0(eax, arg1, edi, eax)
bool cond:3 = result == 0

if (result == 0)
    bool c_1 = esi u< ebx_1
    
    if (esi != ebx_1 && not(c_1))
        int32_t eax_1
        eax_1.b = false
        return 0xffffff00
    
    cond:3 = neg.d(sbb.d(result, result, c_1)) == 0

result.b = cond:3
return result
