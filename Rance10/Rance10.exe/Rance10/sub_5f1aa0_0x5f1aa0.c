// 函数: sub_5f1aa0
// 地址: 0x5f1aa0
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
        int32_t* ecx_1 = arg3 + edx_1 * 0x14
        edi = edx_1 - 1
        
        if (*ecx_1 s>= ecx_1[-5])
            edi = edx_1
        
        int128_t* edx_2 = arg3 + edi * 0x14
        void* eax_6 = esi * 5
        esi = edi
        int128_t* ecx_2 = arg3 + (eax_6 << 2)
        *ecx_2 = *edx_2
        eax_2 = edx_2[1].d
        ecx_2[1].d = eax_2
    while (edi s< ebp_1)
    
    ecx = arg4

if (edi == ebp_1 && (ecx.b & 1) == 0)
    void* eax_7 = ecx * 5
    void* eax_8 = esi * 5
    esi = eax
    ecx = arg3 + (eax_8 << 2)
    *ecx = *(arg3 + (eax_7 << 2) - 0x14)
    eax_2 = *(arg3 + (eax_7 << 2) - 4)
    ecx[1].d = eax_2

int128_t* var_1c = ecx
return sub_5f1d80(eax_2, esi, arg3, var_4, arg5)
