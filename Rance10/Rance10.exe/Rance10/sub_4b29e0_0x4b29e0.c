// 函数: sub_4b29e0
// 地址: 0x4b29e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
int32_t ebx
ebx.b = 0
ebx:1.b = 0
var_4:1.b = 0
var_4.b = 0
var_4:3.b = 0
var_4:2.b = 0
void* eax = sub_4b3890(arg1)

if (eax != 0)
    sub_4adcc0(eax, *(*(arg1 + 0x158) + 0x40), &var_4:2, &var_4:3, &var_4, &var_4:1)
    ebx.b = var_4.b
    ebx:1.b = var_4:1.b

void* edi = data_7fcb64
char ecx_2
char edx

if (sub_47d5a0(edi) == 0)
label_4b2a5f:
    ecx_2 = 0
    
    if (*(arg1 + 0x104) == 0 || ebx.b == 0)
        edx = 0
    else
        edx = 1
else
    if ((***(edi + 0x1c))() == 0)
        goto label_4b2a5f
    
    if ((0x8000 & GetKeyState(1)) == 0)
        goto label_4b2a5f
    
    ecx_2 = 1
    edx = 1

*(*(arg1 + 0xbc) + 0xaa) = edx

if (ecx_2 != 0 || (*(arg1 + 0x104) != ecx_2 && ebx:1.b != 0))
    edx = 1
else
    edx = 0

*(*(arg1 + 0xc0) + 0xaa) = edx

if (ecx_2 != 0 || (*(arg1 + 0x104) != ecx_2 && var_4:2.b != ecx_2 && *(arg1 + 0x154) == ecx_2))
    edx = 1
else
    edx = 0

*(*(arg1 + 0xc4) + 0xaa) = edx

if (ecx_2 == 0 && (*(arg1 + 0x104) == ecx_2 || var_4:3.b == ecx_2 || *(arg1 + 0x154) != ecx_2))
    void* eax_10 = *(arg1 + 0xc8)
    *(eax_10 + 0xaa) = 0
    return eax_10

void* eax_11 = *(arg1 + 0xc8)
*(eax_11 + 0xaa) = 1
return eax_11
