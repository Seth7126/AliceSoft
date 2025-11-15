// 函数: sub_594cd0
// 地址: 0x594cd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int64_t* ecx = arg4
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
        int32_t* ecx_1 = arg3 + edx_1 * 0xc
        edi = edx_1 - 1
        
        if (*ecx_1 s>= ecx_1[-3])
            edi = edx_1
        
        void* eax_5 = edi * 3
        void* eax_6 = esi * 3
        esi = edi
        *(arg3 + (eax_6 << 2)) = *(arg3 + (eax_5 << 2))
        eax_2 = *(arg3 + (eax_5 << 2) + 8)
        *(arg3 + (eax_6 << 2) + 8) = eax_2
    while (edi s< ebp_1)
    
    ecx = arg4

if (edi == ebp_1 && (ecx.b & 1) == 0)
    void* eax_7 = ecx * 3
    void* eax_8 = esi * 3
    esi = eax
    ecx = arg3 + (eax_8 << 2)
    *ecx = *(arg3 + (eax_7 << 2) - 0xc)
    eax_2 = *(arg3 + (eax_7 << 2) - 4)
    ecx[1].d = eax_2

int64_t* var_1c = ecx
return sub_594f80(eax_2, esi, arg3, var_4, arg5)
