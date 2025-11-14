// 函数: sub_523cc0
// 地址: 0x523cc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4_1 = arg3
void* ecx = *arg2
void* ebp = *arg3
void* ecx_1 = *(ecx + 4)
void* eax = *(ebp + 4)
int32_t esi = *(ecx_1 + 0x14)
int32_t ebx = *(eax + 0x14)

if (esi s< ebx)
    *arg2 = ebp
    *arg3 = ecx
else if (esi s<= ebx)
    int32_t xmm1_1 = *(ecx_1 + 0x10)
    int32_t xmm0_1 = *(eax + 0x10)
    
    if (xmm0_1 f> xmm1_1)
        *arg2 = ebp
        *arg3 = ecx
    else if (not(xmm1_1 f> xmm0_1) && not(*(eax + 0xc) f<= *(ecx_1 + 0xc)))
        *arg2 = ebp
        *arg3 = ecx

void* ecx_3 = *arg4
void* result = *(*arg2 + 4)
void* esi_1 = *(ecx_3 + 4)
int32_t ebp_1 = *(result + 0x14)
int32_t ebx_1 = *(esi_1 + 0x14)

if (ebx_1 s< ebp_1)
label_523d47:
    *arg4 = *arg2
    *arg2 = ecx_3
    void* esi_3 = *(ecx_3 + 4)
    result = *(*arg3 + 4)
    int32_t ebx_2 = *(esi_3 + 0x14)
    int32_t ebp_2 = *(result + 0x14)
    
    if (ebx_2 s< ebp_2)
    label_523d7e:
        result = *arg3
        *arg2 = result
        *arg3 = ecx_3
    else if (ebx_2 s<= ebp_2)
        int32_t xmm1_3 = *(esi_3 + 0x10)
        int32_t xmm0_5 = *(result + 0x10)
        
        if (xmm0_5 f> xmm1_3)
            goto label_523d7e
        
        if (not(xmm1_3 f> xmm0_5) && not(*(result + 0xc) f<= *(esi_3 + 0xc)))
            goto label_523d7e
else if (ebx_1 s<= ebp_1)
    int32_t xmm1_2 = *(esi_1 + 0x10)
    int32_t xmm0_3 = *(result + 0x10)
    
    if (xmm0_3 f> xmm1_2)
        goto label_523d47
    
    if (not(xmm1_2 f> xmm0_3) && not(*(result + 0xc) f<= *(esi_1 + 0xc)))
        goto label_523d47

return result
