// 函数: sub_5b6d40
// 地址: 0x5b6d40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4_1 = arg3
int64_t* ecx = arg6
void* esi = arg5

if (arg3 != arg2 && arg4 != esi)
    bool cond:0_1
    
    do
        int32_t xmm0_1 = *(esi - 8)
        void* ebx_1 = esi
        esi -= 0xc
        int64_t* edi_1 = arg2
        arg2 -= 0xc
        ecx -= 0xc
        int32_t eax_1
        
        if (xmm0_1 f<= *(arg2 + 4))
            arg2 = edi_1
            *ecx = *esi
            cond:0_1 = arg4 != esi
            eax_1 = *(esi + 8)
        else
            esi = ebx_1
            cond:0_1 = arg3 != arg2
            *ecx = *arg2
            eax_1 = arg2[1].d
        
        ecx[1].d = eax_1
    while (cond:0_1)

void* esi_1 = esi - arg4
return sub_6feca0(ecx - esi_1, arg4, esi_1)
