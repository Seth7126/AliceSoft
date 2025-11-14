// 函数: sub_523d90
// 地址: 0x523d90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = arg3
void* ebx = arg4
void* esi = (arg2 << 1) + 2
void* ebp = arg2
bool cond:0 = esi != ebx

while (esi s< ebx)
    void* edi_1 = *(*(arg3 + (esi << 2) - 4) + 4)
    int32_t ebp_1 = *(edi_1 + 0x14)
    void* eax_2 = *(*(arg3 + (esi << 2)) + 4)
    int32_t ebx_2 = *(eax_2 + 0x14)
    
    if (ebx_2 s< ebp_1)
        esi -= 1
    else if (ebx_2 s<= ebp_1)
        int32_t xmm1_1 = *(eax_2 + 0x10)
        int32_t xmm0_1 = *(edi_1 + 0x10)
        
        if (xmm0_1 f> xmm1_1)
            esi -= 1
        else if (not(xmm1_1 f> xmm0_1) && not(*(edi_1 + 0xc) f<= *(eax_2 + 0xc)))
            esi -= 1
    
    arg1 = *(arg3 + (esi << 2))
    ebx = arg4
    *(arg3 + (arg2 << 2)) = arg1
    arg2 = esi
    esi = (esi << 1) + 2
    cond:0 = esi != ebx

if (not(cond:0))
    arg1 = *(arg3 + (ebx << 2) - 4)
    *(arg3 + (arg2 << 2)) = arg1
    arg2 = ebx - 1

int32_t __saved_edi = arg6
return sub_523e30(arg1, arg2, arg3, ebp, arg5)
