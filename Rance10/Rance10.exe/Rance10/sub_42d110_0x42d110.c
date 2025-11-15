// 函数: sub_42d110
// 地址: 0x42d110
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** esi = arg3
int32_t ebx
ebx.b = *(arg1 + 4) == 0
int32_t* edi = arg4
int32_t* arg_4

if (edi != 0)
    void** ecx
    
    if (esi[5] u< 0x10)
        ecx = esi
    else
        ecx = *esi
    
    if ((*(*edi + 0x30))(ecx) != 0)
        if (esi[5] u>= 0x10)
            esi = *esi
        
        *arg_4 = (*(*edi + 0x34))(esi) * ((ebx << 1) + 0xffffffff)
        int32_t eax_6
        eax_6.b = 1
        return eax_6
    
    void** ecx_4
    
    if (esi[5] u< 0x10)
        ecx_4 = esi
    else
        ecx_4 = *esi
    
    if ((*(*edi + 0x38))(ecx_4) != 0)
        if (esi[5] u>= 0x10)
            esi = *esi
        
        (*(*edi + 0x3c))(esi)
        *arg_4 = int.d(fconvert.t(fconvert.s(arg2))) * ((ebx << 1) + 0xffffffff)
        int32_t* eax_12
        eax_12.b = 1
        return eax_12
    
    void** ecx_9
    
    if (esi[5] u< 0x10)
        ecx_9 = esi
    else
        ecx_9 = *esi
    
    if ((*(*edi + 0x48))(ecx_9) != 0)
        if (esi[5] u>= 0x10)
            esi = *esi
        
        int32_t ecx_12
        ecx_12.b = (*(*edi + 0x4c))(esi) != 0
        *arg_4 = ecx_12 * ((ebx << 1) + 0xffffffff)
        int32_t* eax_19
        eax_19.b = 1
        return eax_19

char* ecx_14

if (esi[5] u< 0x10)
    ecx_14 = esi
else
    ecx_14 = *esi

int32_t* edi_1 = arg_4

if (sub_63a2c0(ecx_14, edi_1) != 0)
    *edi_1 *= (ebx << 1) + 0xffffffff
    int32_t eax_22
    eax_22.b = 1
    return eax_22

bool cond:1 = esi[5] u< 0x10
arg_4 = nullptr
char* ecx_15

if (cond:1)
    ecx_15 = esi
else
    ecx_15 = *esi

if (sub_63a350(ecx_15, &arg_4) != 0)
    *edi_1 = int.d(_mm_cvtepi32_ps(zx.o((ebx << 1) + 0xffffffff)) f* arg_4)
    int32_t eax_24
    eax_24.b = 1
    return eax_24

arg_4.b = 0

if (esi[5] u>= 0x10)
    esi = *esi

if (sub_63a3e0(esi, &arg_4) == 0)
    return 0

int32_t eax_26
eax_26.b = arg_4.b != 0
*edi_1 = eax_26 * ((ebx << 1) + 0xffffffff)
int32_t eax_27
eax_27.b = 1
return eax_27
