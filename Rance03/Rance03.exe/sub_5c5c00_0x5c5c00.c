// 函数: sub_5c5c00
// 地址: 0x5c5c00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4_2 = arg1
arg1[0x8d] -= 4
float* eax = arg1[0x8d]
arg1[0x8d] -= 4
int32_t ebx = *arg1[0x8d]
arg1[0x8d] -= 4
void* edx = *arg1[0x8d]
int32_t ecx_4 = (arg1[0x5e] - arg1[0x5d]) s>> 2

if (edx u< ecx_4)
    ecx_4 = arg1[0x5d]
    edx = *(ecx_4 + (edx << 2))
    
    if (edx != 0)
        int32_t* ecx_6 = *(edx + 0xc) u>> 2
        
        if (ebx u>= ecx_6)
            return sub_5c24e0(eax, edx, ecx_6, arg1, 0x6e747c)
        
        int32_t ecx_7
        
        if (*(edx + 0xc) != 0)
            ecx_7 = *(edx + 8)
        else
            ecx_7 = 0
        
        float xmm1_1 = *(ecx_7 + (ebx << 2)) * *eax
        
        if (*(edx + 0xc) != 0)
            *(*(edx + 8) + (ebx << 2)) = xmm1_1
            return sub_5ddf50(&arg1[0x88], xmm1_1) __tailcall
        
        *(ebx << 2) = xmm1_1
        return sub_5ddf50(&arg1[0x88], xmm1_1) __tailcall

return sub_5c24e0(eax, edx, ecx_4, arg1, 0x6e74a0)
