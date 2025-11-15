// 函数: sub_5f1c00
// 地址: 0x5f1c00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int128_t* ecx = arg4
void* esi = arg2
void* eax = ecx - 1
void* var_4 = esi
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(eax)
int32_t eax_2 = eax_1 - edx
int32_t ebp_1 = eax_2 s>> 1
void* edi = esi

if (esi s< ebp_1)
    do
        void* edx_1 = (edi << 1) + 2
        edi = edx_1 - 1
        int32_t* ecx_1 = arg3 + edx_1 * 0x1c
        
        if (*ecx_1 s>= ecx_1[-7])
            edi = edx_1
        
        void* eax_7 = edi * 7
        void* edx_2 = arg3 + (eax_7 << 2)
        void* eax_9 = esi * 7
        esi = edi
        int128_t* ecx_2 = arg3 + (eax_9 << 2)
        *ecx_2 = *(arg3 + (eax_7 << 2))
        ecx_2[1].q = *(edx_2 + 0x10)
        eax_2 = *(edx_2 + 0x18)
        *(ecx_2 + 0x18) = eax_2
    while (edi s< ebp_1)
    
    ecx = arg4

if (edi == ebp_1 && (ecx.b & 1) == 0)
    void* eax_11 = ecx * 7
    void* edx_3 = arg3 + (eax_11 << 2)
    void* eax_13 = esi * 7
    esi = eax
    ecx = arg3 + (eax_13 << 2)
    *ecx = *(arg3 + (eax_11 << 2) - 0x1c)
    ecx[1].q = *(edx_3 - 0xc)
    eax_2 = *(edx_3 - 4)
    *(ecx + 0x18) = eax_2

int128_t* var_1c = ecx
return sub_5f1e90(eax_2, esi, arg3, var_4, arg5)
