// 函数: sub_407560
// 地址: 0x407560
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi

if (*arg2 != 0)
    int32_t* esi_1 = arg2
    void* edi_1 = esi_1 + 1
    char i
    
    do
        i = *esi_1
        esi_1 += 1
    while (i != 0)
    esi = esi_1 - edi_1
else
    esi = nullptr

if (arg1[5] u>= 0x10)
    arg1 = *arg1

void* edi_3 = arg1[4]
void* eax = esi

if (edi_3 u< esi)
    eax = edi_3

int32_t result = sub_406ac0(eax, arg2, arg1, eax)
bool cond:2 = result == 0

if (result == 0)
    bool c_1 = esi u< edi_3
    
    if (esi != edi_3 && not(c_1))
        int32_t eax_1
        eax_1.b = false
        return 0xffffff00
    
    cond:2 = neg.d(sbb.d(result, result, c_1)) == 0

result.b = cond:2
return result
