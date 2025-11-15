// 函数: sub_6a87f0
// 地址: 0x6a87f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_6a6f50(arg1)
int32_t eax = *(arg1 + 0x27c)

if (eax != 0)
    int32_t ecx = *(arg1 + 0x278)
    
    if (ecx == 0)
        _free(eax)
    else
        ecx(arg1, eax)

int32_t eax_1 = *(arg1 + 0x2c8)

if (eax_1 != 0)
    int32_t ecx_1 = *(arg1 + 0x278)
    
    if (ecx_1 == 0)
        _free(eax_1)
    else
        ecx_1(arg1, eax_1)

int32_t eax_2 = *(arg1 + 0x2b8)

if (eax_2 != 0)
    int32_t ecx_2 = *(arg1 + 0x278)
    
    if (ecx_2 == 0)
        _free(eax_2)
    else
        ecx_2(arg1, eax_2)

int32_t eax_3 = *(arg1 + 0x208)

if (eax_3 != 0)
    int32_t ecx_3 = *(arg1 + 0x278)
    
    if (ecx_3 == 0)
        _free(eax_3)
    else
        ecx_3(arg1, eax_3)

int32_t eax_4 = *(arg1 + 0x20c)

if (eax_4 != 0)
    int32_t ecx_4 = *(arg1 + 0x278)
    
    if (ecx_4 == 0)
        _free(eax_4)
    else
        ecx_4(arg1, eax_4)

if ((*(arg1 + 0x248) & 0x1000) != 0)
    int32_t eax_5 = *(arg1 + 0x144)
    
    if (eax_5 != 0)
        int32_t ecx_5 = *(arg1 + 0x278)
        
        if (ecx_5 == 0)
            _free(eax_5)
        else
            ecx_5(arg1, eax_5)

*(arg1 + 0x248) &= 0xffffefff

if ((*(arg1 + 0x248) & 0x2000) != 0)
    int32_t eax_6 = *(arg1 + 0x1b4)
    
    if (eax_6 != 0)
        int32_t ecx_6 = *(arg1 + 0x278)
        
        if (ecx_6 == 0)
            _free(eax_6)
        else
            ecx_6(arg1, eax_6)

*(arg1 + 0x248) &= 0xffffdfff
sub_6a2070(arg1 + 0x84)
int32_t eax_7 = *(arg1 + 0x1dc)

if (eax_7 != 0)
    int32_t ecx_8 = *(arg1 + 0x278)
    
    if (ecx_8 == 0)
        _free(eax_7)
    else
        ecx_8(arg1, eax_7)

int32_t eax_8 = *(arg1 + 0x2a8)

if (eax_8 != 0)
    int32_t ecx_9 = *(arg1 + 0x278)
    
    if (ecx_9 == 0)
        _free(eax_8)
    else
        ecx_9(arg1, eax_8)

int32_t result = *(arg1 + 0x25c)

if (result == 0)
    return result

int32_t ecx_10 = *(arg1 + 0x278)

if (ecx_10 == 0)
    return _free(result)

return ecx_10(arg1, result)
