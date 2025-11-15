// 函数: sub_4f3d50
// 地址: 0x4f3d50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = arg2
int32_t ecx = arg4
void* esi = ebx
int32_t var_4 = ebx
int32_t ebp = ecx - 1
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(ebp)
int32_t eax_3 = (eax_1 - edx) s>> 1
int32_t var_c = eax_3

if (ebx s< eax_3)
    do
        void* edx_1 = *(arg3 + (esi << 3) + 4)
        void* ebp_1 = (esi << 1) + 2
        void* esi_1 = *(arg3 + (ebp_1 << 2))
        int32_t ecx_1 = *(edx_1 + 4)
        int32_t eax_4 = *(esi_1 + 4)
        
        if (eax_4 s< ecx_1)
            eax_4.b = 1
        else if (eax_4 s<= ecx_1)
            eax_4 = *(esi_1 + 8)
            int32_t ecx_2 = *(edx_1 + 8)
            
            if (eax_4 s< ecx_2)
                eax_4.b = 1
            else if (eax_4 s<= ecx_2)
                eax_4.b = *(esi_1 + 0xc) s< *(edx_1 + 0xc)
            else
                eax_4.b = 0
        else
            eax_4.b = 0
        
        esi = ebp_1 - 1
        
        if (eax_4.b == 0)
            esi = ebp_1
        
        *(arg3 + (ebx << 2)) = *(arg3 + (esi << 2))
        ebx = esi
        eax_3 = var_c
    while (esi s< eax_3)
    
    ecx = arg4

if (esi == eax_3 && (ecx.b & 1) == 0)
    eax_3 = *(arg3 + (ecx << 2) - 4)
    *(arg3 + (ebx << 2)) = eax_3
    ebx = ebp

int32_t var_20 = ecx
return sub_4f3ea0(eax_3, ebx, arg3, var_4, arg5)
