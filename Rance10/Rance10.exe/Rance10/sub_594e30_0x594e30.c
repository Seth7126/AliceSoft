// 函数: sub_594e30
// 地址: 0x594e30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = arg4
void* esi = arg2
void* eax = ecx - 1
void* var_4 = esi
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(eax)
void* eax_2 = eax_1 - edx
int32_t ebp_1 = eax_2 s>> 1
void* edi = esi

if (esi s< ebp_1)
    do
        void* edx_1 = (edi << 1) + 2
        int32_t* ecx_1 = arg3 + edx_1 * 0x18
        edi = edx_1 - 1
        
        if (*ecx_1 s>= ecx_1[-6])
            edi = edx_1
        
        int128_t* ecx_2 = arg3 + edi * 0x18
        eax_2 = esi * 3
        esi = edi
        *(arg3 + (eax_2 << 3)) = *ecx_2
        *(arg3 + (eax_2 << 3) + 0x10) = ecx_2[1].q
    while (edi s< ebp_1)
    
    ecx = arg4

if (edi == ebp_1 && (ecx.b & 1) == 0)
    void* eax_6 = (ecx - 1) * 3
    ecx = arg3 + (eax_6 << 3)
    eax_2 = esi * 3
    esi = eax
    *(arg3 + (eax_2 << 3)) = *(arg3 + (eax_6 << 3))
    *(arg3 + (eax_2 << 3) + 0x10) = *(ecx + 0x10)

void* var_1c = ecx
return sub_595070(eax_2, esi, arg3, var_4, arg5)
