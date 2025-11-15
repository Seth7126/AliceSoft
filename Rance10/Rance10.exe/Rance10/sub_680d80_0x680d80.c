// 函数: sub_680d80
// 地址: 0x680d80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edx

if (arg3[5] u< 0x10)
    edx = arg3
else
    edx = *arg3

int32_t* ecx

if (arg2[5] u< 0x10)
    ecx = arg2
else
    ecx = *arg2

int32_t ebx = arg3[4]
int32_t eax = ebx
int32_t ebp = arg2[4]

if (ebp u< ebx)
    eax = ebp

int32_t eax_1 = sub_406ac0(eax, edx, ecx, eax)

if (eax_1 != 0)
    if (eax_1 s< 0)
    label_680dc2:
        
        if (arg2 != arg3)
            sub_46e0d0(arg2, arg3)
            int32_t ecx_2 = arg2[4]
            arg2[4] = arg3[4]
            arg3[4] = ecx_2
            int32_t ecx_3 = arg2[5]
            arg2[5] = arg3[5]
            arg3[5] = ecx_3
else if (ebp u< ebx)
    goto label_680dc2

int32_t* edx_1

if (arg2[5] u< 0x10)
    edx_1 = arg2
else
    edx_1 = *arg2

int32_t* ecx_4

if (arg4[5] u< 0x10)
    ecx_4 = arg4
else
    ecx_4 = *arg4

int32_t ebp_1 = arg2[4]
int32_t eax_4 = ebp_1

if (arg4[4] u< ebp_1)
    eax_4 = arg4[4]

int32_t result = sub_406ac0(eax_4, edx_1, ecx_4, eax_4)

if (result == 0)
    if (arg4[4] u>= ebp_1)
        return result
    
    goto label_680e2d

if (result s< 0)
label_680e2d:
    
    if (arg4 != arg2)
        sub_46e0d0(arg4, arg2)
        int32_t ecx_6 = arg4[4]
        arg4[4] = arg2[4]
        arg2[4] = ecx_6
        int32_t ecx_7 = arg4[5]
        arg4[5] = arg2[5]
        arg2[5] = ecx_7
    
    int32_t* edx_2
    
    if (arg3[5] u< 0x10)
        edx_2 = arg3
    else
        edx_2 = *arg3
    
    int32_t* ecx_8
    
    if (arg2[5] u< 0x10)
        ecx_8 = arg2
    else
        ecx_8 = *arg2
    
    int32_t ebx_2 = arg3[4]
    int32_t eax_7 = ebx_2
    int32_t ebp_2 = arg2[4]
    
    if (ebp_2 u< ebx_2)
        eax_7 = ebp_2
    
    result = sub_406ac0(eax_7, edx_2, ecx_8, eax_7)
    
    if (result == 0)
        if (ebp_2 u>= ebx_2)
            return result
        
        goto label_680e8c
    
    if (result s< 0)
    label_680e8c:
        
        if (arg2 != arg3)
            sub_46e0d0(arg2, arg3)
            int32_t ecx_10 = arg2[4]
            arg2[4] = arg3[4]
            arg3[4] = ecx_10
            int32_t ecx_11 = arg2[5]
            result = arg3[5]
            arg2[5] = result
            arg3[5] = ecx_11

return result
