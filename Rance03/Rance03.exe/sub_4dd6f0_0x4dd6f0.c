// 函数: sub_4dd6f0
// 地址: 0x4dd6f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_24
int32_t eax_1 = __security_cookie ^ &var_24
int32_t var_20
int32_t* eax_3 = sub_40d1c0(arg1 + 0xc0, arg1 + 0xa8, &var_20, arg1 + 0xc0)
int32_t ebp = *(arg1 + 0xe8)
int32_t* ecx_1 = eax_3
int32_t* edx_1

if (*(arg1 + 0xec) u< 0x10)
    edx_1 = arg1 + 0xd8
else
    edx_1 = *(arg1 + 0xd8)

int32_t ebx = ecx_1[4]

if (ecx_1[5] u>= 0x10)
    ecx_1 = *ecx_1

int32_t eax_4 = ebp

if (ebx u< ebp)
    eax_4 = ebx

int32_t* eax_5
int32_t ecx_2
eax_5, ecx_2 = sub_405190(eax_4, edx_1, ecx_1, eax_4)
bool cond:2 = eax_5 != 0

if (eax_5 == 0)
    if (ebx u>= ebp)
        eax_5.b = ebx != ebp
    else
        eax_5 = 0xffffffff
    
    cond:2 = eax_5 != 0

ebx.b = cond:2
int32_t var_c

if (var_c u>= 0x10)
    eax_5, ecx_2 = j__free(var_20)

if (ebx.b != 0)
    sub_485d30(arg1 + 8, 0)
    eax_5 = sub_40d1c0(arg1 + 0xc0, arg1 + 0xa8, &var_20, arg1 + 0xc0)
    
    if (arg1 + 0xd8 != eax_5)
        if (*(arg1 + 0xec) u>= 0x10)
            j__free(*(arg1 + 0xd8))
        
        *(arg1 + 0xec) = 0xf
        *(arg1 + 0xe8) = 0
        *(arg1 + 0xd8) = 0
        eax_5 = sub_4030b0(arg1 + 0xd8, eax_5)
    
    if (var_c u>= 0x10)
        int32_t eax_7 = j__free(var_20)
        sub_69a5bc(eax_1 ^ &var_24)
        return eax_7
else if (*(arg1 + 0x1c0) != 0)
    int32_t var_38_7 = ecx_2
    eax_5 = sub_485e20(arg1 + 8)
    *(arg1 + 0x1c0) = 0

sub_69a5bc(eax_1 ^ &var_24)
return eax_5
